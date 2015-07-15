#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class otel
{
    string *musteri_adi[100],*soyadi[100];
    int toplam,sayac1,sayac2;
    enum statu
    {
        bos,dolu
    }odalar[45];
    public:
    otel();
    void oda_isletmesi();
    void oda_rezervasyonu();
    void oda_bosaltma();
    void musterilerin_sayisi();
    void yatak_odasi_raporu();
    void seminer_odasi_raporu();
    void gelir();
};
otel::otel()
{
    sayac1=0;
    sayac2=0;
    toplam=0;

    oda_isletmesi();
}
void otel::oda_isletmesi()
{
    for(int a=1;a<46;a++)
    odalar[a]=bos;
    int sayi;
    do
    {
        cout<<"\n\t\t---KODLAB OTEL----\n"<<endl;
        cout<<"\t\t1.Oda Rezervasyonu"<<endl;
        cout<<"\t\t2.Oda Bosaltma"<<endl;
        cout<<"\t\t3.Dolu Oda Sayisi"<<endl;
        cout<<"\t\t4.Yatak Odasi Raporu"<<endl;
        cout<<"\t\t5.Seminer Odasi Raporu"<<endl;
        cout<<"\t\t6.Gunluk Toplam Gelir"<<endl;
        cout<<"\t\t7.Cikis Yap"<<endl;
        cout<<"seciminizin numarasini giriniz:";
        cin>>sayi;

        switch(sayi)
        {
            case 1: oda_rezervasyonu();
            break;
            case 2: oda_bosaltma();
            break;
            case 3: musterilerin_sayisi();
            break;
            case 4: yatak_odasi_raporu();
            break;
            case 5: seminer_odasi_raporu();
            break;
            case 6: gelir();
            break;

            default: cout<<"\nYanlis bir deger girdiniz.Lutfen dogru bir deger giriniz:"<<endl;

        }
    }while(sayi!=7);
}
void otel::oda_rezervasyonu()
{
    int sayi,x2,i=1,j=6,k=16;
    string ad,o_ad;
    cout<<"\n\t\t- lutfen bir oda tipi seciniz -\n"<<endl;
    cout<<"\t\t1.1 kisilik oda(40 tl)"<<endl;
    cout<<"\t\t2.2 kisilik oda(60 tl)"<<endl;
    cout<<"\t\t3.3 kisilik oda(300 tl)"<<endl;
    cin>>sayi;
    switch(sayi)
    {
        case 1:
        for(j=6;j<16;j++)
        {
            if(odalar[j]!=dolu)
            {
                odalar[j]=dolu;
                cout<<"adiniz:";
                cin>>ad;
                cout<<"soyadiniz:";
                cin>>o_ad;
                cout<<"kac gun kalacaksiniz:";
                cin>>x2;
                toplam+=x2*40;
                sayac2++;
                musteri_adi[j]=new string;
                *musteri_adi[j]=ad;
                soyadi[j]=new string;
                *soyadi[j]=o_ad;
                break;
            }
        }
        if(j==16)
        cout<<"malesef butun 1 kisilik odalar dolu."<<endl;
        break;
        case 2:
        for(k=16;k<46;k++)
        {
            if(odalar[k]!=dolu)
            {
                 odalar[j]=dolu;
                cout<<"adiniz:";
                cin>>ad;
                cout<<"soyadiniz:";
                cin>>o_ad;
                cout<<"kac gun kalacaksiniz:";
                cin>>x2;
                toplam+=x2*40;
                sayac2++;
                musteri_adi[k]=new string;
                *musteri_adi[k]=ad;
                soyadi[k]=new string;
                *soyadi[k]=o_ad;
                break;

            }
        }
        if(k==46)
        cout<<"malesef butun odalar dolu.\n"<<endl;
        break;
        case 3:
        for(int i=1;i<6;i++)
        {
            if(odalar[i]!=dolu)
            {
                odalar[i]=dolu;
                cout<<"adiniz:";
                cin>>ad;
                cout<<"soyadiniz:";
                cin>>o_ad;
                cout<<"kac gun kalacaksiniz:";
                cin>>x2;
                toplam+=x2*40;
                sayac2++;
                musteri_adi[i]=new string;
                *musteri_adi[i]=ad;
                soyadi[i]=new string;
                *soyadi[i]=o_ad;
                break;
            }

        }

    if(i==6)
    cout<<"butun seminer odalari dolu."<<endl;
    break;
    default:
    cout<<"lutfen dogru basiniz."<<endl;

} }
void otel::oda_bosaltma()
{
    cout<<"bosaltacaginiz oda numarasi:";
    int sayi;
    cin>>sayi;
    if(odalar[sayi]==dolu)
    {
        if(sayi>0 && sayi<6)
        {
            odalar[sayi]=bos;
            delete musteri_adi[sayi];
            delete soyadi[sayi];
            sayac2--;
            cout<<"odalar silindi!"<<endl;
        }
        else if(sayi>5 && sayi<46)
        {
             odalar[sayi]=bos;
            delete musteri_adi[sayi];
            delete soyadi[sayi];
            sayac2--;
            cout<<"odalar silindi!"<<endl;
        }
    }
    else
    cout<<"lutfen oda numarasini dogru giriniz...\n"<<endl;
}
void otel::musterilerin_sayisi()
{
    cout<<"dolu oda sayisi:"<<sayac1+sayac2<<endl;
}
void otel::yatak_odasi_raporu()
{
    if(sayac2==0)
    cout<<"butun odalar bos"<<endl;
    else
    {
        cout<<"oda numarasi musteri adi musteri soyadi  "<<endl;
        cout<<"=========================================="<<endl;
        for(int i=6;i<46;i++)
        if(odalar[i]==dolu)
        cout<<i<<"\t\t"<<*musteri_adi[i]<<"\t\t"<<*soyadi[i]<<endl;
    }
}
void otel::seminer_odasi_raporu()
{
    if(sayac1!=6)
    {
        cout<<"seminer odalari dolu"<<endl;
        for(int i=1;i<6;i++)
        if(odalar[i]==dolu)
        cout<<"oda numarasi: "<<i<<endl;

    }
    else cout<<"butun seminer odalari bos"<<endl;

}
void otel::gelir()
{
    cout<<"gelir:"<<toplam<<endl;
}
int main()
{
    otel a;
    return 0;
}

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class kutuphane
{
    string *kitap_adi[100],*yazar_adi[100];
    int sayac1,sayac2;
    enum statu
    {
        var,yok
    }kitaplar[45];
    public:
    kutuphane();
    void kutuphane_isletmesi();
    void kitap_ekleme();
    void kitap_silme();
    void kitap_goster();
    void exit();
    void kitap_kirala();
    void kitap_iade();
    void kitap_arama();



};
kutuphane::kutuphane()
{
    sayac1=0;
    sayac2=0;
    kutuphane_isletmesi();
}
void kutuphane::kutuphane_isletmesi()
{
    for(int a=1;a<45;a++)
    kitaplar[a]=yok;
    int sayi;
    do
    {
        cout<<"\n\t\t******KUTUPHANE PROGRAMÝ*******\n"<<endl;
        cout<<"\t\t1.Kitap Ekleme"<<endl;
        cout<<"\t\t2.Kitap Silme"<<endl;
        cout<<"\t\t3.Kitap Goster"<<endl;
        cout<<"\t\t4.Kitap Kiralama"<<endl;
        cout<<"\t\t5.Kitap İade"<<endl;
        cout<<"\t\t6.Kitap Arama"<<endl;
        cout<<"\t\t7.cikis yap..\n"<<endl;
        cout<<"seciminizin numarasini giriniz:";
        cin>>sayi;
        switch(sayi)
        {
            case 1:kitap_ekleme();
            break;
            case 2:kitap_silme();
            break;
            case 3:kitap_goster();
            break;
            case 4:kitap_kirala();
            break;
            case 5:kitap_iade();
            break;
            case 6:kitap_arama();
            break;
            case 7:exit();


            default: cout<<"\nYanlis bir deger girdiniz.Lütfen dogru giriniz:"<<endl;

        }
    }while(sayi!=5);
}
void kutuphane::kitap_ekleme()
{
    int sayi;
    string k_ad,y_ad;
           for(int j=1;j<15;j++)
        {
            if(kitaplar[j]!=var)
            {
                kitaplar[j]=var;
                cout<<"kitap adi:";
                cin>>k_ad;
                cout<<"yazar adi:";
                cin>>y_ad;
                 sayac1++;

                kitap_adi[j]=new string;
                *kitap_adi[j]=k_ad;
                yazar_adi[j]=new string;
                *yazar_adi[j]=y_ad;

                 break;
            }
        }
}


void kutuphane::kitap_silme()
{
    cout<<"sileceginiz kitap numarasi:";
    int sayi;
    cin>>sayi;
    if(kitaplar[sayi]==var)
    {
        if(sayi>0 && sayi<46)

            kitaplar[sayi]=yok;
            delete kitap_adi[sayi];
            delete yazar_adi[sayi];
            sayac1--;
            cout<<"kitap silindi"<<endl;
        }

        else
        cout<<"lutfen kitap numarasini dogru giriniz:"<<endl;

}
void kutuphane::kitap_goster()
{
    if(sayac1==0)
    cout<<"kutuphane bos"<<endl;
    else
    {
        cout<<"kitap numarasi Kitap Adi Yazar Adi  "<<endl;
        cout<<"===================================="<<endl;
        for(int i=1;i<45;i++)

            if(kitaplar[i]==var)
            cout<<i<<"\t\t"<<*kitap_adi[i]<<"\t\t"<<*yazar_adi[i]<<endl;

    }
}

void kutuphane::kitap_kirala()
{
    string kiralayan_adi,soyadi;
    cout<<"kiralayacaginiz kitap numarasi:";
    int sayi;
    cin>>sayi;

    if(kitaplar[sayi]==var)
    {
             cout<<"kiralayanin adi:";
            cin>>kiralayan_adi;
            cout<<"kiralayanin soyadi:";
            cin >> soyadi;
        if(sayi>0 && sayi<46)


            kitaplar[sayi]=yok;
            delete kitap_adi[sayi];
            delete yazar_adi[sayi];
            sayac1--;



            cout<<kiralayan_adi<< soyadi<<" tarafindan kitap kiralandi"<<endl;

        }

        else
        cout<<"lutfen kitap numarasini dogru giriniz:"<<endl;

}
void kutuphane::kitap_iade()
{

    int sayi;
    cout<<"iade edeceginiz kitap numarasi:";
    cin>>sayi;

     if(kitaplar[sayi]==yok)
     {
         if(sayi>0 && sayi<46)


            kitaplar[sayi]=var;
            sayac1++;

         cout<<" kitap iade edildi"<<endl;

     }

        else
        cout<<"lutfen kitap numarasini dogru giriniz:"<<endl;


}
void kutuphane::kitap_arama()
{
    int sayi;
    cout<<"arayacaginiz kitap numarasi:";
    cin>>sayi;
    if(kitaplar[sayi]==var)

    cout<<"aradiginiz kitap vardir."<<endl;

    else if(kitaplar[sayi]!=var)
    cout<<"kitap yok";
    else
    cout<<"numarayi dogru giriniz:";
    }


void kutuphane::exit()
{
    int sayi=7;
    if(sayi!=7);
}


int main()
{
    kutuphane a;
    return 0;
}

#include<iostream>
#include<cmath>
#include<ctime>
#include<string>
#define MAX 100
using namespace std;
class arac
{
    public:
    string plaka;
    string kisi_ad,kisi_soyad,kisi_tel;
    time_t giris;

}araba[MAX];
class otopark
{
    public:
    string gorevli_id,gorevli_sifre;
    int i,gelir;
    otopark(string id,string s)
    {
        gorevli_id=id;
        gorevli_sifre=s;
        gelir=0;
        i=-1;
    }
    void menu()
    {
        int sayi;
        cout<<"----OTOPARK PROGRAMÝ----"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"1.YENÝ ARAC"<<endl;
        cout<<"2.ARAC CÝKÝS"<<endl;
        cout<<"3.ARAC LÝSTELE"<<endl;
        cout<<"4.RAPOR"<<endl;
        cout<<"5.CÝKÝS"<<endl;
        cout<<"lutfen seciminizi yapiniz:";
        cin>>sayi;
        case 1: yeni();
        break;
        case 2: cikar();
        break;
        case 3: listele();
        break;
        case 4: rapor();
        break;
        case 5: exit(0);
        default: cout<<"hatali secim!!!"<<endl;
        menu();
        break;
    }
    void yeni()
{
    i++;
    cout<<"Aracin Sahibinin Adi:";
    cin>>araba[i].kisi_ad;
    cout<<"Aracin Sahibinin Soyadi:";
    cin>>araba[i].kisi_soyad;
    cout<<"Aracin Sahibinin Telefonu:";
    cin>>araba[i].kisi_tel;
    cout<<"Aracin Plakasi:";
    cin>>araba[i].plaka;
    cout<<"islem basarili."<<endl;
    time(&araba[i].giris);
    menu();

}
void cikar()
{
    bool buldu=false;
    int j=0,k,saat;
    double sure;
    time_t cikis;
    string plka;
    time(&cikis);
    cout<<"plaka girin:";
    cin>>plka;
    while(j<=i)
    {
        if(araba[i].plaka==plka)
        {
            sure=difftime(cikis,araba[j].giris);
            for(k=j;k<=i;k++)
            {
                araba[k]=araba[k+1];
            }
            i--;
            buldu=true;
            break;
        }
        j++;
    }
    if(buldu==true)
    {
        cout<<"plaka bulunamadi!!!"<<endl;
        menu();
    }
    sure=sure/3600;
    saat=ceil(sure);
    cout<<"ucret="<<saat*5<<"TL"<<endl;
    gelir+=saat*5;
    menu();

    }
    void listele()
    {
        for(int j=0;j<=i;j++)
        {
            cout<<araba[j].plaka<<endl;
        }
        menu();
    }
    void rapor()
    {
        cout<<"suan ki gelir="<<gelir<<"TL"<<endl;
        menu();
    }
};

    int main()
{
    otopark calisan("ahmet","9258");
    string ad,sifre;
    int i=0;
    cout<<"OTOPARK PROGRAMÝ"<<endl;
    while(1)
    {
        cout<<"Kullanici Adini Giriniz:"<<endl;
        cin>>ad;
        cout<<"Sifreyi Girin:"<<endl;
        cin>>sifre;
        if(calisan.gorevli_id=ad)
        if(calisan.gorevli_sifre)
        {
            cout<<"sifre dogru"<<endl;
            break;
        }
        cout<<"tekrar deneyin!!!"<<endl;
    }
    calisan.menu();
    return 0;
}

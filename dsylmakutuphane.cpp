#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class kitap
{
    public:
    string K_Adi;
    string Y_Adi;
    string K_No;
    string K_Tur;
    void kitapgir();
    void kitapyazdir();
};
void kitap::kitapgir()
{
    cout.setf(ios::left);
    cout<<setw(20)<<"Kitap Adi:";
    cin>>K_Adi;
    cout<<setw(20)<<"Yazar Adi:";
    cin>>Y_Adi;
    cout<<setw(20)<<"Kitap No..:";
    cin>>K_No;
    cout<<setw(20)<<"Kitap Turu:";
    cin>>K_Tur;

}
void kitap::kitapyazdir()
{
    cout.setf(ios::left);
    cout<<setw(20)<<endl<<"Kitap Adi.."<<K_Adi<<endl;
    cout<<setw(20)<<endl<<"Yazar Adi.."<<Y_Adi<<endl;
    cout<<setw(20)<<endl<<"Kitap No.."<<K_No<<endl;
    cout<<setw(20)<<endl<<"Kitap Turu.."<<K_Tur<<endl;


}
class Kayitlar
{

    public:
    kitap kitaplar[50];
    kitap temp_kitap;
    kitap temp_kitap1;
    kitap temp_kitap2;
    kitap temp_kitap3;
    kitap temp_kitap4;
    string nu;
    string num;
    string numar;
    string nu2;
    string numara;
    int aa;
    int Kitapsyisi;
    string temp_no;
    fstream dosya1;
    fstream dosya2;
    fstream temp_dosya;
    Kayitlar()
{
    Kitapsyisi=0;
    aa=0;
}
void KitapEkle()
{
    dosya1.open("kitaplik.txt",ios::out|ios::in|ios::app);
    dosya1.setf(ios::left);
    kitaplar[Kitapsyisi].kitapgir();
    kitap k=kitaplar[Kitapsyisi];

    dosya1
    <<setw(20)<<k.K_Adi
    <<setw(20)<<k.Y_Adi
    <<setw(20)<<k.K_No
    <<setw(20)<<k.K_Tur
    <<endl;
    dosya1.close();
}
void  KitapAra()
{
    dosya1.open("kitaplik.txt",ios::out|ios::in|ios::app);
    dosya1.setf(ios::left);
    cout<<"aranacak kitap numarasi:";
    cin>>numara;
    while(!dosya1.eof())
    {
        dosya1>>temp_kitap.K_Adi;
        dosya1>>temp_kitap.Y_Adi;
        dosya1>>temp_kitap.K_No;
        dosya1>>temp_kitap.K_Tur;
        if(temp_kitap.K_No==numara)
        {
            temp_kitap.kitapyazdir();
            cout<<setw(20)<<"kutuphanemizde kitap bulunmaktadir";

        }
        if(temp_kitap.K_No==numara && dosya1.eof())
        {
            cout<<"Kitap bulunamadi.."<<endl;

        }


    }
}
void KitapKirala()
{

    string ad;
    dosya1.open("kitaplik.txt",ios::out|ios::in|ios::app);
    dosya1.setf(ios::left);
    temp_dosya.setf(ios::left);
    temp_no="0";
    int aa=0;
     cout<<"kiralanacak kitapin numarasini giriniz:";
       cin>>num;
    while(!dosya1.eof())
    {
        dosya1>>temp_kitap3.K_Adi;
        dosya1>>temp_kitap3.Y_Adi;
        dosya1>>temp_kitap3.K_No;
        dosya1>>temp_kitap3.K_Tur;
       if(temp_no!=temp_kitap3.K_No)
        {
            temp_kitap3.kitapyazdir();
            aa=1;
            cout<<"kiralayanin adi:";
            cin>>ad;


        }
        if((aa==0) && dosya1.eof())
        {
            cout<<"kitap bulunamadi"<<endl;
            aa=0;
        }
       temp_no=temp_kitap3.K_No;
    }
             dosya1.close();
       temp_dosya.close();
       remove("kitaplik.txt");
       rename("gecici dosya.txt","kitaplik.txt");



}
void KitapGoster()
{
    temp_no="0";

     dosya1.open("kitaplik.txt",ios::out|ios::in|ios::app);
     while(!dosya1.eof())
     {
        dosya1>>temp_kitap.K_Adi;
        dosya1>>temp_kitap.Y_Adi;
        dosya1>>temp_kitap.K_No;
        dosya1>>temp_kitap.K_Tur;
        if(temp_no!=temp_kitap.K_No)
        {
            temp_kitap.kitapyazdir();
        }
        temp_no=temp_kitap.K_No;
     }
}
void KitapSil()
{

       dosya1.open("kitaplik.txt",ios::out|ios::in|ios::app);
       temp_dosya.open("gecici dosya.txt",ios::out|ios::in|ios::app);
       temp_dosya.setf(ios::left);
       temp_no="0";
       int aa=0;
       cout<<"silinecek kitapin numarasini giriniz:";
       cin>>nu2;
       while(!dosya1.eof())
       {
               dosya1>>temp_kitap2.K_Adi;
        dosya1>>temp_kitap2.Y_Adi;
        dosya1>>temp_kitap2.K_No;
        dosya1>>temp_kitap2.K_Tur;
        if(temp_no!=temp_kitap2.K_No)
        {
            temp_kitap2.kitapyazdir();
            aa=1;
        }
        if((aa==0) && dosya1.eof())
        {
            cout<<"kitap bulunamadi"<<endl;
            aa=0;
        }
        temp_no=temp_kitap2.K_No;

       }
       dosya1.close();
       temp_dosya.close();
       remove("kitaplik.txt");
       rename("gecici dosya.txt","kitaplik.txt");

}
void KitapIade()
{
    string adi;
    dosya1.open("kitaplik.txt",ios::out|ios::in|ios::app);
    dosya1.setf(ios::left);
    temp_dosya.setf(ios::left);
    temp_no="0";
    int aa=0;
     cout<<"iade edilecek kitapin numarasini giriniz:";
       cin>>numar;
    while(!dosya1.eof())
    {
        dosya1>>temp_kitap4.K_Adi;
        dosya1>>temp_kitap4.Y_Adi;
        dosya1>>temp_kitap4.K_No;
        dosya1>>temp_kitap4.K_Tur;
       if(temp_no!=temp_kitap4.K_No)
        {
            temp_kitap4.kitapyazdir();
            aa=1;
            cout<<"iade edecek kisinin  adi:";
            cin>>adi;


        }
        if((aa==0) && dosya1.eof())
        {
            cout<<"kitap bulunamadi"<<endl;
            aa=0;
        }
       temp_no=temp_kitap4.K_No;
    }
             dosya1.close();
       temp_dosya.close();
       remove("gecici dosya.txt");
       rename("kitaplik.txt","gecici dosya..txt");


}
};
int main()
{
    int islem=0;

    Kayitlar kayit1;
    cout<<"------------KUTUPHANE ÝSLEMLERÝ------------"<<endl;
    while(1)
    {
        cout<<endl<<endl;
        cout<<endl<<"1.kitap ekle"<<endl<<"2.kitap ara"<<endl<<"3.kitap kirala"<<endl<<"4.kitap goster"<<endl<<"5.kitap Sil"<<endl<<"6.kitap iade"<<endl<<"7.cikis"<<endl;
        cout<<"seciminizi yapin:";
        etiket1:
        cin>>islem;
        switch(islem)
		{
		case 1: kayit1.KitapEkle(); break;
		case 2: kayit1.KitapAra(); break;
		case 3:kayit1.KitapKirala(); break;
		case 4:kayit1.KitapGoster();   break;
		case 5: kayit1.KitapSil(); break;
		case 6:kayit1.KitapIade(); break;
		case 7: goto etiket2;		   break;
		default:
			{
				cout<<"Yanlis Numara girdiniz...!! Tekrar giriniz";
				goto etiket1;
			}	break;
		}
	}

etiket2:
	cout<<"Program kapaniyor...";
}




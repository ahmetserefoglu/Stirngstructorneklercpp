#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Program
{
public:
	string P_Ad;
	string version;
	string P_No;
	string tarih;

	void ProgramGir();
	void ProgramYazdir();
};

void Program::ProgramGir()
{
cout.setf(ios::left);
cout<<setw(20)<<"Program Adi...:";
cin>>P_Ad;
cout<<setw(20)<<"Program Versionu...:";
cin>>version;
cout<<setw(20)<<"Program No...:";
cin>>P_No;
cout<<setw(20)<<"Program Tarih...:";
cin>>tarih;
}
void Program::ProgramYazdir()
{
cout.setf(ios::left);
cout<<setw(20)<<endl<<"Program Adi...:"<<P_Ad<<endl;
cout<<setw(20)<<"Program Versionu...:"<<version<<endl;
cout<<setw(20)<<"Program No...:"<<P_No<<endl;
cout<<setw(20)<<"Program Tarih...:"<<tarih<<endl;
}


class Musteri
{
public:
	string M_Adi;
	string M_SoyAdi;
	string V_tarih;
	int guncelleme;

	void MusteriGir();
	void MusteriYaz();
};

void Musteri::MusteriGir()
{
		cout.setf(ios::left);
		cout<<setw(20)<<"Musteri Adi...:";
		cin>>M_Adi;
		cout<<setw(20)<<"Musteri Soyadi...:";
		cin>>M_SoyAdi;
		cout<<setw(20)<<"Verilis Tarihi...:";
		cin>>V_tarih;
		cout<<setw(20)<<"Guncelleme Sayisi:";
		cin>>guncelleme;
	}
void Musteri::MusteriYaz()
{
		cout.setf(ios::left);
		cout<<setw(20)<<endl<<"Musteri Adi...:"<<M_Adi<<endl;
		cout<<setw(20)<<"Musteri Soyadi...:"<<M_SoyAdi<<endl;
		cout<<setw(20)<<"Verilis Tarihi...:"<<V_tarih<<endl;
		cout<<setw(20)<<"Program güncellemesi...:"<<guncelleme<<endl;
}

class Kayitlar
{
public:
	Program Programlar[50];
	Musteri Musteriler[50];
	Program Temp_Program;
	Program Temp_Program2;
	Program Temp_Program3;
	Musteri Temp_Musteri;
	string nu;
	string nu2;
	int aa;
	int ProgSayisi;
	int MustSayisi;
	string temp_no; // geçici deðiþkeni tutmak için, silmede 2 kere yazmamasý için
	fstream dosya1;
	fstream dosya2;
	fstream temp_dosya;

	Kayitlar() // constractor kurulumu
	{
	ProgSayisi=0;
	MustSayisi=0;
	aa=0;

	/*dosya1.open("program kayitlari.txt",ios::out|ios::in|ios::app);
	dosya1.setf(ios::left);

	dosya2.open("musteri kayitlari.txt",ios::out|ios::in|ios::app);
	dosya2.setf(ios::left);*/
	}

	void ProgramEkle()
	{
		dosya1.open("program kayitlari.txt",ios::out|ios::in|ios::app);
		dosya1.setf(ios::left);

	Programlar[ProgSayisi].ProgramGir();
	Program P = Programlar[ProgSayisi]; // kolaylýk için P'yi Programlar[ProgSayisi]'na eþitledim


		dosya1
		<<setw(20)<<P.P_Ad
		<<setw(20)<<P.version
		<<setw(20)<<P.P_No
		<<setw(20)<<P.tarih
		<<endl;
		dosya1.close();
	}

	bool ProgramSec(string Numara)
	{

		dosya1.open("program kayitlari.txt",ios::out|ios::in|ios::app);
		dosya1.setf(ios::left);

		while(!dosya1.eof())
		{
			dosya1>>Temp_Program.P_Ad;
			dosya1>>Temp_Program.version;
			dosya1>>Temp_Program.P_No;
			dosya1>>Temp_Program.tarih;

			if(Temp_Program.P_No==Numara)
			{
				Temp_Program.ProgramYazdir();
				return false;
			}

			if(Temp_Program.P_No!=Numara && dosya1.eof())
			{
				cout<<"Program bulunamadi"<<endl;
				return true;
			}
		}
	}

	void MusteriEkle()
	{
		cout<<"Satilan Program Numarasini Giriniz:";
		dosya1.close();
		cin>>nu;
		bool bProgram=	ProgramSec(nu);

		if(bProgram)
		{
			dosya1.close();
			return MusteriEkle();
		}

		dosya1.close();

		Musteriler[MustSayisi].MusteriGir();
		Musteri M = Musteriler[MustSayisi]; // kolaylýk için M'yi Müþterilere eþitledim

		dosya2.open("musteri kayitlari.txt",ios::out|ios::in|ios::app);
		dosya2.setf(ios::left);

		dosya2

		<<setw(20)<<M.M_Adi
		<<setw(20)<<M.M_SoyAdi
		<<setw(20)<<M.guncelleme
		<<setw(20)<<M.V_tarih
		<<setw(20)<<Temp_Program.P_Ad
		<<setw(20)<<Temp_Program.version
		<<setw(20)<<Temp_Program.P_No
		<<setw(20)<<Temp_Program.tarih
		<<endl;
		dosya2.close();
	}

	void ProgramGoster()
	{
		temp_no="0";
		dosya1.open("program kayitlari.txt",ios::out|ios::in);

	  while(!dosya1.eof())
		{
			dosya1>>Temp_Program3.P_Ad;
			dosya1>>Temp_Program3.version;
			dosya1>>Temp_Program3.P_No;
			dosya1>>Temp_Program3.tarih;

			if(temp_no!=Temp_Program3.P_No)
			{
				Temp_Program3.ProgramYazdir();
			}
			temp_no=Temp_Program3.P_No;


		}
	  dosya1.close();
	}

	void MusteriGoster()
	{

		dosya2.open("musteri kayitlari.txt",ios::out|ios::in);
		temp_no="0";

	  while(!dosya2.eof())
		{
			dosya2>>Temp_Musteri.M_Adi;
			dosya2>>Temp_Musteri.M_SoyAdi;
			dosya2>>Temp_Musteri.guncelleme;
			dosya2>>Temp_Musteri.V_tarih;
			dosya2>>Temp_Program3.P_Ad;
			dosya2>>Temp_Program3.version;
			dosya2>>Temp_Program3.P_No;
			dosya2>>Temp_Program3.tarih;

			if(temp_no!=Temp_Program3.P_No)
			{
			Temp_Musteri.MusteriYaz();
			Temp_Program3.ProgramYazdir();
			cout<<"*****************************";
			}
			temp_no=Temp_Program3.P_No;
		}
	  dosya2.close();

	}
	void ProgramSil()
	{
		dosya1.open("program kayitlari.txt",ios::out|ios::in|ios::app);
		temp_dosya.open("gecici dosya.txt",ios::out|ios::in|ios::app);
		temp_dosya.setf(ios::left);

		temp_no="0";
		cout<<"Silinecek programin numarasini giriniz...:";
		cin>>nu2;

		while(!dosya1.eof())
		{
			dosya1>>Temp_Program2.P_Ad;
			dosya1>>Temp_Program2.version;
			dosya1>>Temp_Program2.P_No;
			dosya1>>Temp_Program2.tarih;

			if(Temp_Program2.P_No==nu2)
			{
				Temp_Program2.ProgramYazdir();
				aa=1;
			}

			if(Temp_Program2.P_No!=nu2 && temp_no!=Temp_Program2.P_No)
			{
				temp_dosya<<setw(20)<<Temp_Program2.P_Ad
				<<setw(20)<<Temp_Program2.version
				<<setw(20)<<Temp_Program2.P_No
				<<Temp_Program2.tarih<<endl;
			}

			if(aa==0 && dosya1.eof())
			{
				cout<<"Program bulunamadi"<<endl;
				aa=0;
			}

			temp_no=Temp_Program2.P_No;
		}

		dosya1.close();
		temp_dosya.close();
		remove("program kayitlari.txt");
		rename("gecici dosya.txt","program kayitlari.txt");
		// emin misiniz ekle! (e/h) !

	}

	void MusteriSil()
	{
		dosya2.open("musteri kayitlari.txt",ios::out|ios::in|ios::app);
		temp_dosya.open("gecici dosya.txt",ios::out|ios::in|ios::app);
		temp_dosya.setf(ios::left);

		temp_no="0";
		cout<<"Silinecek programin numarasini giriniz...:";
		cin>>nu2;

		while(!dosya2.eof())
		{
			dosya2>>Temp_Musteri.M_Adi;
			dosya2>>Temp_Musteri.M_SoyAdi;
			dosya2>>Temp_Musteri.guncelleme;
			dosya2>>Temp_Musteri.V_tarih;
			dosya2>>Temp_Program2.P_Ad;
			dosya2>>Temp_Program2.version;
			dosya2>>Temp_Program2.P_No;
			dosya2>>Temp_Program2.tarih;

			if(Temp_Program2.P_No==nu2)
			{
				Temp_Musteri.MusteriYaz();
				Temp_Program2.ProgramYazdir();
				aa=1;
			}

			if(Temp_Program2.P_No!=nu2 && temp_no!=Temp_Program2.P_No)
			{
				temp_dosya<<setw(20)<<Temp_Musteri.M_Adi
				<<setw(20)<<Temp_Musteri.M_SoyAdi
				<<setw(20)<<Temp_Musteri.guncelleme
				<<setw(20)<<Temp_Musteri.V_tarih
				<<setw(20)<<Temp_Program2.P_Ad
				<<setw(20)<<Temp_Program2.version
				<<setw(20)<<Temp_Program2.P_No
				<<Temp_Program2.tarih<<endl;
			}

			if(aa==0 && dosya2.eof())
			{
				cout<<"Musteri bulunamadi"<<endl;
				aa=0;
			}

			temp_no=Temp_Program2.P_No;
		}

		dosya2.close();
		temp_dosya.close();
		remove("musteri kayitlari.txt");
		rename("gecici dosya.txt","musteri kayitlari.txt");
	}
};


int main()
{
	int islem=0;

	Kayitlar Kayit1;
	cout<<"...::: Dosyalama islemleri :::..."<<endl;

	while(1)
	{
		cout<<endl<<endl;
		cout<<endl<<"1.Program Kaydet"<<endl<<"2.Musteri Kaydet"<<endl<<"3.Program Sil"<<endl<<"4.Musteri Sil"<<endl<<"5.Programlari Listele"
		<<endl<<"6.Musteri Goster"<<endl<<"7.Cikis";

		cout<<endl<<"Yapmak istediginiz islemin numarasini giriniz...";
		etiket1:
		cin>> islem;

		switch(islem)
		{
		case 1: Kayit1.ProgramEkle();  break;
		case 2: Kayit1.MusteriEkle();  break;
		case 3: Kayit1.ProgramSil();   break;
		case 4: Kayit1.MusteriSil();   break;
		case 5: Kayit1.ProgramGoster(); break;
		case 6: Kayit1.MusteriGoster(); break;
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


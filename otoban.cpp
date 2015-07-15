#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class otomasyon
{
    string *ogrenci_adi[100],*soyadi[100];
     double vize1,vize2,final;
    int sayac1,sayac2,sayac3,sayac4;
    enum statu
    {
        var,yok
    }ogrenciler[40];
    public:
    otomasyon();
    void ogrenci_isletmesi();
    void ogrenci_ekleme();
    void ogrenci_silme();
    void ogrenci_arama();
    void ogrenci_ortalama();
    void ogrenci_raporu();

    void exit();
};
otomasyon::otomasyon()
{
    sayac1=0;
    sayac2=0;
    sayac3=0;
    sayac4=0;
    ogrenci_isletmesi();

}
void otomasyon::ogrenci_isletmesi()
{
    for(int a=1;a<40;a++)
    ogrenciler[a]=yok;
    int sayi;
    do{

    cout<<"\n\t\t-----------OGRENCÝ OTOMASYONU-------------\n"<<endl;

        cout<<"\t\t1.OGRENCI EKLEME"<<endl;
        cout<<"\t\t2.OGRENCI SÝLME"<<endl;
        cout<<"\t\t3.OGRENCI ARAMA"<<endl;
        cout<<"\t\t4.OGRENCI ORTALAMASI"<<endl;
        cout<<"\t\t5.OGRENCI RAPORU"<<endl;

             cout<<"\t\t6.CIKIS"<<endl;
        cout<<"seciminizin numarasini giriniz:";
        cin>>sayi;
        switch(sayi)
        {
            case 1:ogrenci_ekleme();
            break;
            case 2:ogrenci_silme();
            break;
            case 3:ogrenci_arama();
            break;
            case 4:ogrenci_ortalama();
            break;
            case 5:ogrenci_raporu();
            break;
            case 6:exit();
            break;
            default: cout<<"yanlis seim yaptiniz.lutfen dogru bir seim yapiniz";

        }

        }while(sayi!=6);

}
void otomasyon::ogrenci_ekleme()
{
    int i,j=10,k=20,l=30,sayi,vz1,vz2,f;
    string ad,o_ad;
    cout<<"\n\t\t---lutfen sinif tipini seciniz-\n"<<endl;
    cout<<"\n\t1.1.Siniflar Ýcin"<<endl;
    cout<<"\n\t2.2.Siniflar Ýcin"<<endl;
    cout<<"\n\t3.3.Siniflar Ýcin"<<endl;
    cout<<"\n\t4.4.Siniflar Ýcin"<<endl;
    cin>>sayi;
    switch(sayi)
    {
        case 1:
        for(int i=1;i<10;i++)
        {
            if(ogrenciler[i]!=var)
            {
                ogrenciler[i]=var;
                cout<<"ad:";
                cin>>ad;
                cout<<"soyad:";
                cin>>o_ad;
                cout<<"vize1:";
                cin>>vz1;
                cout<<"vize2:";
                cin>>vz2;
                cout<<"final:";
                cin>>f;
                sayac1++;
                ogrenci_adi[i]=new string;
                *ogrenci_adi[i]=ad;
                soyadi[i]=new string;
                *soyadi[i]=o_ad;
                break;
            }
        }
        if(i==10)
         cout<<"maalesef 1.sinifda ogrenci dolu."<<endl;
        break;
        case 2:
        for(int j=10;j<20;j++)
        {
                        if(ogrenciler[j]!=var)
            {
                ogrenciler[j]=var;
                cout<<"ad:";
                cin>>ad;
                cout<<"soyad:";
                cin>>o_ad;
                 cout<<"vize1:";
                cin>>vz1;
                cout<<"vize2:";
                cin>>vz2;
                cout<<"final:";
                cin>>f;
                sayac2++;
                ogrenci_adi[j]=new string;
                *ogrenci_adi[j]=ad;
                soyadi[j]=new string;
                *soyadi[j]=o_ad;
                break;
            }

        }
        if(j==20)
        cout<<"maalesef 2.sinifda ogrenci dolu."<<endl;
        break;
        case 3:
        for(int k=20;k<30;k++)
        {
                        if(ogrenciler[k]!=var)
            {
                ogrenciler[k]=var;
                cout<<"ad:";
                cin>>ad;
                cout<<"soyad:";
                cin>>o_ad;
                 cout<<"vize1:";
                cin>>vz1;
                cout<<"vize2:";
                cin>>vz2;
                cout<<"final:";
                cin>>f;
                sayac3++;
                ogrenci_adi[k]=new string;
                *ogrenci_adi[k]=ad;
                soyadi[k]=new string;
                *soyadi[k]=o_ad;
                break;
            }


        }
        if(k==30)
         cout<<"maalesef 3.sinifda ogrenci dolu."<<endl;
        break;
        case 4:
      for(int l=30;k<40;k++)
        {


            if(ogrenciler[l]!=var)
            {
                ogrenciler[l]=var;
                cout<<"ad:";
                cin>>ad;
                cout<<"soyad:";
                cin>>o_ad;
                 cout<<"vize1:";
                cin>>vz1;
                cout<<"vize2:";
                cin>>vz2;
                cout<<"final:";
                cin>>f;
                sayac4++;
                ogrenci_adi[l]=new string;
                *ogrenci_adi[l]=ad;
                soyadi[l]=new string;
                *soyadi[l]=o_ad;
                break;
            }
    }
              if(k==40)
         cout<<"maalesef 4.sinifda ogrenci dolu."<<endl;
        break;
        default: cout<<"lutfen dogru basiniz.";

    }
    }

void otomasyon::ogrenci_silme()
{
    cout<<"sileceginiz ogrenci numarasi:";
    int sayi;
    cin>>sayi;
    if(ogrenciler[sayi]==var)
    {
        if(sayi>0 && sayi<10)
        {
            ogrenciler[sayi]=yok;
            delete ogrenci_adi[sayi];
            delete soyadi[sayi];
            sayac1--;
            cout<<"ogrenci silindi";
        }
        else if(sayi>9 && sayi<20)
        {
             ogrenciler[sayi]=yok;
            delete ogrenci_adi[sayi];
            delete soyadi[sayi];
            sayac2--;
            cout<<"ogrenci silindi";
        }
        else if(sayi>19 && sayi<30)
        {
             ogrenciler[sayi]=yok;
            delete ogrenci_adi[sayi];
            delete soyadi[sayi];
            sayac3--;
            cout<<"ogrenci silindi";
        }
        else if(sayi>29 && sayi<41)
        {
             ogrenciler[sayi]=yok;
            delete ogrenci_adi[sayi];
            delete soyadi[sayi];
            sayac4--;
            cout<<"ogrenci silindi";
        }
        else cout<<"lutfen sileceginiz ogrenci numarasini dogru giriniz:";
    }
}

void otomasyon::ogrenci_arama()
{
    int sayi;
    cout<<"aryacaginiz ogrenci numarasi:";
    cin>>sayi;
    if(ogrenciler[sayi]==var)
    cout<<"ogrenci var";
    else if(ogrenciler[sayi]!=var)
    cout<<"ogrenci yok";
    else
    cout<<"dogru numra grnz";
}
void otomasyon::ogrenci_ortalama()
{
    int sayi;
    double ort;
    cout<<"ortalamasini alacaginiz ogrencinin numarasini giriniz:";
    cin>>sayi;
    for(int z=1;z<10;z++)
    {
        if(ogrenciler[sayi]==var)
        {
            ogrenciler[sayi]!=var;
            ort=vize1*0.4+vize2*0.4+final*0.6;
            cout<<z<<" numarali ogrencinin ortalamasi:"<<ort<<endl;
        }

    }
      for(int g=10;g<20;g++)
    {
        if(ogrenciler[sayi]==var)
        {
            ogrenciler[sayi]!=var;
            ort=vize1*0.4+vize2*0.4+final*0.6;
            cout<<g<<" numarali ogrencinin ortalamasi:"<<ort<<endl;
        }

    }
      for(int h=20;h<30;h++)
    {
        if(ogrenciler[sayi]==var)
        {
            ogrenciler[sayi]!=var;
            ort=vize1*0.4+vize2*0.4+final*0.6;
            cout<<h<<" numarali ogrencinin ortalamasi:"<<ort<<endl;
        }

    }
      for(int t=30;t<41;t++)
    {
        if(ogrenciler[sayi]==var)
        {
            ogrenciler[sayi]!=var;
            ort=vize1*0.4+vize2*0.4+final*0.6;
            cout<<t<<" numarali ogrencinin ortalamasi:"<<ort<<endl;
        }

    }


}

void otomasyon::ogrenci_raporu()
{
    if(sayac1==0)
    cout<<"birinci siniflar bos"<<endl;
    else
    {
        cout<<"ogrenci numarasi ogrenci adi ogrenci soyadi  vize1 notu vize2 notu final notu"<<endl;
        cout<<"================================================================================="<<endl;
        for(int m=1;m<10;m++)
        if(ogrenciler[m]==var)
        cout<<m<<"\t\t"<<*ogrenci_adi[m]<<"\t\t"<<*soyadi[m]<<"\t\t"<<vize1<<"\t\t"<<vize2<<"\t\t"<<final<<endl;
    }
     if(sayac2==0)
    cout<<"ikinci siniflar bos"<<endl;
    else
    {
        cout<<"ogrenci numarasi ogrenci adi ogrenci soyadi  vize1 notu vize2 notu final notu"<<endl;
        cout<<"============================================================================="<<endl;
        for(int v=10;v<20;v++)
        if(ogrenciler[v]==var)
        cout<<v<<"\t\t"<<*ogrenci_adi[v]<<"\t\t"<<*soyadi[v]<<"\t\t"<<vize1<<"\t\t"<<vize2<<"\t\t"<<final<<endl;
    }
      if(sayac3==0)
    cout<<"ucuncu siniflar bos"<<endl;
    else
    {
        cout<<"ogrenci numarasi ogrenci adi ogrenci soyadi  vize1 notu vize2 notu final notu"<<endl;
        cout<<"================================================================================"<<endl;
        for(int u=20;u<30;u++)
        if(ogrenciler[u]==var)
        cout<<u<<"\t\t"<<*ogrenci_adi[u]<<"\t\t"<<*soyadi[u]<<"\t\t"<<vize1<<"\t\t"<<vize2<<"\t\t"<<final<<endl;
    }
      if(sayac4==0)
    cout<<"dorduncu siniflar bos"<<endl;
    else
    {
        cout<<"ogrenci numarasi ogrenci adi ogrenci soyadi  vize1 notu vize2 notu final notu"<<endl;
        cout<<"=============================================================================="<<endl;
        for(int d=30;d<41;d++)
        if(ogrenciler[d]==var)
        cout<<d<<"\t\t"<<*ogrenci_adi[d]<<"\t\t"<<*soyadi[d]<<"\t\t"<<vize1<<"\t\t"<<vize2<<"\t\t"<<final<<endl;
    }
}
void otomasyon::exit()
{
    int sayi=6;
    if(sayi!=6);
}

int main()
{
    otomasyon a;
    return 0;
}

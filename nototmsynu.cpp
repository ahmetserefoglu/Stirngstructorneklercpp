#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    int n,ort,notdurum,kap=0,akademkort,numarasi,sayi,vze1,vize2,fnl,but,toplam=0,kreditop=0;

    char m[20];
    char sifre[]="mkuogrsfr";
    char sfre[20];
    cout<<"ogrenci numarasini giriniz:";
    cin>>numarasi;
    cout<<"okul sifresini giriniz:";
    cin>>sfre;
for(int i=1;i<3;i++)
{
     if(strcmp(sifre,sfre)==0)


break;

        else
        cout<<"sifre hatali!!!";
}
cout<<"notlarinizi girebilirsiniz:"<<endl;

cout<<numarasi<<" numarali ogrencinin aldigi ders sayisini giriniz :";
cin>>sayi;
   for(int j=0;j<sayi;j++)
 {

    cout<<"dersinizin adini ve kredisini giriniz:";
  cin>>m>>n;
  cout<<"vize1 notunu giriniz:";
    cin>>vze1;
    cout<<"vize2 notunu giriniz:";
    cin>>vize2;
    cout<<"final notunu giriniz:";
    cin>>fnl;
    ort=((vze1+vize2)/2)*0.4+(fnl*0.6);

    if(ort<30)
   {
        cout<<"butunleme notunu giriniz:";
    cin>>but;
    ort=((vze1+vize2)/2)*0.4+(but*0.6);

   }

    if(ort==100) cout<<"AA ile gectiniz:"<<endl;
    {
        notdurum=4.0;

    }

    if(100>ort && ort>=90) cout<<"BA ile gectiniz:"<<endl;
{
    notdurum=3.5;
}

    if(90>ort && ort>=80) cout<<"BB ile gectiniz:"<<endl;
{
    notdurum=3.0;
}
    if(80>ort && ort>=70) cout<<"CB ile gectiniz:"<<endl;
{
    notdurum=2.5;
}
    if(70>ort && ort>=60) cout<<"CC ile gectiniz:"<<endl;
{
    notdurum=2.0;
}
    if(60>ort && ort>=50) cout<<"DC ile sartli gectiniz:"<<endl;
{
    notdurum=1.75;
}
    if(50>ort && ort>=40) cout<<"DD ile sartli gectiniz:"<<endl;
{
    notdurum=1.25;
}
    if(40>ort && ort>=0) cout<<"FF ile dersiniz kalmistir:"<<endl;
{
    notdurum=0;
}
toplam=toplam+n*notdurum;
kreditop=kreditop+n;
 }
cout<<endl;
cout<<"akdmkort:"<<toplam/kreditop<<endl;
}

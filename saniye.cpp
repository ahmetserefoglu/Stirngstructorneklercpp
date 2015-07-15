#include<iostream>
using namespace std;
int main()
{
int kalan;
int saat;
int saniye;
int dakika;
int sure;
cout<<"gece yarisindan sonraki saniye:";
cin>>sure;

saat=sure/3600;
kalan=sure%3600;
dakika=kalan/60;
saniye=kalan%60;
cout<<"su anki saat:"<<0<<+0+saat<<":"<<0<<+0+dakika<<":"<<0<<0+saniye<<endl;

}

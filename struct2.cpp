#include<iostream>
using namespace std;
struct calisan
{
    char ad[20];
    char soyad[20];
    int yas,maas;
}kisi;
int main()
{
    int n=10;

    for(int i=1;i<n;i++)
    {
        cout<<i<<" .kisinin adi:";
        cin>>kisi.ad;
        cout<<i<<" .kisinin soyadi:";
        cin>>kisi.soyad;
        cout<<i<<" .kisinin yasi:";
        cin>>kisi.yas;
        cout<<i<<" .kisinin maasi:";
        cin>>kisi.maas;
    }
    cout<<"5 yil sonra:"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<i<<" .kisinin yasi:"<<endl;
        cout<<kisi.yas+5<<endl;
        cout<<i<<" .kisinin maasi:"<<endl,
        cout<<kisi.maas+50*5;
    }
    return 0;

}

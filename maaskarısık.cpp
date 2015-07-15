#include<iostream>
#include<string>
using namespace std;
class calisanlar
{
    string ad,soyad;
    int maas;
    public:

    void kisigir();
    void kisial()
    {
        cout<<"ad:"<<ad<<endl;
        cout<<"soyad:"<<soyad<<endl;
        cout<<"maas:"<<maas<<endl;

    }
};
int main()
{
    string ad,soyad;
    int a[10];
    int ek,i;
    cout<<"calisan elemanlar:"<<endl;
    for(int k=0;k<2;k++)
    {
        cout<<"ad:"<<endl;
        cin>>ad;
        cout<<"soyad:"<<endl;
        cin>>soyad;
        cout<<"maas"<<endl;
        cin>>a[k];

    }
    for(int k=0;k<2;k++)
    {
        ek=a[k];
        i=k;
        for(int j=k+1;j<2;j++)
        if(a[j]>ek)
        {
            ek=a[j];
            i=j;
        }
        a[i]=a[k];
        a[k]=ek;}

    for(int k=0;k<2;k++)
    {
        cout<<ad;
        cout<<soyad;
        cout<<a[k];
    }




}


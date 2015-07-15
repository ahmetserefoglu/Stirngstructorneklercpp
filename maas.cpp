#include<iostream>
#include<cstring>
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
void calisanlar::kisigir()
{
    string a,s;
    int m;

    cout<<"ad:"<<endl;
    cin>>a;
    cout<<"soyad:"<<endl;
    cin>>s;

    cout<<"maas"<<endl;
    cin>>m;
    ad=a;
    soyad=s;
    maas=m;
}

int main()
{


    calisanlar calisan[2];
     for(int i=0;i<2;i++)

     {
         calisan[i].kisigir();
     }
        for(int i=0;i<2;i++)

     {
         calisan[i].kisial();
         cout<<"********"<<endl;
     }

    return 0;

}

#include<iostream>
#include<cstring>
using namespace std;
class nesnedizsi
{
    string ad,soyad;
    int vize,final;
    public:
    void kisigir();
    void kisial()
    {
        cout<<"ad:"<<ad<<endl;
        cout<<"soyad:"<<soyad<<endl;
        cout<<"vize:"<<final<<endl;
    }
};
void nesnedizsi::kisigir()
{
        string a,s;
    int v,f;

    cout<<"ad:"<<endl;
    cin>>a;
    cout<<"soyad:"<<endl;
    cin>>s;
    cout<<"vize:"<<endl;
    cin>>v;
    cout<<"final:"<<endl;
    cin>>f;
    ad=a;
    soyad=s;
    vize=v;
    final=f;
}
int main()
{
    nesnedizsi kisi[10];
    for(int i=0;i<10;i++)
    kisi[i].kisigir();
    for(int i=0;i<10;i++)
    kisi[i].kisial();
    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
class filmler
{
    string ad,soyad,film_Adi;
    int tarih;
    public:

    void kisigir();
    void kisial()
    {
        cout<<"ad:"<<ad<<endl;
        cout<<"soyad:"<<soyad<<endl;
        cout<<"filmadi:"<<film_Adi<<endl;
        cout<<"tarih:"<<tarih<<endl;
    }
};

void filmler::kisigir()
{
    string a,s,f;
    int t;

    cout<<"ad:"<<endl;
    cin>>a;
    cout<<"soyad:"<<endl;
    cin>>s;
    cout<<"film adi:"<<endl;
    cin>>f;
    cout<<"tarih"<<endl;
    cin>>t;
    ad=a;
    soyad=s;
    film_Adi=f;
    tarih=t;
}
int main()
{
    filmler film[2];
     for(int i=0;i<2;i++)

     {
         film[i].kisigir();
     }
        for(int i=0;i<2;i++)

     {
         film[i].kisial();
         cout<<"********"<<endl;
     }

    return 0;
}

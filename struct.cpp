#include<iostream>
using namespace std;
struct kisi
{
    char ad[20];
    char soyad[20];
    int yas,no;
}deneme;
int main()
{

    cout<<"ad:";
    cin>>deneme.ad;
    cout<<"soyad:";
    cin>>deneme.soyad;
    cout<<"yas:";
    cin>>deneme.yas;
    cout<<"no:";
    cin>>deneme.no;

   cout<<"ad:"<<deneme.ad<<endl;
   cout<<"soyad:"<<deneme.soyad<<endl;
   cout<<"yas:"<<deneme.yas<<endl;
   cout<<"no:"<<deneme.no<<endl;
   return 0;
}

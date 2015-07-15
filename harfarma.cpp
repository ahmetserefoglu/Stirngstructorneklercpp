#include<iostream>
#include<string>
using namespace std;
int main()
{
    int toplam=0,a;
    string k,h;

    cout<<"bir kelime giriniz:";
    cin>>k;
     a=sizeof(k);
    cout<<"aranacak harfi giriniz:";
    cin>>h;
    for(int i=1;i<a;i++)
{
         if(k==h)
         toplam=toplam+i;
}



    cout<<"aradiginiz harf:"<<toplam<<" tanedir.";
    return 0;
}

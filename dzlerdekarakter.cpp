
#include<iostream>
#include<cstring>
using namespace std;
int main(){

char ad[20],soyad[20];
cout<<"AD:"<<endl;
cin>>ad;
cout<<ad<<" "<<strlen(ad)<<" karakter.";
cout<<"\nSOYAD:"<<endl;
cin>>soyad;
cout<<soyad<<" "<<strlen(soyad)<<" karakter.";
cout<<endl;
strcpy(ad,soyad);
cout<<"\nkopylama isleminden sonra ad:"<<endl;
cin>>ad;
cout<<"\nkopylamadan sonra ad "<< strlen(ad)<<" karakter.";
cout<<endl;
return 0;

}

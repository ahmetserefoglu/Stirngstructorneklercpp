#include<iostream>
using namespace std;
int main()
{
    int a;
    int *ptr;
    ptr=&a;
    cout<<"bir sayi giriniz:";
    cin>>a;
    cout<<*ptr<<" sayisi bellekte "<<ptr<<" adresine yerlesti:"<<endl;
    return 0;
}

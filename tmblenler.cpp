#include<iostream>
using namespace std;
int x;
int main()
{
    cout<<"bir sayi giriniz:";
    cin>>x;
    cout<<x<<"tamsayisinin tam bolenleri:"<<endl;
    for(int i=1;i<x;i++)
    if(x%i==0) cout<<i<<endl;
    return 0;
}

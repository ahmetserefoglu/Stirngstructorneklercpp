#include<iostream>
using namespace std;
int usalma(int sayi1,int sayi2);
int main()
{
    int x,y;
    cout<<"taban:";
    cin>>x;
    cout<<"ussu:";
    cin>>y;
    cout<<usalma(x,y);
    return 0;
}
int usalma(int a,int b)
{
    int i,tplm=1;
    for(i=1;i<=b;i++)
    tplm=tplm*a;
    return tplm;
}

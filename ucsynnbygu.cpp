#include<iostream>
using namespace std;
int enbuyugu(int,int,int);
int main()
{
    int x,y,z;
    cout<<"uc sayi giriniz:";
    cin>>x>>y>>z;
    cout<<"sayilarin en buyugu:"<<enbuyugu(x,y,z)<<endl;
    return 0;
}
int enbuyugu(int a,int b,int c)
{
    int enb;
    if(a>b)
    enb=a;
    else
    enb=b;
    if(enb<c)
    enb=c;
    return enb;
}

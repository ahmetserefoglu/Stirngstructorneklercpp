#include<iostream>
using namespace std;
int buyuksay(int sayi1,int sayi2)
{
    if(sayi1>sayi2)
    return sayi1;
    else return sayi2;
}
int main()
{
    int sayi1,sayi2;
    cout<<"sayi1=";
    cin>>sayi1;
    cout<<"sayi2=";
    cin>>sayi2;

    int sayi=buyuksay(sayi1,sayi2);
    int ebob=1;
    for(int i=sayi;i>0;i--)
    {
        if((sayi1%i)==0 && (sayi2%i)==0)
        {
            ebob=i;
            break;
        }
    }
    cout<<"ebob:"<<ebob<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int buyuksay(int sayi1,int sayi2)
{
    if(sayi1>sayi2)
    return sayi1;
    else
    return sayi2;
}
int main()
{
    int sayi1,sayi2;
    cout<<"sayi1:";
    cin>>sayi1;
    cout<<"sayi2:";
    cin>>sayi2;

    int sayi=buyuksay(sayi1,sayi2);
    int ekok=1,c=2;
    while(c<=sayi)
    {
        while((sayi1%c)==0 && (sayi2%c)==0)
        {
            sayi1=sayi1/c;
            sayi2=sayi2/c;
            ekok=ekok*c;
        }
        while(sayi1%c==0)
        {
            sayi1=sayi1/c;
            ekok=ekok*c;
        }
        while(sayi2%c==0)
        {
            sayi2=sayi2/c;
            ekok=ekok*c;
        }
        c++;
    }
    cout<<"ekok:"<<ekok<<endl;

}

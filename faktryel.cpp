#include<iostream>
using namespace std;
int main()
{
    int a,faktoriyel=1;
    cout<<"sayi giriniz:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        faktoriyel=faktoriyel*i;
    }
    cout<<faktoriyel;
}

#include<iostream>
using namespace std;
int main()
{
    int x,b=0,a=0;

    cout<<"bir sayi giriniz:";
    cin>>x;
    for(int i=1;i<x;i++)
    {
        a=x%i;
        if(a==0)
        {
            b=b+i;
        }
    }
    cout<<"tam bolenleri toplami"<<b;
}

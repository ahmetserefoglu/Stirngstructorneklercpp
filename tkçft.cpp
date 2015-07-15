#include<iostream>
using namespace std;
int main()
{
    int enk,x,y;
    cout<<"iki sayi giriniz:";
    cin>>x>>y;
    if(x<y)
    enk=x;
    else
    enk=y;

    if(enk%2==0)
    cout<<" girdiðiniz sayilardan kucugu "<<enk<<" ve cifttir:";
    else
    cout<<" girdiginiz sayilardan kucugu "<<enk<<" ve tektir:";
    return 0;
}

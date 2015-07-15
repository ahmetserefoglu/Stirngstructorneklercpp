#include<iostream>
using namespace std;
int main()
{
    int n,toplam=0;
    cout<<"sayi giriniz:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        toplam=toplam+i;
    }
    cout<<toplam<<endl;
    return 0;
}

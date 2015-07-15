#include<iostream>
using namespace std;
int a,s;
int main()
{
    cout<<"ust sinir:";
    cin>>a;
    cout<<"asal sayilar"<<endl;
    for(int i=2;i<=a;i++)
    {
        s=0; for(int j=1;j<=i;j++) if(i%j==0) s++;
    if(s==2) cout<<i<<"\t"<<endl;

    }
    return 0;
}

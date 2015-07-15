#include<iostream>
using namespace std;
int main()
{
    int mukemmel;
    cout<<"1 ile 100 arasi mukemmel sayilar:"<<mukemmel()<<endl;
    return 0;
}
int mukemmel()
{
    int s=100,t=0;
    for(int i=1;i<s;i++)
    {
        if(s%i==0) t=t+i;
        if(s==t) cout<<"mukemmel sayilar:";
        else cout<<"mukemmel sayi degil:";
        return t;
    }
}

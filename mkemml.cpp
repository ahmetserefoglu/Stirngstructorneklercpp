#include<iostream>
using namespace std;
int main()
{
    int x,y,s=0;
      cout<<"mukemmel sayilar"<<endl;
    cout<<"alt sinir:";
    cin>>x;
cout<<"ust sinir:";
cin>>y;

    for(int i=1;i<x;i++)
{
    for(int i=1;i<y;i++)
    {

        if(x%i==0 && y%i==0)      s=s+i;

             if(x==s && y==s)
                     cout<<"mukemmel sayi"<<endl;
             else
                    cout<<"mukemmel sayi degil"<<endl;

    }


}

    return 0;
}

#include<iostream>
using namespace std;
int a[10],carpim=1;
int main()
{

    for(int i=0;i<4;i++)
    {
        cout<<i<<".a matrisi:"<<":"<<endl;
        cin>>a[i];
        carpim=carpim*a[i];

    }
    cout<<"dizilerin carpimi: "<<carpim<<endl;
    return 0;


}

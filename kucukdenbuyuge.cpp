#include<iostream>
using namespace std;
int main()
{
    int a[10]={-100,200,400,300,25,65,780,56,925,123};
    int ek,i;
    cout<<"dizinin elemanlari:"<<endl;
    for(int k=0;k<10;k++)
    {
        cout<<a[k]<<endl;

    }
    for(int k=0;k<10;k++)
    {
        ek=a[k];
        i=k;
        for(int j=k+1;j<10;j++)
        if(a[j]<ek)
        {
            ek=a[j];
            i=j;
        }
        a[i]=a[k];
        a[k]=ek;
    cout<<"buyukten kucuge siralama"<<endl;
    for(int k=0;k<10;k++)
    cout<<a[k]<<endl;
    }


}


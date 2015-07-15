#include<iostream>
using namespace std;
int main()
{
    int a[10]={-100,200,400,300,25,65,780,56,925,123};
    int eb,i;
    cout<<"dizinin elemanlari:"<<endl;
    for(int k=0;k<10;k++)
    cout<<a[k]<<endl;
    for(int k=0;k<10;k++)
    {
        eb=a[k];
        i=k;
        for(int j=k+1;j<10;j++)
        if(a[j]>eb)
        {
            eb=a[j];
            i=j;
        }
        a[i]=a[k];
        a[k]=eb;
    }
    cout<<"buyukten kucuge siralama"<<endl;
    for(int k=0;k<10;k++)
    cout<<a[k]<<endl;

}

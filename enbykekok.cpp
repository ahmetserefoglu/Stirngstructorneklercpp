#include<iostream>
#define n 3
using namespace std;
int main()
{
    int a[n],enb,ebob,k,enb2;
    a[1]=enb;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<".sayi:";
        cin>>a[i];
        if(a[i]<0 || a[i]==0)
        break;

    }
    cout<<n<<"adet pozitif sayisi girdiniz:"<<endl;

    for(int i=1;i<=n;i++)
    {
        if(a[i]>enb)
        enb=a[i];
   for(int j=1;j<=n;j++)

           if(enb2>a[j]){
                 enb2=a[j];
            enb=a[j];
           }

            if(enb>enb2);



    }    cout<<"girilen sayilarin en buygu "<<enb<<endl;


       cout<<"girilen sayilardan ikinci buyuk:"<<enb2<<endl;

       for(int k=enb;k>0;k--)
       {
           if((enb%k)==0 && (enb2%k)==0)
           {ebob=k;
           break;
       }}
       cout<<ebob;
       int ekok=(enb*enb2)/ebob;
       cout<<ekok;
       return 0;





}

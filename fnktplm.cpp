#include<iostream>
using namespace std;
int toplam();
int main()
{

    cout<<"sayilarin toplami:"<<toplam()<<endl;
return 0;
}
    int toplam()
    {

  int sayi,topla=0;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" .sayi:";
        cin>>sayi;
          topla=topla+sayi;

    }
    return topla;



    }


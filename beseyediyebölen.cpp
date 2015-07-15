#include<iostream>
using namespace std;
int main()
{
    int toplam=0;
    cout<<"+++bir cesit program+++"<<endl;
    for(int i=1;i<=1000;i++)
    {
        if(i%5==0 && i%7!=0)
       {
            toplam=toplam+i;
            cout<<i<<endl;

       }

    }
        cout<<"bu sayilarin toplami="<<toplam<<endl;
    return 0;
}

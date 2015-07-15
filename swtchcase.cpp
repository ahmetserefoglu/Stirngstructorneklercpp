#include<iostream>
#include<cstring>
using namespace std;
int main()
{

     char deger;
     int o,a,b,c,d;

    cout<<"lutfen bir deger giriniz:";
    cin>>deger;
    switch(deger)
    {
        case o:
        cout<<"pazartesi\n";
        break;
        case a:
        cout<<"sali\n";
        break;
        case b:
        cout<<"carsamba\n";
        break;
        case c:
        cout<<"persembe\n";
        break;
        case d:
        cout<<"cuma\n";
        break;
        default:
        cout<<"haftasonu\n";

    }
    return 0;
}

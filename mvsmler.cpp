#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout<<"1-4 arasi sayi giriniz:";
    cin>>sayi;
    switch(sayi)
    {
        case 1:
         cout<<"ilkbahar\n";
        break;
        case 2:
         cout<<"yaz\n";
        break;
        case 3:
        cout<<"sonbahar\n";
        break;
        case 4:
        cout<<"kis\n";
        break;
        default:
        cout<<"hatali giris!!!\n";

    }
    return 0;
}

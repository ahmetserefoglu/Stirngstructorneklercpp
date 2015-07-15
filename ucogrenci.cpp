#include<iostream>
using namespace std;
class ogrenciler
{
    int not1,not2,not3;
    public:
    friend int al(ogrenciler deneme);
    ogrenciler()
    {
        not1=15;
        not2=35;
        not3=95;
    }
    friend int goster(ogrenciler deneme);
    ogrenciler()
    {
        cout<<not1<<endl;
        cout<<not2<<endl;
        cout<<not3<<endl;
    }
}a;
int main()
{
    a.not1;
    a.not2;
    a.not3;
}

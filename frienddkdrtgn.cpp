#include<iostream>
using namespace std;
class dikdortgen
{
    int uzun_kenar;
    int kisa_kenar;
    public:
     friend int goruntule(dikdortgen m);
    dikdortgen()
    {
        uzun_kenar=10;
        kisa_kenar=5;
    }


}test;
int goruntule(dikdortgen m)
{
    return test.kisa_kenar*test.uzun_kenar;
}


int main()
{
    cout<<goruntule(test)<<endl;

    return 0;
}

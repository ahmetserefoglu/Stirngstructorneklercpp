#include<iostream>
using namespace std;

class deneme{
int a;
public:
friend int fnk(deneme n);
deneme()
{
    a=20;
}

}test;
int fnk(deneme n)
{

    return test.a;

}
main()
    {
        cout<<fnk(test);
        return 0;
    }

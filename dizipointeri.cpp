#include<iostream>
using namespace std;
int main()
{
    int i[10]={5,6,3,3,5,4,5,6,7,7};
    int *ptr;
    ptr=i;
    cout<<"*ptr'nin ilk degeri:"<<*ptr<<endl;
    cout<<"++*ptr'nin degeri:"<<++*ptr<<endl;
    cout<<"*++ptr'nin degeri:"<<*++ptr<<endl;
    cout<<"*ptr++'nin degeri:"<<*ptr++<<endl;
    cout<<"++*ptr++'nin degeri:"<<++*ptr++<<endl;

    cout<<"&*ptr'nin degeri:"<<&*ptr<<endl;
     cout<<"*&ptr'nin degeri:"<<*&ptr<<endl;
     return 0;
}

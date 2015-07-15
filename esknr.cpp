#include<iostream>
using namespace std;
int alan()
{
    int a,h,topla;
    cout<<"bir kenar uzunlugu:";
    cin>>a;
    cout<<"yuksekligi giriniz:";
    cin>>h;
    topla=(a*h)/2;
    return topla;
}
int main()
{
    cout<<"eskenar ucgnin alani:"<<alan()<<endl;
    return 0;
}

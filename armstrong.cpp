#include<iostream>
using namespace std;
int main()
{
    cout<<"armstrong sayilar"<<endl;
    for(int x=1;x<=9;x++)
    for(int y=0;y<=9;y++)
    for(int z=0;z<=9;z++)
    if(100*x+10*y+z==x*x*x+y*y*y+z*z*z)
    cout<<100*x+10*y+z<<endl;
    return 0;
}

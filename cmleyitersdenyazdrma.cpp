#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10];
    cout<<"birseyler yaziniz:";
    cin>>a;
    for(int i=strlen(a);i>=0;i--)
    {
        cout<<a[i];
    }
}

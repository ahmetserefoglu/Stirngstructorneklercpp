#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char a[20],*ptr;
    cout<<"isim girin:";
    cin>>a;
    ptr=a;
    while(ptr[i]!=NULL)
    {
        cout<<ptr[i];
        i++;
    }
    cout<<endl;
    return 0;
}

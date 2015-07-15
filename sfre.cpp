#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char adi[20],sfre[20];
    char id[]="SUHA";
    char sifre[]="ENTER";
    for(int i=1;i<3;i++)
    {
        cout<<"kullanici adi:";
        cin>>adi;
        if(strcmp(id,adi)==0)
        {
            cout<<"\nsifre:";
            cin>>sfre;
            if(strcmp(sifre,sfre)==0)
            break;
            else cout<<endl<<"sifre YANLÝS:!!\n";
        }
        else cout<<endl<<"kullanici adi YANLÝS!!!\n";
    }
    cout<<"kullanici adi ve sifre dogru:\n";
    cout<<endl;
    return 0;
}

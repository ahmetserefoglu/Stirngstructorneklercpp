#include<iostream>
#include<cstring>
using namespace std;
void banka (int para)
{
    int a,yirmi,on,bes;
    a=para;
    if(a%5==0)
    {
        yirmi=a/20;
        a=a-yirmi*20;
        on=a/10;
        a=a-on*10;
        bes=a/5;
        a=a-bes*5;
        cout<<"yirmilik:"<<yirmi<<endl;
        cout<<"onluk:"<<on<<endl;
        cout<<"beslik:"<<bes<<endl;
    }
    else cout<<"girilen miktar 5tl ve katlari deðildir."<<endl;

}
main()
{
    int miktar;
    int a,b=5;
     char adi[20],sfre[20];
    char id[]="SUHA";
    char sifre[]="ENTER";
    while(1)
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
 cout<<"para miktarini giriniz:";

    cin>>miktar;
    banka(miktar);


    cout<<"yatýrdýgýnýz miktar hesabiniza aktarilmiþtir iyi gunler"<<endl;

return 0;
}

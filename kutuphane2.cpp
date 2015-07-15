#include<iostream>
#include<cstring >
#include<fstream>
using namespace std;
int main()
{
    int sayi,kitap;
    char adi[20];
    char sfre[20];
    char ad[]="ahmet";
    char sifre[]="messi";
    char kitaplist[10];
    cout<<"kutuphanemizde bulunan kitaplar"<<endl;
    for (int i=1;i<3;i++)
    {
        cout<<i<<" .kitap :"<<endl;

        cin>>kitaplist;
int request=0;



ifstream input;
ofstream output;

while(request!=-1)

{
//menü
cout<<"\n Cikmak icin -1 yazin" <<endl;
cout<<"1-Dosyaya yazmak için 1 yazin" <<endl;
cout<<"2-Dosyadan okumak icin 2 yazin" <<endl;

cin>>request;
if(request==1)
{
//Eklemek icin
output.open("clients.txt");
cout<<"Lutfen dosyaya eklemek istediginiz yaziyi girin"<<endl;
char str[60];
cin.ignore();
cin.getline(str,60);
output<<str<<" "<<endl;
output.close();

}
else if(request==2)
{
input.open("clients.txt");
string str;

//Sonsuz donguye giriyoruz,cikma kosulumuz ise
//if icinde yer alan,dosyanin
//bittigini gosteren input.eof kodudur.
while(true){
input>>str;

if(input.eof()){
break;
}
//Her okunun stringi ekrana basiyoruz.
cout<<str<<" ";
}
input.close();

}

}
    }
    cout<<"yapmak istediğiniz islem icin 1-2-3 tuslarindan birine basiniz:"<<endl;
    cin>>sayi;
    switch(sayi)
    {
        case 1: cout<<"yapacaginiz islem kitap alma islemidir:";
             for(int k=1;k<=3;k++)
    {
        cout<<"kullanici adi:";
        cin>>adi;
        if(strcmp(ad,adi)==0)
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
    cout<<"isleme devam edebilirsiniz"<<endl;
    cout<<" alacaginiz kitap ismini giriniz:"<<endl;
    cin>>kitap;


        break;
    }

}

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    int n,a,sayi,sec;
    char kitapadi[40];

    string str;
    ifstream input;
    ofstream output;
    char kitap[40];
    cout<<"kitap sayisini giriniz:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<i<<". kitap:";
        cin>>kitap;
        while(a!=3)
        {
            cout<<"cikmak istiyorsaniz 3 e basiniz:"<<endl;
            cout<<"kitap adinizi dosyaya yazdirmak icin 1 e basiniz:";
            cin>>a;
            if(a==1)
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
while(true){
input>>str;

if(input.eof()){
break;
}
//Her okunun stringi ekrana basiyoruz.
cout<<str<<" ";
}
        }

    }
    cout<<"\n\n---------------------";
    cout<<"\n****KUTUPHANE PROGRAMÝ***";
    cout<<"\n 1.kitap ara";
    cout<<"\n 2.kitap kirala";
    cout<<"\n 3.kitap iade";
    cout<<"secim yapiniz:";
    cin>>sec;
    switch(sec)
    {
        case 1:
        {
            cout<<"aranacak kitap adini giriniz:";
            cin>>kitapadi;
            while(a!=3)
        {
            cout<<"cikmak istiyorsaniz 3 e basiniz:"<<endl;
            cout<<"kitap adinizi dosyadan bakma icin 2 e basiniz:";
            cin>>a;
            if(a==2)
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
cout<<"kitap bulunmaktadir";

            }


        }
    }
}

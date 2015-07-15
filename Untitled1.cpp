#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

char key;
char ykitap[40];
FÝLE *dosya,*kdosya;
int islendi=0,kira=0,iade=0;baskasinda;
fpost_t position;
struct Kitap
{
char kitapAdi[40];
char yazar[20];
char durumu[10];
}kitap;

struct User
{
char userName[10];
char userLastname[20];
char odunc[40];
}user;

struct Kitap *p;
struct User *u;


int main()
{
   void ekle(void);
   void ara(char aranan[40]);
   void kirala(void);
   void iade(void);


   do
   {
       cout<<"---------------";
       cout<<"\n\n------KUTUPHANE PROGRAMÝ-------";
       cout<<"\n*** 1.Kitap ekle***";
       cout<<"\n 2.Kitap ara";
       cout<<"\n 3.kitap kirala";
       cout<<"\n 4.kitap iade";
       cout<<"\n 5.exit";
       cout<<"\nsecim yapiniz:";
       cin>>key;
       switch(key)
       {
           case '1': ekle(); break;
           case '2':
           {
               cout<<"\n kitap ara";
               cout<<"\n aranacak kitap adi:";
               cin>>ykitap;
               ara(ykitap); break;
           }
           case '3': kirala(); break;
           case '4': iade(); break;
           case '5': return 0;
       }
    }while(1);
}
void ekle(void)
{
    cout<<"\n kitap ekle ";
    dosya=fopen("c:\\dosya.txt"."ab");
    cout<<"\n kitap adi";
    cin>>kitapAdi;
    cout<<"\n yazar";
    cin>>yazar;

}





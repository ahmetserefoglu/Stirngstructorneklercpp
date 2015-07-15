#include<iostream>
#include<cstring>
using namespace std;
int sayi,m,l;
    char y[20];

    char adi[20],sfre[20];
    char ad[]="ahmet";
    char sifre[]="kitaplik";
    char kitap1[]="sefiller";
    char kitap2[]="koleler";
    char kitap3[]="zenginler";
    char kitap4[]="markalar";
    char kitap5[]="klasikler";
    char kitap6[]="tarih";
    char kitap7[]="bilim";
    char kitap8[]="dram";
    char kitap9[]="fantastik";
    char kitap10[]="romantik";
int main()
{
      char  kitaplik[][10]={"sefiller","koleler","zenginler","markalar","klasikler","tarih","bilim","dram","fantastik","romantik"};
      for(int i=0;i<kitaplik[i][0];i++)
        {
cout<<endl;
        for(int j=0;j<kitaplik[i][j];j++)
{
    cout<<kitaplik[i][j];

}
}

    cout<<endl<<endl<<"yapmak istediginiz islem icin 1- 2 yada 3 tuslarindan birine basiniz:";
    cin>>sayi;
    switch(sayi)
    {
        case 1: cout<<"satin almak istiyorsaniz:"<<endl;
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
        cout<<"isleme devam edebilirsiniz:"<<endl;
        cout<<"bir sayi giriniz:";
        cin>>l;
       do{

           m++;
       cout<<m;
         cout<<"lutfen kitap seciniz"<<endl;
        cin>>y;

         if(strcmp(y,kitap1)==0)
      {
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap2)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap3)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap4)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap5)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap6)==0)
         cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap7)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap8)==0)
           cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap9)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap10)==0)
        cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";}
        else cout<<"kitap elimizde yoktur:";




       }while(m<l);

 break;

  case 2: cout<<"kiralamak istiyorsaniz:";
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
        cout<<"isleme devam edebilirsiniz:"<<endl;
        cout<<"lutfen kitap seciniz"<<endl;
        cin>>y;
        if(strcmp(y,kitap1)==0)
      {
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap2)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap3)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap4)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap5)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap6)==0)
         cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap7)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap8)==0)
           cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap9)==0)
          cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";
        if(strcmp(y,kitap10)==0)
        cout<<"kitap elimizde bulunmaktadir alabilirsiniz:";}
        else cout<<"kitap elimizde yoktur:";

        break;

  case 3: cout<<"kiraladiginiz kitapi geri vermek istiyorsaniz:";
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
        cout<<"isleme devam edebilirsiniz:"<<endl;
        cout<<"vermek istediğiniz kitap ismini giriniz:"<<endl;
        cin>>y;
        if(strcmp(y,kitap1)==0)
      {
          cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap2)==0)
         cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap3)==0)
       cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap4)==0)
       cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap5)==0)
 cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap6)==0)
    cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap7)==0)
         cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap8)==0)
        cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap9)==0)
          cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";
        if(strcmp(y,kitap10)==0)
       cout<<"zamaninda getirdiğiniz icin tesekkur ederiz:";}
        else cout<<"yanlıs kitap !!!:";

  break;
    }


}

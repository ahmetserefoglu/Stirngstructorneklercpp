#include<iostream>
using namespace std;
struct ogrenci
{
    char ad[20],soyad[20];
    int vize,final;
};
int main()
{
    int ort;
    ogrenci x[]={"muhammet","mastar",60,80,"ali","akil",90,80,"arif","serat",40,50};
    for(int i=0;i<3;i++)
    {
        ort=x[i].vize*0.3+x[i].final*0.7;
        if(ort>60)
        {
            cout<<"\nogrencinin adi:"<<x[i].ad<<endl;
            cout<<"ogrencinin soyadi:"<<x[i].soyad<<endl;
            cout<<"sinifi gecmistir:"<<endl;
        }
        else
           {
            cout<<"\nogrencinin adi:"<<x[i].ad<<endl;
            cout<<"ogrencinin soyadi:"<<x[i].soyad<<endl;
            cout<<"sinifta kalmistir:"<<endl;
        }


    }




}

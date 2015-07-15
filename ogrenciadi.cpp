#include<iostream>
#include<cstring>
using namespace std;
class ogrenci
{
    string ogrenci_adi;
    string bolumu;
    int tc;
    public:
    void al(string ogradi,string blmu,int tck )
    {
        ogrenci_adi=ogradi;
        bolumu=blmu;
        tc=tck;
    }
    void goruntule()
    {
        cout<<"ogrenci adini giriniz:"<<ogrenci_adi<<endl;
        cout<<"ogrencinin bolumunu giriniz:"<<bolumu<<endl;
        cout<<"ogrenci tc kimlik numarasi:"<<tc<<endl<<endl;
    }

}ogr1,ogr2,ogr3;


int main()
{
    ogr1.al("ahmet","serefoglu",185966);
    ogr2.al("mustafa","al",546813);
    ogr2.al("fatma","var",15789);
    ogr1.goruntule();
    ogr2.goruntule();
    ogr3.goruntule();
    return 0;

}

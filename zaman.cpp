#include<iostream>
using namespace std;
class zaman
{
    int saat,dakika,saniye;
    public:
   void deger(int a,int b,int c)
   {
       saat=a;
       dakika=b;
       saniye=c;
   }
   void al()
   {
       cout<<saat<<":"<<dakika<<":"<<saniye;
   }


     }zmn1;
     int main()
{

    zmn1.deger(22,32,36);
    zmn1.al();



    return 0;

}

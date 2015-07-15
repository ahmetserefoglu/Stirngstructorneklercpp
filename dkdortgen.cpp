 #include<iostream>
 using namespace std;
 class dikdortgen
 {
     int kisa_kenar,uzun_kenar;
     public:
     friend  int goruntule(dikdortgen deneme);


     dikdortgen(){
         kisa_kenar=5;
         uzun_kenar=10;
     }



 }x,y;
 int goruntule(dikdortgen deneme)
 {

      return y.kisa_kenar*y.uzun_kenar ;
 }


 int main()
   {
       cout<<goruntule(x)<<endl;
       cout<<goruntule(y)<<endl;
   }

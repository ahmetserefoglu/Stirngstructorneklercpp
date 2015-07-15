#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    double vize,final,ort,finalbr,vizebr,ort1;
    int secim;
    char harf,x;
    cout<<"vize notunu giriniz:";
    cin>>vize;
    cout<<"final notunu giriniz:";
    cin>>final;
    ort=vize*0.4+0.6*final;



  while(1)
{
    cout<<"1-5 arasi rakam seciniz:";
    cin>>secim;

switch(secim)
        {

                 case 1:  if(vize<0 && final<0)
                    cout<<"vize ve final notu girilmemistir:"<<endl;
                else
                    cout<<"isleme devam edebilirsiniz:"<<endl;
                    cout<<"o yada O harflerine basiniz:"<<endl;


                       cin>>harf;
                    if(harf=='o' || harf=='O')
                   {
                       if(vize!=vizebr && final!=finalbr)

                    cout<<"ortalamaniz:"<<ort1<<endl;
                   else


                   cout<<"yeni ortlmnz:"<<ort<<endl;
                   }
                    else
                    break;

                    break;
            case 2:
                 if(vize<0 && final<0)
                 cout<<"vize ve final notu girilmemistir:"<<endl;
                   else
                     cout<<"isleme devam edebilirsiniz:"<<endl;

                    cout<<"d yada D harflerine basiniz:"<<endl;
                    cin>>harf;
                    if(harf=='d' || harf=='D')

                        {
                       if(vize!=vizebr && final!=finalbr)
                       {
                            cout<<"ortalamaniz:"<<ort1<<endl;
                        if(ort1>70)
                    {
                        cout<<"sinifi gectiniz:"<<endl;
                    }

                    else cout<<"sinifta kaldiniz:"<<endl;
}
                     else
                   {
                       cout<<"yeni ortlmnz:"<<ort<<endl;
                       if(ort>70)
                    {

                     cout<<"sinifi gectiniz:"<<endl;

                    }
                    else cout<<"sinifta kaldiniz:"<<endl;}


                   }

                    else
                    break;

                    break;
            case 3:
                    if(vize<0 && final<0)
                cout<<"vize ve final notu girilmemistir:"<<endl;
            else
             cout<<"isleme devam edebilirsiniz:"<<endl;

                    cout<<"c yada C harflerine basiniz:"<<endl;
                    cin>>harf;
                    if(harf=='c' || harf=='C')
                     {
                       if(vize!=vizebr && final!=finalbr)
{

                    cout<<"vizeniz:"<<vizebr<<endl;
                     cout<<"minumum final notunuz "<<(70-0.4*vizebr)/0.6<<" olmalidir"<<endl;
}
                   else
                   {


                        cout<<"vizemiz:"<<vize<<endl;
                    cout<<"minumum final notunuz "<<(70-0.4*vize)/0.6<<" olmalidir"<<endl;
                   }

                   }


                    else



                    break;
              case 4:
                        cout<<"y yada Y harflerine basiniz:"<<endl;
                        cin>>harf;
                        if(harf=='y' || harf=='Y');
                        else
                        break;

                        cout<<"yeni vize notu:"<<endl;
                        cin>>vizebr;
                        cout<<"yeni final notu:"<<endl;
                        cin>>finalbr;
                        ort1=vizebr*0.4+0.6*finalbr;
                        break;

                  case 5: cout<<"cikis icin q yada Q ya basiniz:";
                  cin>>harf;
                  if(harf=='Q' || harf=='q')
                  return 0;
        }


        }
}







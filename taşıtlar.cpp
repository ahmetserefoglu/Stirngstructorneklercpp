#include<iostream>
using namespace std;
class tasitlar
{
    int hiz,model,no,fiyat;
    public:
    tasitlar(int x,int y,int z,int w)
    {
        hiz=x;
        model=y;
        no=z;
        fiyat=w;

    }
    void goster()
    {
        cout<<"arabanin hizi:"<<hiz<<endl;
        cout<<"arabanin modeli:"<<model<<endl;
        cout<<"arabanin numarasi:"<<no<<endl;
        cout<<"arabanin fiyati:"<<fiyat<<endl;
    }
};
int main()
{
    tasitlar audi[5]={tasitlar(220,2012,85,25000),tasitlar(200,2011,25,65000),tasitlar(200,2012,45,20000),tasitlar(200,2010,23,2005),tasitlar(200,2010,29,20000)};
    tasitlar tofas[5]={tasitlar(220,2012,85,25000),tasitlar(200,2011,25,65000),tasitlar(200,2012,45,20000),tasitlar(200,2010,27,205),tasitlar(180,1999,22,20000)};
    for(int i=0;i<=4;i++)
    {
        cout<<"----audi-----\n";
        audi[i].goster();

    }
    for(int j=0;j<=4;j++)
    {
         cout<<"---tofas---\n";
        tofas[j].goster();

    }
    return 0;
}

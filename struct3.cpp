#include<iostream>
using namespace std;
struct eleman
{
    int x;
    float y;
    double z;
    char w;

}deneme;
int main()
{
    cout<<"tamsayi:"<<sizeof deneme.w+sizeof deneme.y+ sizeof deneme.z+sizeof deneme.w<<endl;
}

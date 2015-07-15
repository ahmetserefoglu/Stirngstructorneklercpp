#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream dosya("deneme.txt");
    if(!dosya)
    {
        cout<<"dosya acilmaadi"<<endl;


    }
    dosya<<"sevil eris"<<endl;
    return 0;
}

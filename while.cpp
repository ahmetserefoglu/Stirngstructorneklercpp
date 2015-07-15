 #include<iostream>
 using namespace std;
 int main()
{
    int x,y;
    cout<<"birinci sayiyi giriniz:";
    cin>>x;
    cout<<"ikinci sayiyi giriniz:";
    cin>>y;

    if(x>y)
    {
        while(x>y)
        {
            cout<<"sayilar esit degil\n";
        x--;
        }
        cout<<"sayilar esitlendi\n";
    }
    if(y>x)
    {
        while(y>x)
        {
            cout<<"sayilar esit degil\n";
            y--;
        }
        cout<<"sayilar esitlendi\n";
    }
    return 0;
}

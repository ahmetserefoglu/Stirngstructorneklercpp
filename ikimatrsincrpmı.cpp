 #include<iostream>
 using namespace std;
 int main()
{
    int a[2][2],b[2][2],c[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"A matrisi:"<<i<<"-"<<j<<":";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"B matrisi:"<<i<<"-"<<j<<":";
            cin>>b[i][j];

        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            cout<<c[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}

#include<string.h>


#include<string>
#include<iostream>
#include<fstream>

#include<string.h>


using namespace std;
int main()
{
int request=0;



ifstream input;
ofstream output;

while(request!=-1)

{
//men�
cout<<"\n Cikmak i�in -1 yazin" <<endl;
cout<<"1-Dosyaya yazmak i�in 1 yazin" <<endl;
cout<<"2-Dosyadan okumak icin 2 yazin" <<endl;

cin>>request;





if(request==1)

{
//Eklemek icin

output.open("clients.txt");
cout<<"Lutfen dosyaya eklemek istediginiz yaziyi girin"<<endl;
char str[60];
cin.ignore();
cin.getline(str,60);
output<<str<<" "<<endl;

output.close();

}

else if(request==2)

{

input.open("clients.txt");
string str;

//Sonsuz donguye giriyoruz,cikma kosulumuz ise
//if icinde yer alan,dosyanin
//bittigini gosteren input.eof kodudur.
while(true){
input>>str;

if(input.eof()){
break;
}
//Her okunun stringi ekrana basiyoruz.
cout<<str<<" ";
}
input.close();

}

}

return 0;

}

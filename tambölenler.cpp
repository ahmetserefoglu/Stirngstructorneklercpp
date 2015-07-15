#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=0,b=0,c=0,d=0,e=1;

printf("sayiyi giriniz\n");
scanf("%d",&c);

while(e!=c)
{
a++;
e++;

d=c%a;

if(d==0)
{
b=b+a;
}
else;


}

printf("\nbolenler toplami = %d\n",b);

system("PAUSE");
return 0;

}

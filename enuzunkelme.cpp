#include<stdio.h>
#include<string.h>
int main(void)
{
int i;
int sayac,enb;
char cumle[100];
printf("Cümleyi Giriniz..:");
gets(cumle);
sayac=0;
enb=0;
for(i=0;i<strlen(cumle);i++)
{
if(cumle[i]==' ')
{
if(enb<sayac) enb=sayac;
sayac=0;
}
else
sayac=sayac+1;
}
if(enb<sayac) enb=sayac;
printf("%d",enb);}

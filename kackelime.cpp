#include<stdio.h>
#include<string.h>
int main(void)
{
int i, sayac;
char cumle[100];

printf("C�mleyi Giriniz..:");
gets(cumle);
sayac=1;
for(i=0;i<strlen(cumle);i++)
{
if(cumle[i]==' ')
sayac=sayac+1;
}
printf("Kelime say�s�..:%d",sayac);
}

#include<stdio.h>
main()
{
int a,b,c,tut,no,no2[100],secim;
char ad[20],soyad[20],ad2[100][20],soyad2[100][20];

while(secim!=3)
{
printf("Kisi Kayit Programina Hosgeldiniz\n");
printf("*********************************\n");
printf("burhansoft // ver 1.0 .. // ----\n\n\n");
printf("1-Kayit\n2-Listeleme\n3-Cikis\n");
printf("Seciminiz : ");
scanf("%d",&secim);
switch(secim)
{
case 1:
FILE *tut1;
tut1=fopen("kayit.dat","a");
for(a=0;a<100;a++)
{
printf("Kisi no : ");
scanf("%d",&no);
if(no==-1)
{
break;
}
printf("\nAdi : ");
scanf("%s",ad);
printf("\nSoyadi : ");
scanf("%s",soyad);
fprintf(tut1,"%d %s %s\n",no,ad,soyad);
}
fclose(tut1);
break;
case 2:
FILE *tut2;
tut2=fopen("kayit.dat","r");
for(b=0;b<100;b++)
{
tut=fscanf(tut2,"%d %s %s\n",&no2[b],ad2[b],soyad2[b]);
if(tut==EOF)
{
break;
}
}
fclose(tut2);
printf("No Adi Soyadi\n");
for(c=0;c<b;c++)
{
printf("%d",no2[c]);
printf(" %s",ad2[c]);
printf(" %s\n",soyad2[c]);
}
break;
}
}
}

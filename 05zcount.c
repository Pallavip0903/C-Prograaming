#include<stdio.h>
#include<conio.h>
 int main()
 {
 int Num=0; temp=0, Zcount=0;
 printf("\n Enter a number:");
 scanf("%d", &Num) ;
 temp=Num;
 do
 {
 if((temp%10)==0) 
 {
 Zcount++;
 }
 temp=temp/10;
 }
 while(temp!=0) ;
 printf("/n/n Zero count in%",Num,Zcount);
 getch() ;
 return 0;
 }
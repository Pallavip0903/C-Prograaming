#include<stdio.h>
#include<conio.h>
int main()
{
int N1=0,N2=0;
up:
printf("\n Enter 1st N0=");
scanf("%d",&N1);
printf("\n Enter 2nd No=");
scanf("%d",&N2);
if(N1==N2)
{
printf("\n Both Numbers are same.");
printf("\n Do Enter Different Numbers To Compare.\n ");
goto up;
}
(N1>N2)?printf("\n %d Number is Max.",N1):printf("\n %d Number is Max.",N2);
getch();
return 0;
} 

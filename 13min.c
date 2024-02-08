#include<stdio.h>
#include<conio.h>
int main()
{
int N1=0,N2=0;
printf("\n Enter 1st N0=");
scanf("%d",&N1);
printf("\n Enter 2nd No=");
scanf("%d",&N2);
if(N1==N2)
{
printf("\n Both Numbers are same:");
}
else if(N1<N2)
{
printf("\n %d Number is Minimum.",N1); 
}
else
{
printf("\n %d Number is Minimum.",N2);
}
printf("\n\n thanks!");
getch();
return 0;
}

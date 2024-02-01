#include<stdio.h>
#include<conio.h>
int main()
{
int N1=0, N2 = 0;
printf("\n Enter 1st No = ");
 scanf("%d", &N1);
printf("\n Enter 2nd No = ");
 scanf("%d", &N2);
if (N1 ==N2)
{
printf("\n Both Numbers are Same.");
}
else if (N1 >N2)
{
printf("\n %d Number is Max.", N1);
}
else
{
printf("\n %d Number is Max.", N2);
}
printf("\n\n Thanks!!!");
getch();
return 0;
}
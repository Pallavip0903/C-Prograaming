#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num=0;
    int cube=0;

    printf("enter num: ");
    scanf("%d",&num);
    cube=num *num*num;

    printf("cube is %d",cube);
    getch();

    return 0;
}
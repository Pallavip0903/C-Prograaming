#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{

  int Num[Size]={},i=0,Ocnt=0;
  
  printf("\n\n Enter %d Array = \n",Size);
  for(i=0;i<Size;i++)
  {
  printf("\n Enter %d Element:",i+1);
  scanf("%d",&Num[i]);
  }
  getch();
  
  for(i=0;i<Size;i++)
  {
    if(Num[i]%2==1)
    {
     Ocnt++;
    }
  }  
  printf("\n Odd Element Count in Array=%d.",Ocnt);
  
  getch();
  return 0;
}
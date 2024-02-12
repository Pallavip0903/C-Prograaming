#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{

  int Num[Size]={},i=0,Ecnt=0;
  
  printf("\n\n Enter %d Array => \n",Size);
  for(i=0;i<Size;i++)
  {
  printf("\n Enter %d Element:",i+1);
  scanf("%d",&Num[i]);
  }
  getch();
  
  for(i=0;i<Size;i++)
  {
    if(Num[i]%2==0)
    {
     Ecnt++;
    }
  }  
  printf("\n Even Element Count in Array=%d.",Ecnt);
  
  getch();
  return 0;
}
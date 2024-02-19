#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{

  int Num[Size]={},i=0;
  for(i=0;i<Size;i++)
  {
  printf("\n Element Number %d=%d",i+101,Num[i]);
  }
  getch();
  
  printf("\n\n Enter 5 Array Elements=\n",Size);
  for(i=0;i<5;i++)
  {
  printf("\n Enter %d Element:",i+1);
  scanf("%d",&Num[i]);
  }
  getch();
  
  printf("\n Given Array Element are =\n");
  
  for(i=0;i<Size;i++)
  
  {
  printf("\n Element Number %d=%d",i+1001,Num[i]);
  }
  
  getch();
  return 0;
}
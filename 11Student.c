#include <stdio.h>
#include <conio.h>

struct Stud
{
    int RollNo;
    char Name[50];
    float Per;
};

int main()
{
    printf("\n size of Integer is = %d.", sizeof (int));
    printf("\n size of Structure Student Object / Instance is = %d.", sizeof (struct Stud));

    getch();
    return 0;
}
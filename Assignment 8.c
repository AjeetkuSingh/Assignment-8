//Assignment 8 Sol 1//
/*
#include <stdio.h>
int main() {
   int i,j;
   for (i = 1; i <=5;i++)
   {
       for (j=1;j<=5;j++){
            if(j<=i)
            printf("*");
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 2//
/*
#include <stdio.h>
int main() {
   int i,j;
   for (i = 1; i <=5;i++)
   {
       for (j=1;j<=5;j++){
            if(j>=6-i)
            printf("*");
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 4//
/*
#include <stdio.h>
int main() {
   int i,j;
   for (i = 1; i <=5;i++)
   {
       for (j=1;j<=5;j++){
            if(j>=i)
            printf("*");
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 3//
/*
#include <stdio.h>
int main() {
   int i,j;
   for (i = 1; i <=5;i++)
   {
       for (j=1;j<=5;j++){
            if(j<=6-i)
            printf("*");
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 5//
/*
#include <stdio.h>
int main() {
   int i,j;
   for (i = 1; i <=5;i++)
   {
       for (j=1;j<=9;j++){
            if(j>=6-i && j<=4+i)
            printf("*");
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 6//
/*
#include <stdio.h>
int main() {
   int rows, i, j, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}
*/

//Sol 7//
/*
#include <stdio.h>
int main() {
   int i,j;
   for (i = 1; i <=5;i++)
   {
       for (j=1;j<=9;j++){
            if(j<=6-i || j>=4+i)
            printf("*");
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 8//
/*
#include <stdio.h>
int main() {
   int i,j,k;
   for (i = 1; i <=4;i++)
   {
       k=1;
       for (j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){

            printf("%d",k);
            j<4?k++:k--;
            }
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 11//
/*
#include <stdio.h>
int main() {
   int i,j;
   char k;
   for (i = 1; i <=4;i++)
   {
       k='A';
       for (j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){

            printf("%c",k);
            j<4?k++:k--;
            }
       else
        printf(" ");

   }
   printf("\n");
   }
}
*/

//Sol 14//
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==0 || i==j || i==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}
*/

//Sol 19//
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<19;j++)
        {
            if(((2-i<=j)&&(j<=6+i))||((12-i<=j)&&(16+i>=j)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<19;j++)
        {
        if((i==0)&&(j==6))
            printf("MySirG");
        if((i==0)&&(j>=6)&&(j<=11))
            continue;
        if((i<=j)&&(j<=18-i))
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
return 0;
}
*/

//Sol 17//
/*
#include<stdio.h>
#include<conio.h>
int main()
{
int r, i, j, s;
printf("Enter number of rows: ");
scanf("%d",&r);
for(i = r; i >= 1; i--)
{
//for loop to put space in pyramid
for (s = i; s < r; s++)
printf(" ");
//for loop to print star in pyramid
for(j = 1; j <= 2 * i - 1; j++)
{
if(i == r || j == 1 || j == 2*i - 1)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
*/

//Sol 16//
/*
#include<stdio.h>
#include<conio.h>
int main()
{
int r, i, j, s;
printf("Enter number of rows: ");
scanf("%d",&r);
for(i = 1; i <= r; i++)
{
//for loop to put space in pyramid
for (s = i; s < r; s++)
printf(" ");
//for loop to print star
for(j = 1; j <= (2 * r - 1); j++)
{
if(i == r || j == 1 || j == 2*i - 1)
printf("*");
else
printf(" ");
}
//ending line after each row
printf("\n");
}
return 0;
}
*/

//Sol 15//
/*
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=i; j<5; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==5 || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//Sol 13//
#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    for(i=0;i<=6;i++)
    {
        for(k=65;k<=71-i;k++)
            printf("%c",k);
        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=71-i;l>=65;l--)
            if(l!=71)
                printf("%c",l);
        printf("\n");
    }
    return 0;
}



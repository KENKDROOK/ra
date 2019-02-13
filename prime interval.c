#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,low,high;
printf("enter the value:");
scanf("%d %d",&low,&high);
for (i=low;i<=high;i++)
{
for (j=2;j<=i;j++)
{
 if (i%j==0)
{
 break;
}
}
if (i==j)
{
 printf("\n%d",j);
 }
 }
getch();
}

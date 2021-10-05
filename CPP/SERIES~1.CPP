#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,p=1,q=2,r=3,sum1=0,sum2=0,sum3=0,sum;
clrscr();
printf("enter the number of terms\n");
scanf("%d",&n);
for(i=1;i<=n;i=i+3)
{
sum1=sum1+p;
p=p*1;
}
for(j=2;j<=n;j=j+3)
{
sum2=sum2+q;
q=q*2;
}
for(k=3;k<=n;k=k+3)
{
sum3=sum3+r;
r=r*3;
}
sum=sum1+sum2+sum3;
printf("the required sum is %d",sum);
getch();
}
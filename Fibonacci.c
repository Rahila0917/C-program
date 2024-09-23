#include<stdio.h›
#include<conio.h›
void main ()
｛
int i,n :
int t1=0, t2=1;
int nextterm=t1+t2;
printf("Enter the number of terms:");
scanf ("%d"
, &n) ;
printf("fibonaci series:%d,%d, ", t1 ,t2);
for (1=3; 1<=n;++1){
printf ("%d", nextterm);
t1=t2;
t2=nextterm;
nextterm = t1+t2;
｝
getch() ;
}
/*Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int s,n;
    printf("enter the number");
    scanf("%d",&n);
    s=snat(n);
    printf("%d",s);
    return 0;
}
 int snat(int n)
 {
     if(n==0)
        return ;
        return n+snat(n-1);
 }
 //Write a recursive function to calculate sum of first N odd natural numbers
 #include<stdio.h>
 int main()
 {
     int s,n;
     printf("enter the number");
     scanf("%d",&n);
     s=sod(n);
     printf("%d",s);
     return 0;
 }
 int sod(int n)
 {
     if(n==0)
        return;
     return (2*n-1)+sod(n-1);
 }
 //Write a recursive function to calculate sum of first N even natural numbers
 #include<stdio.h>
 int main()
 {
     int s;
     s=nev(5);
     printf("%d",s);
     return 0;
 }
 int nev(int n)
 {
     if(n==0)
        return;
     return 2*n +nev(n-1);
 }
 //Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int main()
{
    int s;
    s=ssq(3);
    printf("%d",s);
    return 0;
}
int ssq(int n)
{
    if(n==0)
        return;
    return n*n +ssq(n-1);
}
//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int main()
{
    int s;
    s=sumdi(5678);
    printf("%d",s);
    return 0;
}
int sumdi(int n)
{
    if(n==0)
        return;
    return sumdi(n/10)+(n%10);
}
//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int main()
{
    int s;
    s=fact(5);
    printf("%d",s);
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
        return;
    return n*fact(n-1);
}
//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int s;
    s=hcf(45,5);
    printf("%d",s);
    return 0;
}
int hcf(int a,int b)
{
    if(a%b==0)
        return b;
    return hcf(b,a%b);
}
//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int i,n=5;
    for(i=0;i<5;i++)
        printf("%d",fib(i));
    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}*/

















































































































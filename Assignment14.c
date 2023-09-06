/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter the ten number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of all no=%d",sum);
    printf("\n");
    return 0;
}
//Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg=0;
    printf("enter the ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf(" sum of numbers%d",sum);
    avg=sum/10.0;
    printf("\n");
    printf("avg value=%f",avg);
    return 0;
}
//Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int a[10],i,sv=0,sod=0;
    printf("enter the ten numbers");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
        sv=sv+a[i];
    else
        sod=sod+a[i];
    }
    printf("sum of even %d",sv);
    printf("sum of odd numb%d",sod);
    printf("\n");
    return 0;
}
//Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
#include<stdio.h>
int main()
{
    int i,a[10],max=-1;
    printf("enter the ten numbers");
    for(i=0;i<=9;i++)
    {
     scanf("%d",&a[i]);
            if(max<a[i])
               max=a[i];
    }
              printf("\n%d",max);
            printf("\n");
                 return 0;
}
//Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
#include<stdio.h>
int main()
{
    int i,a[10],min=1000;
    printf("enter the ten number");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    if(min>a[i])
        min=a[i];
    }
printf("%d",min);
printf("\n");
return 0;
}
//Write a program to sort elements of an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int i,a[10],temp,j;
    printf("enter the ten numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}
//Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int i,j,a[5],temp;//array values aways contains integer values
    printf("enter the ten numbers");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(i=3)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
//Write a program to find the second smallest number in an array.Take array values
from the user.
#include<stdio.h>
int main()
{
    int i,j,a[5],temp;
    printf("enter the ten numbers");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(i=1)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
//Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
#include<stdio.h>
int main()
{
    int i,a[10];
    printf("enter the numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=9;i>=0;i--)
      printf("%d ",a[i]);
    printf("\n");
    return 0;
}
//Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
#include<stdio.h>
int main()
{
    int i,a[10],b[10];
    printf("enter the unmbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<=9;i++)
    printf("%d ",b[i]);
    printf("\n");
    return 0;
}
























































































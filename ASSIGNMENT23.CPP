//1. Write a C++ program to print Hello MySirG on the screen.
#include<iostream>
using namespace std;
int main()
{
cout<<"Hello MySirG";
return 0;
}
//2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello";
    cout<<endl;
    cout<<"MySirG";
    return 0;
}
//3. Write a C++ program to calculate the sum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"enter the two numbers";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum is "<<sum;
    return 0; 

}
//4. Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    int r,a;
    cout<<"enter the radius";
    cin>>r;
    a=3.14*r*r;
    cout<<"circle area is"<<a;
    return 0;
}
//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,v;
    cout<<"enter the lenght , breath , and hight";
    cin>>l>>b>>h;
    v=l*b*h;
    cout<<"cuboid volume is"<<v;
    return 0;
}
//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main() 
{
    int a,b,c,avg,sum;
    cout<<"enter the three numbers";
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"average of three numbers is"<<avg;
    return 0;
}
//7. Write a C++ program to calculate the square of a number
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter a number";
    cin>>x;
    y=x*x;
    cout<<"square of a number"<<y;
    return 0;
}
//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a=20,b=8;
    //cout<<"enter the two numbers";
    //cin>>a>>b;
    a=a+b;
    b=a-b;
    cout<<b;
    cout<<endl;
    a=a%10;
    cout<<a;
    }
//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two numbers";
    cin>>a>>b;
    if(a>b)
    cout<<"a is maxi"<<a;
    else
    cout<<"b is maxi"<<b;
    return 0;
}
//10. Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,add=0;
    cout<<"enter ten numbers";
    for(i=0;i<=9;i++)
    {
    cin>>a[i];
     add=add+a[i];
    }
     cout<<add;
     return 0;
}
 

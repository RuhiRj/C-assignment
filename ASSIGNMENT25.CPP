/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex number*/
#include<iostream>
using namespace std;
class Complex//it is a define class complex number
{
     private:
   int a,b;// it is a declaration instance member variable to store real and imaginary number
  public:
    void setdata(int x ,int y)//instance local variable
    {
      a=x;
      b=y;
    }
    void printdata()//it is also a define instance member function
    {
        cout<<" "<<"real="<<a<<"imag="<<b;
    }
};
int mian()
{
    Complex p1,p2;
    p1.setdata(6,7);
    p2.setdata(5,8);
    p1.printdata();
    cout<<endl;
    p2.printdata();
    cout<<endl;
    return 0;
}
/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class time
{
    private:
   int hor;
   int min;
   int sec;
   public:
   void settime(int x ,int y,int z)
   {
      hor=x;
      min=y;
      sec=z;
   }
   void displaytime()
   {
    cout<<" "<<"hor="<<hor<<"min="<<min<<"sec="<<sec;
   }
};
int main()
{
    time t1;
    t1.settime(3,45,20);
    t1.displaytime();
    cout<<endl;
    return 0;
}
/*3. Define a class Factorial and define an instance member function to find the
 Factorialof a number using class */
#include<iostream>
using namespace std;
class factorial
{ private:
   int i;
   public:
   int fact(int n)
   {
     int fac=1;
     i=n;
    for(i=1;i<=n;i++)
    fac=fac*i;
    return fac;

   }
};
int main()
{
    factorial f1;
    f1.fact(5);
    cout<<f1.fact(5);
    cout<<endl;
  return 0;
}
/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.   */
  #include<iostream>
  using namespace std;
  class largestnumber
  {
    // private:
     //int a,b,c;
     public:
      int lrgnumber(int x,int y, int z)
      {
         // a=x;
         //b=y;
          //c=z;
          if(x>y && x>z)
          return x;
         if (y>x && y>z)
          return y;
          if (z>x && z>y)
            return z;
      }
     
 };
 int main()
 {
    largestnumber l1; 
   // l1.lrgnumber(4,6,7);
   // l1.display();
      cout<<l1.lrgnumber(9,6,7);
   return 0;
 }
 /*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class revnumber
{
   public:
   int rev(int n)
   {
    int i;
   }
};
/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class square
{
    public:
   int squ(int n)
   {
    int s;
    s=n*n;
    return s;
   }
};
int main()
{
    square b;
   // b.squ(5);
    cout<<b.squ(5);
    return 0;
}
/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class rectangle
{
  public:
  int area(int l, int b)
  {
    int r;
    r=l*b;
    return r;
  }
};
int main()
{
    rectangle b;
    cout<<b.area(5,7);
    cout<<endl;
    return 0;
}
/*9. Define a class Circle and define an instance member function to find the area of the
circle.*/
  #include<iostream>
  using namespace std;
  class circle
  {
    public:
    int area(int r)
    {
        float s;
        s=3.14*r*r;
        return s;
    }
  };
  int main()
  {
    circle b;
    cout<<b.area(2);
    cout<<endl;
    return 0;
  }
  /*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc*/
#include<iostream>
using namespace std;
class Area
{
    public:
     int area(int l)
     {
        int s;
        s=l*l;
        return s;
     }
     int area(int l, int b)
     {
        int s;
        s=l*b;
        return s;
     }
     int area(float r)
     {
        int s;
        s=3.14*r*r;
        return s;
     }
};
int main()
{
    Area b;
    cout<<b.area(6);
    cout<<endl;

    cout<<b.area(7,8);
    cout<<endl;

    cout<<b.area(4);
    cout<<endl;
    return 0;
}

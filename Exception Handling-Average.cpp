#include<iostream>
using namespace std;
class average
{
   int a,b;
   public:
   average(int x,int y)
   {
      a=x;
      b=y;
   }
   void ans1()
   {
    try{  try
      { if (b==0)
         {throw 0;
         }
        else
        {cout<<"The division of two numbers is:"<<a/b<<endl;
        }
      }
      catch(int m)
      {cout<<"Exception:DIVISION BY ZERO ERROR"<<"\n";
      throw;}
   }
    catch(...)
    {cout<<"Exception handled \n";}
   }
     void ans2()
     {
      try
      {try
       {
        if(a<0 || b<0)
        {throw a;
        }
        else
        {cout<<"THe addition of two numbers is:"<<a+b<<endl;
        }
       }
     catch(int n)
      {cout<<"Exception:NEGATIVE NUMBER FOUND"<<"\n";
       throw;
      }
      }
     catch(...)
     {cout<<"Exception handled \n";}
     }
     };
   int main()
   {
      average a1(10,5);
      average a2(-7,3);
      average a3(8,0);
      a1.ans1();
      a1.ans2();
      a2.ans2();
      a3.ans1();
       return 0;
   }

#include<iostream>
#include<string>
using namespace std;
class student
{
   string name;
   int age;
   float height,weight,percentage;
   public:
   student()
   {
      name=" ";
      age=0;
      height=0;
      weight=0;
      percentage=0;
   }
   ~student()
   {
   }
   void getdata()
   {
      cout<<"enter the name:";
      cin>>name;
      cout<<"enter the age:";
      cin>>age;
      cout<<"enter height,weight,percentage:";
      cin>>height>>weight>>percentage;
   }
   void printdata()
   {
      cout<<"name :"<<name<<endl;
      cout<<"age :"<<age<<endl;
      cout<<"height :"<<height<<endl;
      cout<<"weight :"<<weight<<endl;
      cout<<"percentage :"<<percentage<<endl;
   }
};
int main()
{
   student s1;
   s1.getdata();
   s1.printdata();
   return 0;
}

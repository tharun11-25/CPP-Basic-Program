#include<iostream>
using namespace std;
class voltage
{
   float I,V1,V2,V3;
   public:
   void resistance(float a)
   {
      cout<<"for circuit with one resistance"<<endl;
      I=100/(a);
      cout<<"current in the circuit :"<<I<<endl;
         V1=I*a;
         cout<<"Voltage across resistor R1"<<V1<<endl;
   }
   void resistance(float a,float b)
   {
      cout<<"for circuit with one resistance"<<endl;
      I=100/(a+b);
      cout<<"current in the circuit :"<<I<<endl;
         V1=I*a;
         V2=I*b;
         cout<<"Voltage across R1 "<<V1<<endl;
         cout<<"Voltage across R2 "<<V2<<endl;
   }
   void resistance(float a,float b,float c)
   {
      cout<<"for circuit with three resistance"<<endl;
      I=100/(a+b+c);
      cout<<"current in the circuit :"<<I<<endl;
         V1=I*a;
         V2=I*b;
         V3=I*c;
         cout<<"Voltage across R1 "<<V1<<endl;
         cout<<"Voltage across R2 "<<V2<<endl;
         cout<<"Voltage across R3 "<<V3<<endl;
   }
};
int main()
{
   float a,b,c;
   cout<<"enter the value of r1 :"<<endl;
   cin>>a;
   cout<<"enter the value of r2 :"<<endl;
   cin>>b;
   cout<<"enter the value of r3 :"<<endl;
   cin>>c;
   voltage V4;
      V4.resistance(a);
      V4.resistance(a,b);
      V4.resistance(a,b,c);
      return 0;
}

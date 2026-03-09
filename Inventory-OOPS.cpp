#include<iostream>
using namespace std;
class inven
{
   public:
      int codeno,price,c;
      string item;
      inven()
      {
         codeno=0;
         item='*';
         price=0;
      }
      ~inven()
      {
      }
      void invencode()
      {
         cout<<"\nenter the code:";
         cin>>codeno;
         cout<<"the code is:"<<codeno;
      }
      void invitem()
      {
         cout<<"\nenter the item:";
         cin>>item;
         cout<<"\nthe item has been added!!!";
         cout<<"\nthe item is:"<<item;
      }
      int priceinv()
      {
         cout<<"\nenter the price of the item:";
         cin>>price;
         cout<<"the price of the item is:"<<price;
         return price;
      }
      int totalinv(int a,int b)
      {
         c=a+b;
         cout<<"\nTHE TOTAL BILL IS:"<<c;
      }
};
int main()
{
   inven i1,i2;
   i1.invencode();
   i1.invitem();
   int a=i1.priceinv();
   i2.invencode();
   i2.invitem();
   int b=i2.priceinv();
   i1.totalinv(a,b);
   return 0;
}

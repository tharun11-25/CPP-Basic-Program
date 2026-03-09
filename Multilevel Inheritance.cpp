#include<iostream>
using namespace std;

class one {
   public:
      int a1;
      virtual void disp() {
         cout << "enter 1st class value:" << endl;
         cin >> a1;
         cout << "the value of 1st class is: " << a1 << endl;
      }
};

class two: public one {
   public:
      int a2;
      virtual void disp() {
         cout << "enter 2nd class value:" << endl;
         cin >> a2;
         cout << "the value of 2nd class is: " << a2 << endl;
      }
};

class three: public two {
   public:
      int a3;
      virtual void disp() {
         cout << "enter the value of 3rd class:" << endl;
         cin >> a3;
         cout << "the value of 3rd class is: " << a3 << endl;
      }
};

class four: public three {
   public:
      int a4;
      virtual void disp() {
         cout << "enter the value of 4th class:" << endl;
         cin >> a4;
         cout << "the value of fourth class is: " << a4 << endl;
      }
};

class five: public four {
   public:
      int a5;
      virtual void disp() {
         cout << "enter the value of 5th class:" << endl;
         cin >> a5;
         cout << "the value of fifth class is: " << a5 << endl;
      }
};

int main() {
   one *p;
   one a;
   p = &a;
   p->disp();

   two b;
   p = &b;
   p->disp();

   three c;
   p = &c;
   p->disp();

   four d;
   p = &d;
   p->disp();

   five e;
   p = &e;
   p->disp();

   return 0;
}

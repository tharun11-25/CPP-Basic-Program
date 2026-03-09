#include<iostream>
#include<string>

using namespace std;
template <class  T>
class matrix
{
   public:
  T a[3][3],b[3][3],c[3][3];
  void get()
   {
      cout<<"enter elements:"<<endl;
      for(int i=0;i<3;i++)
      {
         for(int j=0;j<3;j++)
         {
            cin>>a[i][j];
         }
      }
     }
      void get1()
      {
      cout<<"second";
      for(int i=0;i<3;i++)
      {
         for(int j=0;j<3;j++)
         {
            cin>>b[i][j];
         }
      }

   }
   void put()
   {
      cout<<"result"<<endl;
      for(int i=0;i<3;i++)
               {
      for(int j=0;j<3;j++)
     {
       cout<<c[i][j]<<endl;
     }
               }
   }
   void  multiply()
   {
      matrix <T> d;
      for(int i=0;i<3;i++)
      {
         for(int j=0;j<3;j++)
         {
    c[i][j]=0;
            for(int k=0;k<3;k++)
            {
              c[i][j]=(c[i][j]+(a[i][k]*b[k][j]));
            }
         }
      }

   }
   void add()
  {
       matrix <T> d1;
       for(int i=0;i<3;i++)
      {
       for(int j=0;j<3;j++)
       {
       c[i][j]=0;
       for(int k=0;k<3;k++)
       {
       c[i][j]=(a[i][j]+b[i][j]);
        }
       }
    }

 }
};
int main()
  {

   matrix <int> d;
   d.get();
   d.get1();
   d.multiply();
   d.put();
  matrix <int> c1;
   c1.get();
   c1.get1();
  c1.add();
 c1.put();
 matrix<float> e;
 e.get();
 e.get1();
 e.multiply();
 e.put();
 matrix<float> f;
 f.get();
 f.get1();
 f.add();
 f.put();
   return 0;
}

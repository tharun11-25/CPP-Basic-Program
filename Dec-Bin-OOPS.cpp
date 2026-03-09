#include<iostream>
using namespace std;
class Binaryconverter
{
   int n;
   int size;
   int *arr;

   public:
   Binaryconverter(int n)
   {
      size = 0;
      int temp = n;
      while(temp != 0)
      {
         temp = temp / 2;
         size++;
      }
      arr = new int[size];
      temp = n;
      int i = 0;
      while(temp != 0)
      {
         arr[i] = temp%2;
         temp = temp / 2;
         i++;
      }
   }
   void printBin()
   {
      cout<<"Binary representation :";
      for (int j = size - 1; j >= 0; j--)
      {
         cout<<arr[j];
      }
      cout<<endl;
   }
   ~Binaryconverter()
   {
      delete[] arr;
   }
};
int main()
{
   int n;
   cout<<"enter the number to be converted :"<<endl;
   cin >> n;
   Binaryconverter b1(n);
   b1.printBin();
   return 0;
}

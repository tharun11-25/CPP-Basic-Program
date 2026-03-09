#include <iostream>
using namespace std;

class student
{
    int num, marks;
    string name;
public:
    student(int x, int y, string z)
    {
        num = x;
        marks = y;
        name = z;
    }

    void display()
    {
cout<< "Register number:" << num <<endl;
cout<< "Marks:" << marks <<endl;
cout<< "Name:" << name <<endl;
    }

    student(student &s)
    {
        name = s.name;
        num = s.num;
        marks = s.marks;
    }
};

int main()
{
    student s(19663, 100, "Tharun");
    student s1(s);
    student s2 = s;
    student s3(s);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}

#include<iostream>
using namespace std;

class employee
{
    int num, bs, da, ns;
    string name;

public:
    void getdata()
    {
cout<< "Enter name: ";
cin>>name;
cout<< "Enter employee number: ";
cin>> num;
cout<< "Enter basic salary: ";
cin>> bs;
cout<< "Enter DA: ";
cin>> da;
        ns = bs + da;
    }

    void displaydata() {
cout<< "\n The name is:" << name <<endl;
cout<< "Employee number:" << num <<endl;
cout<< "Basic salary:"<< bs <<endl;
cout<< "Dearness allowance:"<<da<<endl;
cout<< "Net salary:"<<ns<<endl;
    }

    int NetSalary()
    {
        return ns;
    }

    int empNumber()
    {
        return num;
    }
};
void maxsal(employee E[], int size)
{
    int max = E[0].NetSalary();
    int maxempno = E[0].empNumber();

    for (int i = 1; i< size; i++)
    {
        if (E[i].NetSalary() > max)
        {
            max = E[i].NetSalary();
maxempno = E[i].empNumber();
        }
    }
cout<< "The maximum salary is:"<< max<< ", and the employee number is: " <<maxempno<<endl;
}
void minsal(employee E[], int size)
{
    int min = E[0].NetSalary();
    int minempno = E[0].empNumber();

    for (int i = 1; i< size; i++)
    {
        if (E[i].NetSalary() < min)
        {
            min = E[i].NetSalary();
minempno = E[i].empNumber();
        }
    }

cout<< "The minimum salary is:"<< min<< ", and the employee number is:"<<minempno<<endl;
}

int main() {

    employee E[4];

cout<< "Enter details for 4 employees:\n"<<endl;
    for (int i = 0; i< 4; i++)
    {
cout<< "\nEmployee " <<i + 1 << ":\n"<<endl;
        E[i].getdata();
    }

cout<<"\nDisplaying all employee detail:\n"<<endl;
    for (int i = 0; i< 4; i++)
    {
        E[i].displaydata();
    }

maxsal(E, 4);
minsal(E, 4);

    return 0;
}

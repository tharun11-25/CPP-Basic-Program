#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class String
{
    char *a, *b;
    int len;
public:
    String()
    {
        a = NULL;
        b = NULL;
        len = 0;
    }

    String(const char* temp)
    {
        len = strlen(temp);
        a = new char[len + 1];
        strcpy(a, temp);
        b = NULL;
        cout << a << endl;
    }

    String(const char* s1, const char* s2)
    {
        len = strlen(s1) + strlen(s2);
        b = new char[len + 1];
        strcpy(b, s1);
        strcat(b, s2);
        a = NULL;
        cout << b;
    }

    ~String()
    {
        if (a) delete[] a;
        if (b) delete[] b;
    }
};

int main()
{
    char temp1[100], temp2[100];
    cout << "enter first string: ";
    cin >> temp1;
    cout << "enter second string: ";
    cin >> temp2;

    String k1(temp1);
    cout << "\n";
    String k2(temp1, temp2);

    return 0;
}

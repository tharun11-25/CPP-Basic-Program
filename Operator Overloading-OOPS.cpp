#include <iostream>
using namespace std;
class Item
{
    int x, y, z;
public:
    void getdata()
    {
        cout << "Enter three values to be multiplied: ";
        cin >> x >> y >> z;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
    friend Item operator*(Item a, int b);
    friend Item operator*(int b, Item a);
};
Item operator*(Item a, int b)
{
    Item result;
    result.x = a.x * b;
    result.y = a.y * b;
    result.z = a.z * b;
    return result;
}
Item operator*(int b, Item a)
{
    Item result;
    result.x = a.x * b;
    result.y = a.y * b;
    result.z = a.z * b;
    return result;
}

int main()
{
    Item item1, item2, item3;
    item1.getdata();
    item2 = item1 * 4;
    item3 = 2 * item1;
    item2.display();
    cout << endl;
    item3.display();
    return 0;
}

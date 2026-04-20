#include <iostream>
#include <cmath>   
using namespace std; 
   
class comp {  
    int real, img;   
    void get() { 
        cout << "Enter the real part: ";
        cin >> real; 
        cout << "Enter imaginary part: ";  
        cin >> img;
    }
 
    void display() const {
        cout << real << " + j" << img << endl;
    }

    comp operator-(const comp& c) const {
        comp s;
        s.real = real - c.real;
        s.img = img - c.img;
        return s;
    }
    comp operator*(const comp& c) const {
        comp m; 
        double mag1 = sqrt(real * real + img * img);
        double ang1 = atan2(img, real);
        double mag2 = sqrt(c.real * c.real + c.img * c.img);
        double ang2 = atan2(c.img, c.real);
        double mag = mag1 * mag2;
        double ang = ang1 + ang2;
        m.real = static_cast<int>(mag * cos(ang));
        m.img = static_cast<int>(mag * sin(ang));

        return m;
    }
};
int main() {
    comp c1, c2, c3, c4;
    cout << "Enter 1st complex number:" << endl;
    c1.get();
    cout << "Enter 2nd complex number:" << endl;
    c2.get();
    c3 = c1 - c2;
    cout << "Subtraction result: ";
    c3.display();
    c4 = c1 * c2;
    cout << "Multiplication result: ";
    c4.display();
    return 0;
}

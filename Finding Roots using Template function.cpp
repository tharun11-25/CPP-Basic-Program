#include <iostream>
#include <cmath>
using namespace std;

template <class R>
void findRoots(R a, R b, R c) {
    if (a == 0) {
        cout << "Not a quadratic equation." << endl;
        return;
    }

    float m = b * b - 4 * a * c;
    float n = 2 * a;

    if (m > 0)
    {
        float root1 = (-b + sqrt(m)) / n;
        float root2 = (-b - sqrt(m)) / n;
        cout << "Roots are real and distinct:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (m == 0) {
        float root = -b / n;
        cout << "Roots are real and equal:" << endl;
        cout << "Root = " << root << endl;
    } else {
        float realPart = -b / n;
        float imaginaryPart = sqrt(-m) / n;
        cout << "Roots are complex conjugates:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    findRoots(3, 6, 9);
    return 0;
}

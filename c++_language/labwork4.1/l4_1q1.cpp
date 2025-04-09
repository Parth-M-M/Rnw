#include <iostream>
using namespace std;

class x {
public:
    int a;
    int b;
    int c;
};

class y : public x {
public:
    void setdata() {
        cout << "Enter integer a: ";
        cin >> a;
        cout << "Enter integer b: ";
        cin >> b;
        cout << "Enter integer c: ";
        cin >> c;
    }

    int getdata() {
        cout << "Cube of a: " << a * a * a << endl;
        cout << "Cube of b: " << b * b * b << endl;
        cout << "Cube of c: " << c * c * c << endl;
        return (a * a * a) + (b * b * b) + (c * c * c);
    }
};

int main() {
    y y1;
    int ans;
    y1.setdata();
    ans = y1.getdata();
    cout << "Ans is: " << ans << endl;
    return 0;
}


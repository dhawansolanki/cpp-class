#include<iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

class area {
private:
    int a, b;
    float r;
    float AREA;

public:
    area(int x, int y) {
        a = x;
        b = y;
        AREA = x * y;
    }
    
    area(float z) {
        r = z;
        AREA = pi * r * r;
    }
    
    void displayrectangle(void) {
        cout << "Area of Rectangle is: " << AREA << " sqmt" << endl;
    }

    void displaycircle(void) {
        cout << "Area of Circle is: " << AREA << " sqmt" << endl;
    }
};

int main() {
    area REC(10, 10);
    REC.displayrectangle();

    area CIR(5);
    CIR.displaycircle();

    return 0;
}

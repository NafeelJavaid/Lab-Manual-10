#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
    private:
        double a, b, c;
      public:
        Triangle(double side1, double side2, double side3) {
            a = side1;
            b = side2;
            c = side3;
        }
		 double getPerimeter() {
            return a + b + c;
        }
        double getArea() {
            double s = (a + b + c) / 2;
            return sqrt(s * (s - a) * (s - b) * (s - c));
        }
};
   int main() {
    Triangle t(3, 4, 5);
    cout << "Perimeter of the triangle: " << t.getPerimeter() << " m" << endl;
    cout << "Area of the triangle: " << t.getArea() << " m^2" << std::endl;
    return 0;
}
#include <iostream>
using namespace std;

class Rectangle {
   public:
      int length;
      int breadth;

      Rectangle(int l, int b) {
         length = l;
         breadth= b;
      }

      int area() {
         return length * breadth;
      }
};

int main() {
   Rectangle r(5,6);
   cout << "Area of rectangle is: " << r.area();
   return 0;
}


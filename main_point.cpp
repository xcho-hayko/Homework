#include "point2d.h"

int main() {
  Point2D p1(1,2);
  Point2D p2;
  p2.set_x_y(3.5,3.5);
  Point2D p3(p1);
  p3=p1+p2;
  p3.print();
  Point2D p4 = p1;
  p4*= p1;
  p4.print();
  if(p1 < p2 && p3!= p4){
    std::cout<<"Well Done!\n";
  }
  return 0;
} 
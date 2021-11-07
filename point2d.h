#ifndef POINT2D_H_
#define POINT2D_H_
#include <iostream>
#include <map>

class Point2D{
public:
  void set_x_y(double,double);
  double get_x(); 
  double get_y(); 
public:
  Point2D(); 
  Point2D(double ,double ); 
  Point2D(const Point2D & ); 
  Point2D& operator=(const Point2D & ); 
  Point2D operator+(const Point2D & ); 
  friend Point2D operator+(double , Point2D ); 
  Point2D operator+=(const Point2D & ); 
  Point2D operator-(const Point2D & );
  friend Point2D operator-(double , Point2D );
  Point2D operator-=(const Point2D & );
  Point2D operator*(const Point2D & );
  friend Point2D operator*(double , Point2D);
  Point2D operator*=(const Point2D & );
  Point2D operator/(const Point2D & );
  friend Point2D operator/(double , Point2D);
  Point2D operator/=(const Point2D & );
  bool operator<(const Point2D &)const;
  bool operator>(const Point2D &)const;
  bool operator==(const Point2D &)const;
  bool operator!=(const Point2D &)const;
  void print();
private:
  std::map<double,double> mp;
};

#endif //POINT2D_H_
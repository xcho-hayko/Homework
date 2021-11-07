#include "point2d.h"
//implement ctors
  Point2D::Point2D(){
    this->mp.insert(std::pair<double,double>(0,0));
  }

  Point2D::Point2D(double inx,double iny){
    this->mp.insert(std::pair<double,double>(inx,iny));
  }

  Point2D::Point2D(const Point2D & obj){
    this->mp.insert(std::pair<double,double>(obj.mp.begin()->first,obj.mp.begin()->second));
  }

  
//implement methods
  void Point2D::set_x_y(double inx,double iny){
    auto it = this->mp.begin();
    this->mp.erase(it);
    this->mp.insert(std::pair<double,double>(inx,iny));
  }

  double Point2D::get_x(){
    return this->mp.begin()->first;
  }

  double Point2D::get_y(){
    return this->mp.begin()->second;
  }

  Point2D& Point2D::operator=(const Point2D & obj){
    auto it = this->mp.begin();
    this->mp.erase(it);
    this->mp.insert(std::pair<double,double>(obj.mp.begin()->first,obj.mp.begin()->second));
    return *this;
  }

  Point2D Point2D::operator+(const Point2D & obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first+itr->first,it->second+itr->second));
    return tmp;
  }

  Point2D operator+(double xy, Point2D obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first+xy,it->second+xy));
    return tmp;
  }

  Point2D Point2D::operator+=(const Point2D & obj){
    double tmpsum,tmpsum1;
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmpsum=it->first+itr->first;
    tmpsum1=it->second+itr->second;
    this->mp.erase(it);
    this->mp.insert(std::pair<double,double>(tmpsum,tmpsum1));
    return *this;
  }

   Point2D Point2D::operator-(const Point2D & obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first-itr->first,it->second-itr->second));
    return tmp;
  }

  Point2D operator-(double xy, Point2D obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first-xy,it->second-xy));
    return tmp;
  }

  Point2D Point2D::operator-=(const Point2D & obj){
    double tmpsub,tmpsub1;
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmpsub=it->first-itr->first;
    tmpsub1=it->second-itr->second;
    this->mp.erase(it);
    this->mp.insert(std::pair<double,double>(tmpsub,tmpsub1));
    return *this;
  }

  Point2D Point2D::operator*(const Point2D & obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first*itr->first,it->second*itr->second));
    return tmp;
  }

  Point2D operator*(double xy, Point2D obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first*xy,it->second*xy));
    return tmp;
  }

  Point2D Point2D::operator*=(const Point2D & obj){
    double tmpmul,tmpmul1;
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmpmul=it->first*itr->first;
    tmpmul1=it->second*itr->second;
    this->mp.erase(it);
    this->mp.insert(std::pair<double,double>(tmpmul,tmpmul1));
    return *this;
  }

  Point2D Point2D::operator/(const Point2D & obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first/itr->first,it->second/itr->second));
    return tmp;
  }

  Point2D operator/(double xy, Point2D obj){
    Point2D tmp;
    auto tmpit = tmp.mp.begin();
    tmp.mp.erase(tmpit);
    auto it = obj.mp.begin();
    tmp.mp.insert(std::pair<double,double>( it->first/xy,it->second/xy));
    return tmp;
  }

  Point2D Point2D::operator/=(const Point2D & obj){
    double tmpdiv,tmpdiv1;
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    tmpdiv=it->first/itr->first;
    tmpdiv1=it->second/itr->second;
    this->mp.erase(it);
    this->mp.insert(std::pair<double,double>(tmpdiv,tmpdiv1));
    return *this;
  }

  bool Point2D::operator<(const Point2D & obj)const{
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    if(it->first < itr->first && it->second < itr->second){
      return true;
    }
    else{
      return false;
    }
  }

  bool Point2D::operator>(const Point2D & obj)const{
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    if(it->first > itr->first && it->second > itr->second){
      return true;
    }
    else{
      return false;
    }
  }
  
  bool Point2D::operator==(const Point2D & obj)const{
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    if(it->first == itr->first && it->second == itr->second){
      return true;
    }
    else{
      return false;
    }
  }

  bool Point2D::operator!=(const Point2D & obj)const{
    auto it = this->mp.begin();
    auto itr = obj.mp.begin();
    if(it->first != itr->first && it->second != itr->second){
      return true;
    }
    else{
      return false;
    }
  }

  void Point2D::print(){
    std::cout<<"X = " << this->mp.begin()->first<<"\nY = "<<this->mp.begin()->second<<'\n';
  }
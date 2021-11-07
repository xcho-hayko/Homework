#include "person.h"
//implement ctors
Person::Person()
{
  this->age = 0;
  this->name = "";
  this->email = "";
}

Person::Person(std::string name)
{
  this->name = name;
}

Person::Person(const Person& obj)
{
  this->age = obj.age;
  this->name = obj.name;
  this->email = obj.email;
}

Person& Person::operator=(const Person & obj){
  this->age = 0;
  this->name = "";
  this->email = "";
  this->age = obj.age;
  this->name = obj.name;
  this->email = obj.email;
  return *this;
}

//implement methods
void Person::set_age(int age){
  this->age = age;
}

void Person::set_name(std::string name){
  this->name = name;
}

void Person::set_email(std::string email){
  this->email = email;
}

int Person::get_age(){
  return age;
}

std::string Person::get_name(){
  return name;
}

std::string Person::get_email(){
  return email;
}

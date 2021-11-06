#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>

class Person{
public:
  void set_age(int);
  void set_name(std::string);
  void set_email(std::string);
  int get_age();
  std::string get_name();
  std::string get_email();
public:
  Person();
  Person(std::string);
  Person(const Person &);
  Person operator=(const Person &);
  ~Person(){}
private:
  int age;
  std::string name;
  std::string email;
};

#endif //PERSON_H_
#include "person.h"

void print(Person* ob){
  std::cout<<"Name -> "<<ob->get_name()<<"\n";
  std::cout<<"Age -> "<<ob->get_age()<<"\n";
  std::cout<<"Email -> "<<ob->get_email()<<"\n";
}

int main() {
  Person ob;
  Person ob1("User");
  ob1.set_age(22);
  ob1.set_email("emailaddres@mail.ru");
  ob = ob1;
  Person ob2(ob);
  print(&ob2);

  return 0;
} 

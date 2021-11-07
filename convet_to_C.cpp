#include <iostream>
#include <string>

struct Person
{
//private:
    int age;
    std::string name;
    std::string email;
};
//public:
Person Person_default_ctor();
Person Person_param_ctor(std::string name);
Person Person_copy_ctor(const Person& ob);
void set_age(Person* thisobj, int age);
void set_name(Person* thisobj,std::string name);
void set_email(Person* thisobj,std::string email);
int get_age(Person* thisobj);
std::string get_name(Person* thisobj);
std::string get_email(Person* thisobj);

void print(Person* ob){
  std::cout<<"Name -> "<<get_name(ob)<<"\n";
  std::cout<<"Age -> "<<get_age(ob)<<"\n";
  std::cout<<"Email -> "<<get_email(ob)<<"\n";
}

int main() {
    Person ob = Person_default_ctor();
    Person ob1 = Person_param_ctor("User");
    ob1.age=22;
    ob1.email = "emailaddres@mail.ru";
    ob=ob1;
    Person ob2 = Person_copy_ctor(ob);
    print(&ob2);
    
    return 0;
}
//implement ctors
Person Person_default_ctor(){
    Person tmp;
    tmp.name = "";
    tmp.age = 0 ;
    tmp.email = "";
    return tmp;
}

Person Person_param_ctor(std::string name){
    Person tmp;
    tmp.name = name;
    return tmp;
}

Person Person_copy_ctor(const Person& ob){
    Person tmp;
    tmp.age=ob.age;
    tmp.name=ob.name;
    tmp.email=ob.email;
    return tmp;
}
//implement methods
void set_age(Person* thisobj, int age){
    thisobj->age=age;
}

void set_name(Person* thisobj,std::string name){
    thisobj->name = name;
}

void set_email(Person* thisobj,std::string email){
  thisobj->email = email;
}

int get_age(Person* thisobj){
  return thisobj->age;
}

std::string get_name(Person* thisobj){
  return thisobj->name;
}

std::string get_email(Person* thisobj){
  return thisobj->email;
}
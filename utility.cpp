#include "utility.h"

//implement ctors
Utility::Utility(){}

Utility::Utility(const Utility & obj){
  this->inputstr=obj.inputstr;
}

//implement methods

bool Utility::isNumber(std::string instr){
  inputstr=instr;
  if (inputstr.empty())
  {
     return false;
  }
  if((inputstr[0] == '+' || inputstr[0] == '0') && inputstr.size() > 5 ){
    return true;
  }
  else{
    return false;
  }
}

bool Utility::isInteger(std::string instr){
  inputstr=instr;
  if (inputstr.empty())
  {
     return false;
  }
  int tmp = std::stoi(inputstr);
  if(tmp > -2147483647 && tmp <2147483647){
    return true;
  }
  else{
    return false;
  }
}

bool Utility::isFloat(std::string instr){
  inputstr=instr;
  if (inputstr.empty())
  {
     return false;
  }
  float tmp = std::stof(inputstr);
  if(tmp > -2147483647 && tmp <2147483647){
    return true;
  }
  else{
    return false;
  }
}

bool Utility::isBoolean(std::string instr){
  inputstr=instr;
  if (inputstr.empty())
  {
     return false;
  }
  if(inputstr=="True" || inputstr=="TRUE" || inputstr=="true"){
    return true;
  }
  else {
    return false;
  }
}

bool Utility::isEmail(std::string instr){
  inputstr=instr;
  if (inputstr.empty())
  {
     return false;
  }
  int count{};
  for(int i=0;i<inputstr.size();i++){
    count++;
    if(inputstr[i] == '@'){
      if(count<=1){return false;}
      count = 0;
    }
    if(inputstr[i] == '.'){
      if(count <= 1){return false;}
      count=0;
    }
  }
  return true;
}

bool Utility::isURL(std::string instr){
  inputstr=instr;
  const std::regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
 if (inputstr.empty())
  {
     return false;
  }
  if(regex_match(inputstr, pattern))
  {
    return true;
  }
  else
  {
    return false;
  }
}

#ifndef UTILITY_H_
#define UTILITY_H_
#include <iostream>
#include <string>
#include <regex>

class Utility{
public:
  Utility();
  Utility(const Utility &);
  ~Utility(){}
public:
  bool isNumber(std::string);
  bool isInteger(std::string);
  bool isFloat(std::string);
  bool isBoolean(std::string);
  bool isEmail(std::string);
  bool isURL(std::string);
private:
  std::string inputstr;
};

#endif //UTILITY_H_
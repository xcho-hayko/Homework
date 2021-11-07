#include "utility.h"

int main() {
  Utility obj;
  std::cout<<obj.isBoolean("true");
  std::cout<<obj.isEmail("someemail@yahoo.com");
  std::cout<<obj.isURL("https://apple.com");

  return 0;
} 
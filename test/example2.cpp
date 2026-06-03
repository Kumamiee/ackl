#include <iostream>
#include <string>
#include "ackl.hpp"
int main() {
  std::string userinput;
  while (true) {
  std::cout << ">";
  std::cin >> userinput;
  if (std::cin.fail()) {
  ackl::cinallclear();
    continue;
  }
  if (userinput == "test") {
  std::cout << "Hello" << std::endl;
    continue;
  }
  else if (userinput == "exit") {
    ackl::cinallclear();
  std::cout << "exit? y/n: ";
  ackl::ynoutput result = ackl::yncheck();
  if (result == ackl::ynoutput::yes) {
  break;
  }
  else if (result == ackl::ynoutput::no) {
  continue;
  }
  else {
  std::cout << "Please answer with y or n." << std::endl;
    continue;
  }
  }
  else {
  std::cout << "nocommand" << std::endl;
  continue;
  }
  }
return 0;
}


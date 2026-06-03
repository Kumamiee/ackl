#include <iostream>
#include "ackl.hpp"

int main() {
    std::cout << "Do you want to proceed? (y/n): ";
    
    ackl::ynoutput result = ackl::yncheck();
    
    if (result == ackl::ynoutput::yes) {
        std::cout << "User selected YES." << std::endl;
    } else if (result == ackl::ynoutput::no) {
        std::cout << "User selected NO." << std::endl;
    } else if (result == ackl::ynoutput::empty) {
        std::cout << "Input was empty." << std::endl;
    } else {
        std::cout << "Invalid input received." << std::endl;
    }

    return 0;
}

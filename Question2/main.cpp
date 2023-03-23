#include <iostream>
#include "mystring.h"



int main() {
    std::string leftString {"main"};
    std::string rightString {"mani"};
    std::cout << leftString << std::endl;

    
   int value =  my::strcmp(leftString.c_str(), rightString.c_str());
   std::cout << value << std:: endl;
    return 0;
}
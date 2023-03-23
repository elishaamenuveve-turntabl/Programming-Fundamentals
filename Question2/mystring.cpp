#include <iostream>
#include "mystring.h"



namespace my {
    int strcmp(const char *l, const char *r){
        while(true) {
            std::cout << "bob" << std::endl;
            if (*l != *r) {
                return *l > *r ? 1 : -1;
            }
            if (!*l && !*r) {
                return 0;
            }
            *l++, *r++;
        }
    }
    // int strlen(const char *s){}
    // char *strcat(char *l, const char *r){}
    // char *strcpy(char *l, const char *r){}
    // char *toupper(char *s){}
}


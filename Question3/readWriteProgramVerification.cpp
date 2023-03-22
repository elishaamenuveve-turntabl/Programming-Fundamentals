#include <iostream>

using namespace std;

int main() {

    /* The following program fragment reads characters from standard input and writes them to the standard output
     until end-of-input is detected. 
     Write a program to verify this behaviour. 
     Note that end-of-input on Unix machines is indicated by ^D.*/

     /* get() and  put() are low-level functions for cin and cout. 
     They do not format the input or output, i.e. spaces and tabs are left as normal characters. The above while loop terminates on ^D because 
     std::cin.get()
     returns 0 when the end-of-file is read. You can find more information on 
     cin.get()
     here and on 
     cout.put()
     here.*/

    char c;
    while (std::cin.get(c))
    std::cout.put(c);

    return 0;
}
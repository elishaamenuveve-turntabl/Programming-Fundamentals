#include <iostream>

using namespace std;

int main() {
    int userNumber = 0;

    cout<<"Enter an integer: ";
    cin>> userNumber;

    bool odd = userNumber%2;

    if (odd) {
        // int notDivisibleByUserNumber[30];
        int counter = 0;
        int currentNumber = 0;
        while (counter < 20) {
            currentNumber++;
            if (currentNumber%userNumber != 0) {
                cout<<currentNumber<<endl;
                counter++;
            }
        }
        
    } else {
        for (int i = 1; i < 21; i++) {
            cout<< i << " x " << userNumber << " = " << i*userNumber << endl;
        }
    }

    return 0;
}

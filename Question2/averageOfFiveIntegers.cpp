#include <iostream>

using namespace std;


float mean(int numberArray[], int length);
int median(int numberArray[], int length);
int mode(int numberArray[], int length);
void sort(int numberArray[], int length);

int main() {
    
    int numberOfIntegers = 5;
    int fiveIntegers[numberOfIntegers];

    cout<<"Enter 5 integers: ";

    for (int i =0; i<numberOfIntegers; i++) {
        cin>>fiveIntegers[i];
    }
        int lengthOfArray = numberOfIntegers;

        sort(fiveIntegers, lengthOfArray);


        mode(fiveIntegers, lengthOfArray);
        cout<<"The median is "<< median(fiveIntegers, lengthOfArray) <<endl;
        cout<<"The mean is "<< mean(fiveIntegers, lengthOfArray) <<endl;

    return 0;
    }


void sort(int numberArray[], int length) {
    for (int x = 0; x < length; x++) {
        for (int y=1; y < length-x; y++) {
             if (numberArray[x] > numberArray[x+y]) {
                int temp = numberArray[x];
                numberArray[x] = numberArray[x+y];
                numberArray[x+y] = temp;
            }
        }
    }
}

float mean(int numberArray[], int length) {
    float sum = 0;
    
    for (int i = 0; i < length; i++) {
        sum += numberArray[i];
    }
    
    return sum/length;
}


int median(int numberArray[], int length) {
    return numberArray[length/2];
}


int mode(int numberArray[], int length) {
    int occurrences[length];

    for (int i =0; i<length; i++) {
        occurrences[i] = 0;
    }
    int maximum_occurrences = 1;

    for (int a = 0; a < length; a++) {
        occurrences[a] = 1;
        for (int b = 1; b < length-a; b++) {
            if (numberArray[a] == numberArray[a+b]) {
                occurrences[a]++;
            }
        }
        if (occurrences[a] > maximum_occurrences) {
            maximum_occurrences = occurrences[a];
        }
        a+=occurrences[a]-1;
    }

    for (int i = 0; i<length; i++) {
        if (occurrences[i]== maximum_occurrences) {
            cout<<numberArray[i]<< " occurred " << occurrences[i] << " time(s)"<<endl;
        }
    }
    return 1;
}

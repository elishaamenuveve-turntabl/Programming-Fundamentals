#include <iostream>

using namespace std;

int main() {

float mean = 0;
int median = 0;
int fiveIntegers[5];

cout<<"Enter 5 integers: ";

for (int i =0; i<5; i++) {
    cin>>fiveIntegers[i];
}
//variables for finding mode
int highestOccurence = 1;
int mode = fiveIntegers[0];

for (int x = 0; x < 5; x++) {
    //adding the numbers to get the total
    mean = mean+fiveIntegers[x];
    int count = 1;
    int current_number = fiveIntegers[x];
    

    //sorting the numbers
    for (int y=1; y < 5-x; y++) {
        if (current_number == fiveIntegers[y]) {
            count ++;
        }
        else if (fiveIntegers[x] > fiveIntegers[y]) {
            int temp = fiveIntegers[x];
            fiveIntegers[x] = fiveIntegers[y];
            fiveIntegers[y] = temp;
        }  
    }
    if (count > highestOccurence) {
        highestOccurence = count;
        mode = current_number;
    }
}

//picking the middle number as median
median = fiveIntegers[3];

//dividing by total to get the mean
mean = mean/5;

cout<<"The median is "<< median <<endl;
cout<<"The mean is "<< mean <<endl;
cout<<"The mode is "<< mode <<endl;
return 0;
}

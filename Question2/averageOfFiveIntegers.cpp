#include <iostream>

using namespace std;

int main() {
int numberOfIntegers = 5;
float mean = 0;
int median = 0;
int fiveIntegers[numberOfIntegers];

cout<<"Enter 5 integers: ";

for (int i =0; i<numberOfIntegers; i++) {
    cin>>fiveIntegers[i];
    mean = mean+fiveIntegers[i];
}
//variables for finding mode
int highestOccurence = 1;
int mode = fiveIntegers[0];

for (int x = 0; x < numberOfIntegers; x++) {
    
    //sorting the numbers
    for (int y=1; y < numberOfIntegers-x; y++) {
         if (fiveIntegers[x] > fiveIntegers[x+y]) {
            int temp = fiveIntegers[x];
            fiveIntegers[x] = fiveIntegers[x+y];
            fiveIntegers[x+y] = temp;
        }  
    }

}
// // method 1
// int numberOfOccurences = 1;
// for (int a = 0; a < 5; a++) {
//     int count = 1;
//     for (int b = 1; b < 5-a; b++) {
//         if (fiveIntegers[a] == fiveIntegers[b]) {
//             a++;
//             count++;
//         }
//     }
//     if (count > numberOfOccurences) {
//         mode = fiveIntegers[a-1];
//         numberOfOccurences = count;
//     }

// }

// method 2
int occurrences[numberOfIntegers];

for (int i =0; i<numberOfIntegers; i++) {
    occurrences[i] = 0;
}

for (int a = 0; a < numberOfIntegers; a++) {
    occurrences[a] = 1;
    for (int b = 1; b < numberOfIntegers-a; b++) {
        if (fiveIntegers[a] == fiveIntegers[b]) {
            occurrences[a]++;
        }
    }
    a+=occurrences[a]-1;
}

for (int i =0; i<numberOfIntegers; i++) {
    cout<<occurrences[i]<<endl;
}

for (int i = 0; i<numberOfIntegers; i++) {
    if (occurrences != 0) {
        cout<<fiveIntegers[i]<< " occurred " << occurrences[i] << " time(s)"<<endl;
    }
}


//picking the middle number as median
median = fiveIntegers[2];

//dividing by total to get the mean
mean = mean/5;

cout<<"The median is "<< median <<endl;
cout<<"The mean is "<< mean <<endl;
cout<<"The mode is "<< mode <<endl;
return 0;
}
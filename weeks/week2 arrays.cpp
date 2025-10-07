/* Write a C++ program that:
Asks the user to enter N numbers (where N ≤ 100). 
Stores them in an array. 
Calculates and prints: 
The average of all the numbers. 
The maximum number entered. */

#include <iostream>
using namespace std;

int main() {
    int N;
    int array[N];
    
    cout << "Enter the amount of numbers you wish to enter (≤ 100): ";
    cin >> N;

    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    float sum = 0;
    float avg;
    int MAX = array[0];

    for (int i = 0; i < N; i++) {
        if (array[i] > MAX) {
            MAX = array[i];
        }
        sum += array[i];
    }

    avg = sum / N;

    cout << "Average = " << avg << endl;
    cout << "Maximum = " << MAX << endl;

    return 0;
}


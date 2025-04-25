//name:  vanderlei Junior
//exam 02 - modify array checking if it has a repeated integer

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void deleteDuplicates(int a[], int& asize);
void countOccurrences(int a[], int asize, int item);
void printArray(string caption, int a[], int asize);

int main() {
    const int MAXARRAY = 20;
    int a[MAXARRAY] = { 22, 11, 33, 11, 44, 11, 55, 22 };
    int asize = 8;
    
    printArray("Initial array  ", a, asize);

    deleteDuplicates(a, asize);
    
    printArray("Modified array", a, asize);

    int item = 11;
    countOccurrences(a, asize, item);

    return 0;
}

void deleteDuplicates(int a[], int& asize) {
    int newSize = 0;
    
    for (int i = 0; i < asize; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < newSize; j++) {
            if (a[i] == a[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            a[newSize] = a[i];
            newSize++;
        }
    }

    asize = newSize;
}

void countOccurrences(int a[], int asize, int item) {
    int count = 0;
    
    for (int i = 0; i < asize; i++) {
        if (a[i] == item) {
            count++;
        }
    }
    
    
}

void printArray(string caption, int a[], int asize) {
    cout << caption << " [ ";
    for (int i = 0; i < asize; i++) {
        cout << a[i] << ", ";
    }
    
    cout << ", ]"<< endl;
}

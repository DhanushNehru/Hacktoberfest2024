#include <iostream>
using namespace std;

// Function to find an element in the array
int findElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

// Main function
int main() {
    const int size = 5; // Size of the array
    int arr[size]; // Declaration of the array

    // Input values into the array
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    int target; // Element to find
    cout << "Enter the element to find: ";
    cin >> target;

    // Find the element and store the resu

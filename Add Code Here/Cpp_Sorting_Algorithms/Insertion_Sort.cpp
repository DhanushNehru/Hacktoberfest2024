#include <iostream>
#include <cstdlib> // for malloc and free
using namespace std;

void printArr(int arr[], int n) {
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arrInput(int* arr, int n) {
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = (int*)malloc(n * sizeof(int));

    if (arr == nullptr) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    arrInput(arr, n);

    // Insertion Sort algorithm
    for (int i = 1; i < n; i++) {
        int key = arr[i]; 
        int j = i - 1;
        
        // Shift elements of the sorted part to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the element at its correct position
    }

    printArr(arr, n);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

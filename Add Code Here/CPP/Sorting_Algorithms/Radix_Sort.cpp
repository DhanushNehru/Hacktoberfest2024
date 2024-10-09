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

// A utility function to get the maximum value in arr[]
int getMax(int* arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// A function to do counting sort of arr[] according to the digit represented by exp
void countingSort(int* arr, int n, int exp) {
    int* output = (int*)malloc(n * sizeof(int));  // output array
    int count[10] = {0};  // initialize count array as 0

    // Storing count 
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    // Copy the output array to arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
    free(output);
}

void radixSort(int* arr, int n) {
    int max = getMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
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
    // Radix Sort algorithm
    radixSort(arr, n);
    printArr(arr, n);
    free(arr);

    return 0;
}

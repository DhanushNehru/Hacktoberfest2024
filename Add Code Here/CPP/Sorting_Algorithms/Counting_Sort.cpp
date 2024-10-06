#include <iostream>
#include <cstdlib>
#include <cstring> 
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

void countingSort(int* arr, int n) {
    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    // Create a count array to store the frequency of elements
    int* count = (int*)malloc((max + 1) * sizeof(int));
    memset(count, 0, (max + 1) * sizeof(int)); // Initialize count array as 0
    // Store the count of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    // Overwrite arr[] with sorted elements
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }

    free(count);  
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate memory for the array using malloc
    int* arr = (int*)malloc(n * sizeof(int));

    if (arr == nullptr) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }
    arrInput(arr, n);
    // Counting Sort algorithm
    countingSort(arr, n);
    printArr(arr, n);
    free(arr);

    return 0;
}

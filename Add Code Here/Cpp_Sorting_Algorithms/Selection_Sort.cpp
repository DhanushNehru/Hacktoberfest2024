#include <iostream>
#include <cstdlib> 
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
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        //minimum element 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swaping the found minimum element with the first unsorted element
        if (minIndex != i) {
            int tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }

    printArr(arr, n);
    free(arr);

    return 0;
}

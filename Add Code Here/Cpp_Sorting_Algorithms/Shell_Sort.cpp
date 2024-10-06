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

// Shell Sort implementation
void shellSort(int* arr, int n) {
    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
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
    shellSort(arr, n);
    printArr(arr, n);
    free(arr);

    return 0;
}

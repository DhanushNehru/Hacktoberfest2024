#include <iostream>
#include <vector>
#include <cstdlib> 
#include <algorithm> 
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
// Bucket Sort implementation
void bucketSort(int* arr, int n) {
    // Find the maximum element to normalize the values
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    vector<vector<int>> buckets(n);
    // Normalize the array values and distribute into buckets
    for (int i = 0; i < n; i++) {
        int index = (arr[i] * n) / (maxVal + 1); // Normalized to [0, n-1]
        buckets[index].push_back(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (size_t j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
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
    // Bucket Sort algorithm
    bucketSort(arr, n);
    printArr(arr, n);
    free(arr);

    return 0;
}

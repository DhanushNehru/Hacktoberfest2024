#include <iostream>
using namespace std;

// Function to perform counting sort
void countSort(int arr[], int n) {
    int output[n]; // output array
    int max = arr[0];
    for (int i = 1; i < n; i++) 
        if (arr[i] > max)
            max = arr[i];

    int count[max + 1] = {0}; // Initialize count array with all zeros

    // Store count of each element
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // Store cumulative count
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];

    // Find the index of each element of the original array in count array, and place the elements in output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements into original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call countSort function
    countSort(arr, n);

    // Output sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

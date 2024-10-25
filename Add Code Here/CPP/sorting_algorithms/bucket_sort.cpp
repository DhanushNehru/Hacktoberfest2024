#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform bucket sort
void bucketSort(float arr[], int n) {
    vector<float> buckets[n];

    // Put array elements in different buckets
    for (int i = 0; i < n; i++) {
        int bucketIdx = n * arr[i];
        buckets[bucketIdx].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; i++)
        sort(buckets[i].begin(), buckets[i].end());

    // Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < buckets[i].size(); j++)
            arr[index++] = buckets[i][j];
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call bucketSort function
    bucketSort(arr, n);

    // Output sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

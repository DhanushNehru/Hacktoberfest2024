#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int left, int right, int target) {
    // Continue searching while the left index is less than or equal to the right index
    while (left <= right) {
        // Find the middle element of the current search range
        int mid = left + (right - left) / 2; // avoids overflow compared to (left + right) / 2

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid; // Target found at index mid
        }
        // If the target is greater than the middle element, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is less than the middle element, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Target is not in the array
    return -1;
}

int main() {
    int n;

    // Get the number of elements in the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";

    // Get the sorted array elements from the user
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    // Get the target element to search for
    cout << "Enter the element to search for: ";
    cin >> target;

    // Call the binarySearch function
    int result = binarySearch(arr, 0, n - 1, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}



// Time Complexity:
// O(logn)-In each iteration, the search space is halved. This continues until the search space is empty or the target is found, leading to a maximum of 
// log n to the base 2 comparsions.

// Space Complexity: 
// O(1) — Binary search uses a constant amount of extra space because it only requires variables to store indices (left, right, mid). 
// It does not use any additional data structures or recursive calls, so the space complexity is constant.





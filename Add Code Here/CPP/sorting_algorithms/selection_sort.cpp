#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted part
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        // Swap the found minimum element with the first element
        swap(arr[minIdx], arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call selectionSort function
    selectionSort(arr, n);

    // Output sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

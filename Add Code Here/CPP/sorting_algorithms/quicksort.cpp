#include <iostream>
using namespace std;
class QuickSort {
public:
void sortWithPivot(int arr[], int size, char pivotType) {
quickSort(arr, 0, size - 1, pivotType);
}
private:
void quickSort(int arr[], int low, int high, char pivotType) {
if (low < high) {
int pi = partition(arr, low, high, pivotType);
quickSort(arr, low, pi - 1, pivotType);
quickSort(arr, pi + 1, high, pivotType);
}
}
int partition(int arr[], int low, int high, char pivotType) {
int pivot;
if (pivotType == 's') { // 's' for start
pivot = arr[low];
} else if (pivotType == 'm') { // 'm' for middle
pivot = arr[low + (high - low) / 2];
swap(arr[low + (high - low) / 2], arr[high]);
} else { // 'e' for end
pivot = arr[high];
}
int i = low - 1;
for (int j = low; j < high; j++) {
if (arr[j] < pivot) {
i++;
swap(arr[i], arr[j]);
}
}
swap(arr[i + 1], arr[high]); // Place pivot at correct position
return i + 1;
}
};
int main() {
int size;
cout << "Enter the size of the array: ";
cin >> size;
int* arr = new int[size];
cout << "Enter the elements of the array: ";
for (int i = 0; i < size; i++) {
cin >> arr[i];
}
QuickSort qs;
bool continueSorting = true;
while (continueSorting) {
char pivotChoice;
cout << "Choose pivot type (s for start, m for middle, e for end): ";
cin >> pivotChoice;
// Perform the sort with the chosen pivot type
qs.sortWithPivot(arr, size, pivotChoice);
// Display sorted array
cout << "Sorted array with ";
if (pivotChoice == 's') {
cout << "start";
} else if (pivotChoice == 'm') {
cout << "middle";
} else {
cout << "end";
}
cout << " pivot: ";
for (int i = 0; i < size; i++) cout << arr[i] << " ";
cout << endl;
// Ask user if they want to continue
char choice;
cout << "Do you want to sort with another pivot type? (y/n): ";
cin >> choice;
continueSorting = (choice == 'y' || choice == 'Y');
}
delete[] arr;
return 0;
}

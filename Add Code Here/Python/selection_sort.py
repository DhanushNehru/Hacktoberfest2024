def selection_sort(arr):
    # Traverse through all array elements
    for i in range(len(arr)):
        # Find the minimum element in remaining unsorted array
        min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        
        # Swap the found minimum element with the first element
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Main function to test the selection sort
if __name__ == "__main__":
    array = [64, 25, 12, 22, 11]  # Sample array
    print("Original array:", array)

    selection_sort(array)  # Call the selection sort function

    print("Sorted array:", array)  # Print sorted array

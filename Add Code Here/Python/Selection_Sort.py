def arr_input():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    return arr

def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]  # Swaping the elements

def main():
    arr = arr_input()
    
    print("Array before sorting:", arr)
    
    selection_sort(arr)
    
    print("Array after sorting:", arr)

if __name__ == "__main__":
    main()

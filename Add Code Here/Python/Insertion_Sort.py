def arr_input():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    return arr

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
            
        arr[j + 1] = key

def main():
    arr = arr_input()
    
    print("Array before sorting:", arr)
    
    insertion_sort(arr)
    
    print("Array after sorting:", arr)

if __name__ == "__main__":
    main()

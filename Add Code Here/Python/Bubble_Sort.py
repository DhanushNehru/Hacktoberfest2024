def arr_input():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    return arr

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

def main():
    arr = arr_input()
    
    print("Array before sorting:", arr)
    
    bubble_sort(arr)
    
    print("Array after sorting:", arr)

if __name__ == "__main__":
    main()

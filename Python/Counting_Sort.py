def arr_input():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the elements of the array (non-negative integers): ").split()))
    return arr

def counting_sort(arr):
    max_value = max(arr) if arr else 0
    count = [0] * (max_value + 1)

    for num in arr:
        count[num] += 1

    index = 0
    for i in range(len(count)):
        while count[i] > 0:
            arr[index] = i
            index += 1
            count[i] -= 1

def main():
    arr = arr_input()
    
    print("Array before sorting:", arr)
    
    counting_sort(arr)
    
    print("Array after sorting:", arr)

if __name__ == "__main__":
    main()

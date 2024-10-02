def arr_input():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    return arr

def binary_search(arr, key):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            left = mid + 1
        else:
            right = mid - 1
            
    return -1

def main():
    arr = arr_input()
    key = int(input("Enter the element to search: "))
    
    index = binary_search(arr, key)
    if index != -1:
        print(f"Element found at index: {index}")
    else:
        print("Element not found")

if __name__ == "__main__":
    main()

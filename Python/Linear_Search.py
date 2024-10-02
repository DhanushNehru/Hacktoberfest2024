def arr_input():
    n = int(input("Enter the size of the array: "))
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    return arr

def linear_search(arr, key):
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1

def main():
    arr = arr_input()
    
    key = int(input("Enter the element to search: "))
    
    index = linear_search(arr, key)
    
    if index != -1:
        print(f"Element found at index: {index}")
    else:
        print("Element not found")

if __name__ == "__main__":
    main()

from typing import List

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        # Step 1: Handle edge case for an empty matrix
        if not matrix:
            return
        
        # Step 2: Get the dimensions of the matrix
        rows, cols = len(matrix), len(matrix[0])
        
        # Step 3: Create a deep copy of the original matrix
        copy_matrix = [row[:] for row in matrix]
        
        # Step 4: Traverse the original matrix to find zeros
        for row in range(rows):
            for col in range(cols):
                if matrix[row][col] == 0:
                    # Step 5: Mark the entire row with zeros in the copied matrix
                    for k in range(cols):
                        copy_matrix[row][k] = 0
                    # Step 6: Mark the entire column with zeros in the copied matrix
                    for k in range(rows):
                        copy_matrix[k][col] = 0
        
        # Step 7: Copy the updated values back to the original matrix
        for row in range(rows):
            for col in range(cols):
                matrix[row][col] = copy_matrix[row][col]

# Test cases
def print_matrix(matrix):
    for row in matrix:
        print(row)
    print()

# Example 1
matrix1 = [[1,1,1], [1,0,1], [1,1,1]]
print("Input:")
print_matrix(matrix1)

Solution().setZeroes(matrix1)
print("Output:")
print_matrix(matrix1)

# Example 2
matrix2 = [[0,1,2,0], [3,4,5,2], [1,3,1,5]]
print("Input:")
print_matrix(matrix2)

Solution().setZeroes(matrix2)
print("Output:")
print_matrix(matrix2)

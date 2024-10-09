public class Sudoku {

    // N is the size of the 2D matrix, which is 9x9 for a standard Sudoku puzzle.
    static int N = 9;

    /* This method attempts to solve the Sudoku puzzle by assigning values
       to all unassigned locations. The grid must meet Sudoku requirements:
       - No duplication across rows, columns, and 3x3 boxes.
    */
    static boolean solveSudoku(int grid[][], int row, int col) {

        // If we reach the last cell (row 8 and col 9), the puzzle is solved.
        if (row == N - 1 && col == N)
            return true;

        // If the column index exceeds 8, move to the next row and start at column 0.
        if (col == N) {
            row++;
            col = 0;
        }

        // If the current cell already contains a number (non-zero), move to the next column.
        if (grid[row][col] != 0)
            return solveSudoku(grid, row, col + 1);

        // Try placing numbers 1 to 9 in the current cell.
        for (int num = 1; num <= 9; num++) {

            // Check if placing this number is safe according to Sudoku rules.
            if (isSafe(grid, row, col, num)) {

                // Assign the number to the current cell.
                grid[row][col] = num;

                // Recursively solve the rest of the puzzle by moving to the next cell.
                if (solveSudoku(grid, row, col + 1))
                    return true;
            }

            // If placing this number doesn't lead to a solution, reset the cell and backtrack.
            grid[row][col] = 0;
        }

        // If no number between 1 and 9 works, return false to trigger backtracking.
        return false;
    }

    /* Utility function to print the Sudoku grid after solving. */
    static void print(int[][] grid) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                System.out.print(grid[i][j] + " ");
            System.out.println();
        }
    }

    /* This method checks whether placing a number in a specific cell is safe
       based on the Sudoku rules:
       - No duplicate number in the same row, column, or 3x3 subgrid.
    */
    static boolean isSafe(int[][] grid, int row, int col, int num) {

        // Check if the number already exists in the current row.
        for (int x = 0; x <= 8; x++)
            if (grid[row][x] == num)
                return false;

        // Check if the number already exists in the current column.
        for (int x = 0; x <= 8; x++)
            if (grid[x][col] == num)
                return false;

        // Check if the number already exists in the 3x3 subgrid.
        int startRow = row - row % 3, startCol = col - col % 3;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (grid[i + startRow][j + startCol] == num)
                    return false;

        // If no conflicts are found, it's safe to place the number.
        return true;
    }

    // Driver Code to test the solution.
    public static void main(String[] args) {
        // Sample partially filled Sudoku grid (0 indicates an unassigned cell).
        int grid[][] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                         { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                         { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                         { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                         { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                         { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                         { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                         { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                         { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

        // Solve the Sudoku puzzle and print the solution.
        if (solveSudoku(grid, 0, 0))
            print(grid);
        else
            System.out.println("No Solution exists");
    }
}

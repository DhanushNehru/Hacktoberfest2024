from collections import deque

def is_goal(state):
    return state == [[1, 2, 3], [4, 5, 6], [7, 8, 0]]

def find_moves(state):
    moves = []
    zero_row, zero_col = find_zero(state)
    if zero_row > 0:
        moves.append("up")
    if zero_row < 2:
        moves.append("down")
    if zero_col > 0:
        moves.append("left")
    if zero_col < 2:
        moves.append("right")
    return moves

def find_zero(state):
    for i in range(3):
        for j in range(3):
            if state[i][j] == 0:
                return i, j

def perform_move(state, move):
    new_state = [row[:] for row in state]
    zero_row, zero_col = find_zero(state)
    if move == "up":
        new_row, new_col = zero_row - 1, zero_col
    elif move == "down":
        new_row, new_col = zero_row + 1, zero_col
    elif move == "left":
        new_row, new_col = zero_row, zero_col - 1
    elif move == "right":
        new_row, new_col = zero_row, zero_col + 1
    new_state[zero_row][zero_col], new_state[new_row][new_col] = new_state[new_row][new_col], new_state[zero_row][zero_col]
    return new_state

def solve_puzzle(initial_state):
    if is_goal(initial_state):
        return [initial_state]
    
    visited = set()
    queue = deque([(initial_state, [])])

    while queue:
        state, path = queue.popleft()
        visited.add(tuple(map(tuple, state)))

        for move in find_moves(state):
            new_state = perform_move(state, move)
            if tuple(map(tuple, new_state)) not in visited:
                new_path = path + [new_state]
                if is_goal(new_state):
                    return new_path
                queue.append((new_state, new_path))

    return None

# Example usage:
initial_state = [
    [1, 2, 3],
    [4, 5, 0],
    [7, 8, 6]
]

solution = solve_puzzle(initial_state)
if solution:
    print("Solution found in", len(solution)-1, "moves:")
    for i, state in enumerate(solution):
        print("\nMove", i)
        for row in state:
            print(row)
else:
    print("No solution found.")

📘 Short Notes on Backtracking
🔹 Definition

Backtracking is a recursive algorithmic technique used for solving problems incrementally by building a solution step by step, and undoing (backtracking) when a step doesn’t lead to a valid solution.

🔹 Core Idea (Framework)

Loop through choices at the current state.

Choose one option.

Recurse to explore further.

Backtrack (undo choice) to try other options.

🔹 Pseudocode Pattern
function backtrack(state):
    if state is a solution:
        record/print solution
        return

    for choice in available choices:
        make choice
        backtrack(next 
        undo choistate)ce (backtrack)

🔹 When to Use Backtracking

Problems involving all possible solutions (not just one).

Problems with constraints that need to be checked while building solutions.

Common in: combinatorics, puzzles, graph problems, constraint satisfaction.

🔹 Common Problems Solved by Backtracking

Generating subsets, permutations, combinations.

Constraint problems: N-Queens, Sudoku, Rat in a Maze.

Graph problems: Hamiltonian path, coloring problems.

Word/path search problems: Word Search, Knight’s Tour.

🔹 Time Complexity Insight

Worst-case: Exponential (O(kⁿ)) because it explores many possibilities.

Backtracking prunes invalid paths early, making it efficient for practical problems.

✅ 10 Important Backtracking Questions

Subsets  Generate all subsets of a set.

Permutations  Generate all permutations of an array/string.

Combination Sum Find all combinations of numbers adding to a target.

N-Queens Problem  Place N queens on an N X N chessboard so no two attack each other.

Rat in a Maze  Find all paths from source to destination in a grid.

Sudoku Solver Solve a given Sudoku puzzle using recursion.

Word Search  Check if a word exists in a grid (matrix of letters).

Palindrome Partitioning  Partition string into palindromic substrings.

Knights Tour Problem  Visit all cells of a chessboard using knights moves.

Graph Coloring Problem Assign colors to vertices such that no adjacent vertices have the same color.
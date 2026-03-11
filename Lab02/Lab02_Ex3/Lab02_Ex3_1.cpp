void copyArray(const vector<int>& source, vector<int>& dest) {
    // Loop initialization: 1 step (assignment i = 0)
    for (int i = 0; i < source.size(); i++) {
        // Comparison: 1 step (i < source.size())
        // 3 step (2 array access + 1 assignment)
        dest[i] = source[i];
        // Increment: 1 step (i++)
    }
    // 1 step final failed comparison (loop exit)
}
// Let n = source.size()
// Total operations:
// 1 (init) + n * (1 comp + 3 assignment + 1 inc) + 1 (exit)
// = 1 + 5n + 1
// = 5n + 2 operations
// Therefore, O(n) complexity

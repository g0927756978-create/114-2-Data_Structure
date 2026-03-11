int findMax(const vector<int>& arr) {
    // Counts for initialization: 2 step (array access + assignment)
    int max = arr[0];
    // Loop initialization: 1 step (assignment i = 1)
    for (int i = 1; i < arr.size(); i++) {
        // Comparison: 1 step (i < arr.size())  
        // 2 step (array access + comparison)
        if (arr[i] > max) {
            // 2 step (array access + assignment)
            max = arr[i];
        }
        // Increment: 1 step (i++)
    }
    // 1 step final failed comparison (loop exit)    
    // Counts for return: 1 step (return)
    return max;
}
// Let n = arr.size()
// Total operations (Worst-case):
// 3 (initial) + 6 * (n - 1) (loop operations) + 1 (loop exit) + 1 (return)
// = 3 + 6n - 6 + 2
// = 6n - 1 operations
// Therefore, O(n) complexity

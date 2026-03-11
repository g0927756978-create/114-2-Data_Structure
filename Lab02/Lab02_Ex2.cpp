void printPairs(const vector<int>& arr) {
    // Outer loop initialization: 1 step (assignment i = 0)
    for (int i = 0; i < arr.size(); i++) {
        // Outer comparison: 1 step (i < arr.size())
        // Inner loop initialization: 2 step (addition i + 1 + assignment to j)
        for (int j = i + 1; j < arr.size(); j++) {
            // Inner comparison: 1 step (j < arr.size())
            // 3 step (2 array access + 1 print output)
            cout << arr[i] << "," << arr[j] << endl;            
            // Inner increment: 1 step (j++)
        }
        // 1 step inner final failed comparison (loop exit)        
        // Outer increment: 1 step (i++)
    }
    // 1 step outer final failed comparison (loop exit)
}
// Let n = arr.size()
// Total operations:
// Outer loop overhead: 1 (init) + n (comparisons) + n (increments) + 1 (exit) = 2n + 2
// Inner loop overhead (runs n times): n * (2 (init) + 1 (exit)) = 3n
// Inner loop body: runs (n-1) + (n-2) + ... + 1 + 0 = n(n-1)/2 times. 
// Each inner iteration takes 5 steps (1 comparison + 3 print + 1 increment). 
// Inner body total = 5 * (n^2 - n) / 2 = 2.5n^2 - 2.5n
// Total = (2.5n^2 - 2.5n) + 3n + (2n + 2) = 2.5n^2 + 2.5n + 2 operations
// Therefore, O(n^2) complexity

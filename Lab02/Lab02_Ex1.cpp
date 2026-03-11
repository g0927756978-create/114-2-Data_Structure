int findMax(const vector<int>& arr) {
// TODO: Add counts for initialization
// 1 step (array access)
int max = arr[0];
// TODO: Add counts for loop operations
// 1 step (assignment)
for (int i = 1; i < arr.size(); i++) {
// TODO: Add counts for comparison and assignment
// 1 step(Comparison)
if (arr[i] > max) {
max = arr[i];
}
}
// TODO: Add counts for return
// 2 step (array access + assignment)
return max;
}

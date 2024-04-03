#include <iostream>
#include <vector>

using namespace std;

// Function to recursively search for a target element in a vector
bool findElement(const vector<int>& numbers, int target, int index) {
    // Base case: If the current index is out of bounds, return false
    if (index >= numbers.size()) {
        return false;
    }
    
    // Base case: If the target is found at the current index, return true
    if (numbers[index] == target) {
        return true;
    }
    
    // Recursive case: Call the function recursively with the next index
    return findElement(numbers, target, index + 1);
}

int main() {
    // Create a vector with some integer values
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Define the target value to search for
    int target = 3;
    
    // Call the findElement function and print whether the target was found
    cout << "Is the target found? " << boolalpha << findElement(numbers, target, 0) << endl;
    
    return 0;
}


 #include <iostream>  // Including necessary header file for input/output operations (`iostream`)
#include <vector>    // Including necessary header file for vector containers (`vector`)

using namespace std;  // Bringing the entire `std` namespace into the current scope

void reverseVectorHelper(vector<int>& numbers, int start, int end) {
    // Base case: If start index crosses or equals end index, return
    if (start >= end) {
        return;  // Returning without further recursion
    }

    // Swap elements at start and end indices
    swap(numbers[start], numbers[end]);  // Swapping elements at the `start` and `end` indices of the vector

    // Recursively call reverseVector with updated start and end indices
    reverseVectorHelper(numbers, start + 1, end - 1);  // Recursively calling the function with updated indices
}

void reverseVector(vector<int>& numbers) {
    // Call the helper function with start and end indices
    reverseVectorHelper(numbers, 0, numbers.size() - 1);  // Initiating the recursive process of reversing the vector
}

int main() {
    // Create a vector with some integer values
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Print the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";  // Printing each element of the original vector
    }
    cout << endl;

    // Call the reverseVector function to reverse the vector
    reverseVector(numbers);  // Reversing the vector in-place using recursion

    // Print the reversed vector
    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";  // Printing each element of the reversed vector
    }
    cout << endl;

    return 0;  // Indicating successful execution to the operating system
}


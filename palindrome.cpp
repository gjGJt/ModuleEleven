#include <iostream>
#include <vector>

using namespace std;

// Function to check if a vector of characters is a palindrome recursively
bool isVectorPalindrome(const vector<char>& chars) {
    // Base case: If the vector has 0 or 1 element, it's a palindrome
    if (chars.size() <= 1) {
        return true; // Base case: A single element or empty vector is always a palindrome
    }

    // Check if the first and last characters match
    if (chars.front() != chars.back()) {
        return false; // Not a palindrome if first and last characters don't match
    }

    // Recursive case: Call the function with a smaller sub-vector excluding the first and last characters
    // Create a sub-vector by excluding the first and last characters of the original vector
    vector<char> subVector(chars.begin() + 1, chars.end() - 1);
    
    // Recursively call isVectorPalindrome with the sub-vector
    return isVectorPalindrome(subVector); // Return the result of the recursive call
}

int main() {
    // Create a vector with some characters
    vector<char> characters = {'r', 'a', 'd', 'a', 'r'};
    
    // Print the original vector
    cout << "Original vector: ";
    for (char c : characters) {
        cout << c << " "; // Printing each character of the original vector
    }
    cout << endl;
    
    // Check if the vector is a palindrome and print the result
    cout << "Is the vector a palindrome? " << boolalpha << isVectorPalindrome(characters) << endl;

    return 0;
}


/*Logic:Base Case:
If the vector has 0 or 1 element, it's a palindrome by default.
Recursive Case:
Check if the first and last characters match.
If they do, create a sub-vector without the first and last characters and recurse.
If not, it's not a palindrome.
Challenges/Difficulties/Blockers:

Understanding Recursion:
Recursion can be challenging to grasp initially, especially for complex problems.
Ensuring proper base case and recursive case implementation is crucial.
Debugging Recursive Functions:
Debugging recursive functions can be tricky due to multiple function calls.
It requires careful examination of base cases and recursive calls.
Efficiency:
Recursive solutions may not always be the most efficient.
Large vectors can lead to stack overflow due to excessive function calls.
Other Potential Solutions:

Iterative Approach:
Use a loop to compare characters from both ends of the vector.
Move inward until reaching the middle, checking for equality at each step.
Reverse and Compare:
Reverse the vector and compare it with the original.
If they match, it's a palindrome.
Using STL Algorithms:
Utilize STL algorithms like std::equal or std::reverse for a concise solution.*/


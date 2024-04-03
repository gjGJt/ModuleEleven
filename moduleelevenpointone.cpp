#include <iostream>
// gaining access to the std::vector standard template class
#include <vector>

using namespace std;

int vectorSum(const vector<int>& numbers) {
    // if vector is empty, return 0
    if (numbers.empty()) {
        return 0;
      // Alternate condition 
    } else {
        // this is a recursive case that returns the sum of the first element
        // plus the sum of the rest of the elements
        return numbers.front() + vectorSum(vector<int>(numbers.begin() + 1, numbers.end()));
    }
}

int main() {
    // vector with int values
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Calling vectorSum function and then printing the result
    cout << "Sum of vector elements: " << vectorSum(numbers) << endl;

    return 0;
}


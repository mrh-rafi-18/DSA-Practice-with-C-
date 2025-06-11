#include <iostream>
#include <vector>  // Required for using std::vector
using namespace std;

int main() {
    // 1. Declaring a vector
    vector<int> vec;
    vector<int> vec3;  // Empty vector of integers

    // 2. Adding elements to the vector
    vec.push_back(10);  // Adds 10 to the end of the vector
    vec.push_back(20);
    vec.push_back(20);

    vec3.push_back(10);  // Adds 10 to the end of the vector
    vec3.push_back(20);
    vec3.push_back(20);


    for(auto i : vec, auto j : vec3)
    {

        cout<<j;
    }


    cout << "After push_back operations: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 3. Accessing elements
    cout << "First element (vec[0]): " << vec[0] << endl;  // Index-based access
    cout << "First element (vec.at(0)): " << vec.at(0) << endl;  // Safer access

    // 4. Inserting elements
    vec.insert(vec.begin() + 2, 15);  // Insert 15 at the second position
    cout << "After insertion at position 1: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 5. Removing elements
    vec.erase(vec.begin() + 2);  // Remove the third element
    cout << "After erasing element at position 2: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 6. Size and capacity
    cout << "Size of vector: " << vec.size() << endl;
    cout << "Capacity of vector: " << vec.capacity() << endl;


    // 7. Resizing the vector
    vec.resize(5, 100);  // Resize to 5 elements, fill new elements with 100
    cout << "After resizing to 5 elements: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 8. Iterating over elements
    cout << "Using an iterator to traverse: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 9. Clearing the vector
    vec.clear();  // Removes all elements
    cout << "After clearing, size of vector: " << vec.size() << endl;

    // 10. Checking if the vector is empty
    if (vec.empty()) {
        cout << "The vector is empty now." << endl;
    }

    // 11. Assigning values
    vec.assign(3, 50);  // Fills the vector with three elements of value 50
    cout << "After assign operation: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 12. Swapping two vectors
    vector<int> vec2 = {1, 2, 3};
    vec.swap(vec2);  // Swap contents with vec2
    cout << "After swapping with vec2: vec = ";
    for (int val : vec) cout << val << " ";
    cout << ", vec2 = ";
    for (int val : vec2) cout << val << " ";
    cout << endl;

    // 13. Accessing front and back
    cout << "First element (front): " << vec.front() << endl;
    cout << "Last element (back): " << vec.back() << endl;

    return 0;
}


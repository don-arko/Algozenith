#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Declaration and Initialization
    // Time Complexity: O(n log n) for initialization (assuming n elements and balanced tree construction)
    set<int> mySet = {5, 2, 8, 1, 9};

    // Insert Elements
    // Time Complexity: O(log n) for each insert (assuming balanced tree)
    mySet.insert(6);
    mySet.insert(3);

    // Access Elements
    // Note: Sets do not provide direct access by index, as they are ordered collections.

    // Remove Elements
    // Time Complexity: O(log n) for erase (assuming balanced tree)
    mySet.erase(2);

    // Size
    // Time Complexity: O(1) for size
    int size = mySet.size();

    // Iteration
    // Time Complexity: O(n) for iterating through the set (where n is the number of elements)
    cout << "Set Elements: ";
    for (int element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    // Clear
    // Time Complexity: O(n) for clear (assuming elements need to be destroyed)
    mySet.clear();

    // Display the final set
    cout << "Final Set Elements: ";
    for (int element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}



#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    // Example of multiset
    // Declaration and Initialization
    // Time Complexity: O(n log n) for initialization (where n is the number of elements in the initializer list)
    multiset<int> agesSet = {25, 30, 22, 25, 30};

    // Inserting an element
    // Time Complexity: O(log n) for insert (assuming balanced tree)
    agesSet.insert(25);

    // Count occurrences
    // Time Complexity: O(log n) for count (assuming balanced tree)
    int count = agesSet.count(25);
    cout << "Occurrences of age 25: " << count << endl;

    // Displaying the multiset
    // Time Complexity: O(n) for iterating through the multiset (where n is the number of elements)
    cout << "Ages Set: ";
    for (int age : agesSet)
    {
        cout << age << " ";
    }
    cout << endl;

    // Example of multimap
    // Declaration and Initialization
    // Time Complexity: O(n log n) for initialization (where n is the number of elements in the initializer list)
    multimap<string, int> agesMap = {{"Alice", 25}, {"Bob", 30}, {"Alice", 22}, {"Bob", 25}};

    // Inserting a key-value pair
    // Time Complexity: O(log n) for insert (assuming balanced tree)
    agesMap.insert(make_pair("Alice", 28));

    // Displaying the multimap
    // Time Complexity: O(n) for iterating through the multimap (where n is the number of elements)
    cout << "Ages Map: ";
    for (auto it = agesMap.begin(); it != agesMap.end(); ++it)
    {
        cout << it->first << ": " << it->second << " | ";
    }
    cout << endl;

    return 0;
}


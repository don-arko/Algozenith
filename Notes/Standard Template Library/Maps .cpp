#include <iostream>
#include <map>

using namespace std;

int main() {
    // Declaration and Initialization
    // Time Complexity: O(n log n) for initialization (assuming n elements and balanced tree construction)
    map<string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 22}};

    // Inserting an element
    // Time Complexity: O(log n) for insert (assuming balanced tree)
    ages["David"] = 28;

    // Accessing elements
    // Time Complexity: O(log n) for accessing elements by key (assuming balanced tree)
    cout << "Bob's age: " << ages["Bob"] << endl;

    // Iterating through elements
    // Time Complexity: O(n) for iterating through the map (where n is the number of elements)
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // Finding elements
    // Time Complexity: O(log n) for find (assuming balanced tree)
    auto itFind = ages.find("Charlie");
    if (itFind != ages.end()) {
        cout << "Charlie's age is " << itFind->second << endl;
    }

    return 0;
}


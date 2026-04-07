/*
Important Modifiers of Containers Vectors

                    Time Complexity
                  
1. assign ()       :            O(n)              ; where n is the number of elements assigned .
2. push_back()     :            O(1) Amortized    ; O(1) on avg though individual insertion might take O(n) in the worst case when resizing the vector
3. pop_back()      :            O(1) 
4. insert()        :            O(n)              ; n is the number of elements erased. Erasing in the middle or at the beginning also requires shifting elements
5. swap()          :            O(1)              ; Swapping involves changing internal pointers , not actual element movement.
6. clear()         :            O(n)              ; n is the numbner of elements in the vector . This functino removes all the elements and may involve deallocating memory
7. emplace()       :            O(n)              ; n is the number of elements after the insertion point. Elements after the insertion point may need to be shifted.
8. emplace_back()  :            O(1) Amortized    ; O(1) on avg though individual insertion might take O(n) in the worst case when resizing the vector



*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declaration and Initialization
    // Time Complexity: O(n) where n is the number of elements in the initializer list
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Insert Elements
    // Time Complexity: O(1) for push_back, O(n) for insert (since it may require moving elements)
    myVector.push_back(6);
    myVector.insert(myVector.begin() + 2, 10);

    // Access Elements
    // Time Complexity: O(1) for accessing elements by index
    int firstElement = myVector[0];
    int lastElement = myVector.back();

    // Remove Elements
    // Time Complexity: O(1) for pop_back, O(n) for erase (since it may require moving elements)
    myVector.pop_back();
    myVector.erase(myVector.begin() + 1);

    // Size and Capacity
    // Time Complexity: O(1) for size, O(1) for capacity
    int size = myVector.size();
    int capacity = myVector.capacity();

    // Iteration
    // Time Complexity: O(n) for iterating through the vector
    cout << "Vector Elements: ";
    for (int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Clear
    // Time Complexity: O(n) for clear (since it may require destroying each element)
    myVector.clear();

    // Resize
    // Time Complexity: O(n) for resize (if the new size is greater than the current size)
    myVector.resize(10);

    // Swap
    // Time Complexity: O(1) for swap (swap only involves swapping internal pointers)
    vector<int> anotherVector = {7, 8, 9};
    myVector.swap(anotherVector);

    // Display the final vector
    cout << "Final Vector Elements: ";
    for (int element : myVector)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}

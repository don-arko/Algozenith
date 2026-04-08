/*
Important Modifiers of Containers Vectors

                          Time Complexity
                  
1. empty ()       :            O(1)              ; Indicates whether teh priority queue is empty or not 
2. size()         :            O(1)              ; Proves the count of elements present in the priority queue.
3. top()          :            O(1)              ; Retrieves a reference to the highest pririty element in the queue
4. push()         :            O(logn)           ; Appends the element g to the end of the priority queue and adjusts the heap to maintain its max property
5. pop()          :            O(logn)           ; Removes the foremost element form the priority queue and adjusts the heap
6. emplace()      :            O(logn)           ; Inserts a new element into the priority queue , maintaining the order based on priority and adjusting the heap







*/


#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    // Declaration and Initialization
    // Time Complexity: O(n log n) for initialization (where n is the number of elements)
    vector<int> initList = {3, 1, 4, 1, 5, 9, 2, 6};
    priority_queue<int> taskPriorityQueue(initList.begin(), initList.end());

    // Adding a task
    // Time Complexity: O(log n) for push (assuming a binary heap)
    taskPriorityQueue.push(7);

    // Accessing the highest-priority task
    // Time Complexity: O(1) for top (since the highest-priority element is always at the top)
    int highestPriority = taskPriorityQueue.top();
    cout << "Highest Priority Task: " << highestPriority << endl;

    // Processing the highest-priority task
    // Time Complexity: O(log n) for pop (assuming a binary heap)
    taskPriorityQueue.pop();

    // Displaying the remaining tasks
    cout << "Remaining Tasks: ";
    
    // Looping through the priority queue
    while (!taskPriorityQueue.empty())
    {
        // Accessing the highest-priority element
        // Time Complexity: O(1) for top (since the highest-priority element is always at the top)
        cout << taskPriorityQueue.top() << " ";
        
        // Removing the highest-priority element
        // Time Complexity: O(log n) for pop (assuming a binary heap)
        taskPriorityQueue.pop();
    }

    cout << endl;

    return 0;
}



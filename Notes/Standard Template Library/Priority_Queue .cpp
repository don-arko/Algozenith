


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



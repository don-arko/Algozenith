/*

*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Declaration and Initialization
    // Time Complexity: O(n) for initialization (where n is the number of elements in the initializer list)
    queue<int> customerQueue({1, 2, 3, 4, 5});

    // Adding a customer to the queue
    // Time Complexity: O(1) for push
    customerQueue.push(6);

    // Serving customers
    cout << "Customers being served: ";

    // Looping through the queue
    while (!customerQueue.empty()) {
        // Accessing the front element
        // Time Complexity: O(1) for front
        cout << customerQueue.front() << " ";

        // Removing the front element
        // Time Complexity: O(1) for pop
        customerQueue.pop();
    }
    cout << endl;

    return 0;
}


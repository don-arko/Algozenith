/*
                      Important Modifiers of Containers Queue 

                      
                          
1. empty()     :  returns true if the queue is empty or else returns false
2. size()      :  returns the number of ements in the queue
3. swap()      :  exchange the contents of two queues bu tht queues must be of the same data type, although sizez may differ. 
4. emplace()   :  Insert a new element into the queue container, the new element is added to the end of the queue.
5. front()     :  returns a reference to the first element of the queue
6. back()      :  returns a reference to the last element of the queue.
7. push(g)     :  adds the element 'g' at the end of the queue.
8. pop()       :  deletes the first element of the queue.


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


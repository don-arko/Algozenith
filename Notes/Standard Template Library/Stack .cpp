/*
                      Important Modifiers of Containers Stack 

                      Time Complexity
                          
1. empty()        :        O(1)   ; It checks if the stack has 0 elements
2. size()         :        O(1)   ; It returns the number of elements in the stack
3. top()          :        O(1)   ; It returns a reference to the topmost element without removing it
4. push(g)        :        O(1)   ; It adds te element 'g' at the top of the stack
5. pop()          :        O(1)   ; It deletes the most recently entered element {the top element} from the stack

*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Declaration and Initialization
    // Time Complexity: O(1) for initialization
    stack<int> myStack;

    // Pushing elements onto the stack
    // Time Complexity: O(1) for push
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Displaying the top element
    // Time Complexity: O(1) for top
    cout << "Top element: " << myStack.top() << endl;

    // Popping the top element
    // Time Complexity: O(1) for pop
    myStack.pop();

    // Checking if the stack is empty
    // Time Complexity: O(1) for empty
    if (!myStack.empty()) {
        // Time Complexity: O(1) for size
        cout << "Size of stack: " << myStack.size() << endl;
    }

    return 0;
}


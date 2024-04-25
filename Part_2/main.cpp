#include <iostream>
#include "./Linked List/Node.cpp"
#include "./Linked List/SingleList.cpp"
#include "./Linked List/DoubleList.cpp"
#include "./Linked List/CircularList.cpp"
#include "./Stack/stackArrayBased.cpp"
#include "./Stack/stackLinkedListBased.cpp"

using namespace std;

int main() {
    //================================================================
    //==========================STACK LINKEDLIST BASED================
    cout << "\n=============[LINKEDLIST BASED STACK TEST]==============\n";

    // Creating a stack using linked list implementation
    stackLinked<int> stackLinkedInstance;

    // Test: Pop from an empty stack
    stackLinkedInstance.Pop();
    cout << "Expected result: Stack underflow\n";

    // Test: Push elements onto the stack
    stackLinkedInstance.push(5);
    stackLinkedInstance.push(6);
    stackLinkedInstance.push(55);
    stackLinkedInstance.push(25);

    // Test: Print the stack
    stackLinkedInstance.print();
    cout << "Expected result: 25 55 6 5\n";

    // Test: Get the number of elements in the stack
    cout << "Number of elements in the stack: " << stackLinkedInstance.stackSize() << endl;
    cout << "Expected result: 4\n";

    // Test: Pop an element from the stack
    stackLinkedInstance.Pop();

    // Test: Push another element onto the stack
    stackLinkedInstance.push(65);

    // Test: Print the updated stack
    stackLinkedInstance.print();
    cout << "Expected result: 65 55 6 5\n";

    // Test: Get the top element of the stack
    int value;
    stackLinkedInstance.getTop(value);
    cout << "Top element of the stack: " << value << endl;
    cout << "Expected result: 65\n";

    // Test: Clear the stack
    stackLinkedInstance.clear();
    cout << "Stack cleared\n";

    //================================================================
    //========================ARRAY BASED STACK========================
    cout << "\n=============[ARRAY BASED STACK TEST]==============\n";

    // Creating a stack using array implementation
    stackArray<int> s;

    // Test: Pop from an empty stack
    s.Pop();
    cout << "Expected result: Stack underflow\n";

    // Test: Push elements onto the stack
    s.push(5);
    s.push(6);
    s.push(55);
    s.push(25);

    // Test: Print the stack
    s.print();
    cout << "Expected result: 25 55 6 5\n";

    // Test: Get the number of elements in the stack
    cout << "Number of elements in the stack: " << s.stackSize() << endl;
    cout << "Expected result: 4\n";

    // Test: Pop an element from the stack
    s.Pop();

    // Test: Push another element onto the stack
    s.push(65);

    // Test: Print the updated stack
    s.print();
    cout << "Expected result: 65 55 6 5\n";

    // Test: Get the top element of the stack
    s.getTop(value);
    cout << "Top element of the stack: " << value << endl;
    cout << "Expected result: 65\n";

    // Test: Clear the stack
    s.clear();
    cout << "Stack cleared\n";

    //================================================================
    //========================SINGLE LINKED LIST======================
    std::cout << "\n=============[SINGLE LINKED LIST TEST]==============\n";

    SingleList<int> list;

    //  === 1. Insert at Head (Multiple Elements) === 
    std::cout << "\n=== [ Test: Insert at Head (Multiple Elements) ] ===\n ";
    list.insertAtHead(5);
    list.insertAtHead(9);
    list.insertAtHead(6);

    // Test: Print the list
    list.print();
    std::cout << "Expected result: 6 9 5\n";

    //  === 2. Remove at Head === 
    std::cout << "\n=== [ Test: Remove at Head ] ===\n ";
    list.removeAtHead();

    // Test: Print the updated list
    list.print();
    std::cout << "Expected result: 9 5\n";

    //  === 3. Check if the list is empty === 
    std::cout << "\n=== [ Test: Check if the list is empty ] ===\n ";
    std::cout << "Is list empty? " << list.isEmpty() << std::endl;
    std::cout << "Expected result: 0\n";

    //  === 4. Check the size of the list === 
    std::cout << "\n=== [ Test: Check the size of the list ] ===\n ";
    std::cout << "Size of the list: " << list.linkedListSize() << std::endl;
    std::cout << "Expected result: 2\n";

    //  === 5. Insert at Tail (Multiple Elements) === 
    std::cout << "\n=== [ Test: Insert at Tail (Multiple Elements) ] ===\n ";
    list.insertAtTail(7);
    list.insertAtTail(8);

    // Test: Print the list
    list.print();
    std::cout << "Expected result: 9 5 7 8\n";

    //  === 6. Insert at Index === 
    std::cout << "\n=== [ Test: Insert at Index ] ===\n ";
    list.insertAt(3, 1); // Insert at index 1 (between 9 and 5)

    // Test: Print the list
    list.print();
    std::cout << "Expected result: 9 3 5 7 8\n";

    //  === 7. Remove at Index === 
    std::cout << "\n=== [ Test: Remove at Index ] ===\n ";
    list.removeAt(3); // Remove element at index 3 (7)

    // Test: Print the list
    list.print();
    std::cout << "Expected result: 9 3 5 7\n";

    //  === 8. Retrieve at Index === 
    std::cout << "\n=== [ Test: Retrieve at Index ] ===\n ";
    int retrievedValue = list.retrieveAt(1);
    std::cout << "Value retrieved at index 1: " << retrievedValue << std::endl;
    std::cout << "Expected result: 3\n";

    //  === 9. Replace at Index === 
    std::cout << "\n=== [ Test: Replace at Index ] ===\n ";
    list.replaceAt(40, 2); // Replace element at index 2 (5) with 40

    // Test: Print the list
    list.print();
    std::cout << "Expected result: 9 3 40 7\n";
    //  === 10. isExist === 
    std::cout << "\n=== [ Test: isExist ] ===\n ";
    std::cout << "Does element 8 exist? " << list.isExist(8) << std::endl;
    std::cout << "Expected result: 1\n";

    std::cout << "Does element 10 exist? " << list.isExist(10) << std::endl;
    std::cout << "Expected result: 0\n";

    //  === 11. Clear === 
    std::cout << "\n=== [ Test: Clear ] ===\n ";
    list.clear();

    std::cout << "Is list empty after clear? " << list.isEmpty() << std::endl;
    std::cout << "Expected result: 1\n";

    std::cout << "Size of the list after clear: " << list.linkedListSize() << std::endl;
    std::cout << "Expected result: 0\n";

    return 0;
}

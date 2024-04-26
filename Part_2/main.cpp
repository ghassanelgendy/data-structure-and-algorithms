#include <iostream>
#include "./Linked List/Node.cpp"
#include "./Linked List/SingleList.cpp"
#include "./Linked List/DoubleList.cpp"
#include "./Linked List/CircularList.cpp"
#include "./Stack/stackArrayBased.cpp"
#include "./Stack/stackLinkedListBased.cpp"
#include "./Queue/Queue.cpp"

using namespace std;

int main() {
    //================================================================
    //==========================QUEUE================
    cout << "\n=============[QUEUE TEST]==============\n";

    Queue<int> queue(10);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    cout << queue.queueSize() << endl;
    queue.print();
    cout << "First element: " << queue.first() << "\n";
    cout << "Dequeued: " << queue.dequeue() << "\n";
    queue.print();
    cout << "Queue size: " << queue.queueSize() << "\n";
    queue.clear();
    queue.print();

    cout << "\n======================================================================\n";


    Queue<string> queuename;
    cout << "Queue size: " << queuename.queueSize() << endl;
    queuename.enqueue("Jana");
    queuename.enqueue("Mohamed");
    queuename.enqueue("Ramadan");
    queuename.enqueue("Mahmoud");
    cout << "Queue size: " << queuename.queueSize() << endl;
    cout << "Dequeued: " << queuename.dequeue() << endl;
    queuename.enqueue("Mohamed");
    cout << "Dequeued: " << queuename.dequeue() << endl;
    queuename.print();
    cout << "First element: " << queuename.first() << endl;
    queuename.clear();
    queuename.print();
    queuename.enqueue("Jana");
    queuename.print();
    queuename.clear();
    queuename.dequeue();
    queuename.print();

    cout << "\n======================================================================\n";

    Queue<int> queuelist;
    queuelist.enqueue(1);
    queuelist.enqueue(2);
    queuelist.enqueue(3);
    cout << "Queue size before clearing: " << queuelist.queueSize() << endl;
    queuelist.clear();
    cout << "Queue size after clearing: " << queuelist.queueSize() << endl;

    cout << "\n======================================================================\n";


    Queue<int> queuetest(3);
    queuetest.enqueue(1);
    queuetest.enqueue(2);
    queuetest.enqueue(3);
    queuetest.enqueue(4); //queuetest is Full
    queuetest.clear();
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
    std::cout << "Does element 40 exist? " << list.isExist(40) << std::endl;
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

    //================================================================
    //========================DOUBLE LINKED LIST======================
    std::cout << "\n=============[DOUBLE LINKED LIST TEST]==============\n";

    SingleList<int> doubleList;

    //  === 1. Insert at Head (Multiple Elements) ===
    std::cout << "\n=== [ Test: Insert at Head (Multiple Elements) ] ===\n ";
    doubleList.insertAtHead(5);
    doubleList.insertAtHead(9);
    doubleList.insertAtHead(6);

    // Test: Print the doubleList
    doubleList.print();
    std::cout << "Expected result: 6 9 5\n";

    //  === 2. Remove at Head ===
    std::cout << "\n=== [ Test: Remove at Head ] ===\n ";
    doubleList.removeAtHead();

    // Test: Print the updated doubleList
    doubleList.print();
    std::cout << "Expected result: 9 5\n";

    //  === 3. Check if the doubleList is empty ===
    std::cout << "\n=== [ Test: Check if the doubleList is empty ] ===\n ";
    std::cout << "Is doubleList empty? " << doubleList.isEmpty() << std::endl;
    std::cout << "Expected result: 0\n";

    //  === 4. Check the size of the doubleList ===
    std::cout << "\n=== [ Test: Check the size of the doubleList ] ===\n ";
    std::cout << "Size of the doubleList: " << doubleList.linkedListSize() << std::endl;
    std::cout << "Expected result: 2\n";

    //  === 5. Insert at Tail (Multiple Elements) ===
    std::cout << "\n=== [ Test: Insert at Tail (Multiple Elements) ] ===\n ";
    doubleList.insertAtTail(7);
    doubleList.insertAtTail(8);

    // Test: Print the doubleList
    doubleList.print();
    std::cout << "Expected result: 9 5 7 8\n";

    //  === 6. Insert at Index ===
    std::cout << "\n=== [ Test: Insert at Index ] ===\n ";
    doubleList.insertAt(3, 1); // Insert at index 1 (between 9 and 5)

    // Test: Print the doubleList
    doubleList.print();
    std::cout << "Expected result: 9 3 5 7 8\n";

    //  === 7. Remove at Index ===
    std::cout << "\n=== [ Test: Remove at Index ] ===\n ";
    doubleList.removeAt(3); // Remove element at index 3 (7)

    // Test: Print the doubleList
    doubleList.print();
    std::cout << "Expected result: 9 3 5 7\n";

    //  === 8. Retrieve at Index ===
    std::cout << "\n=== [ Test: Retrieve at Index ] ===\n ";
    int retrievedValueDouble = doubleList.retrieveAt(1);
    std::cout << "Value retrieved at index 1: " << retrievedValueDouble << std::endl;
    std::cout << "Expected result: 3\n";

    //  === 9. Replace at Index ===
    std::cout << "\n=== [ Test: Replace at Index ] ===\n ";
    doubleList.replaceAt(40, 2); // Replace element at index 2 (5) with 40

    // Test: Print the doubleList
    doubleList.print();
    std::cout << "Expected result: 9 3 40 7\n";
    //  === 10. isExist ===
    std::cout << "\n=== [ Test: isExist ] ===\n ";
    std::cout << "Does element 40 exist? " << doubleList.isExist(40) << std::endl;
    std::cout << "Expected result: 1\n";

    std::cout << "Does element 10 exist? " << doubleList.isExist(10) << std::endl;
    std::cout << "Expected result: 0\n";

    //  === 11. Clear ===
    std::cout << "\n=== [ Test: Clear ] ===\n ";
    doubleList.clear();

    std::cout << "Is doubleList empty after clear? " << doubleList.isEmpty() << std::endl;
    std::cout << "Expected result: 1\n";

    std::cout << "Size of the doubleList after clear: " << doubleList.linkedListSize() << std::endl;
    std::cout << "Expected result: 0\n";

    //================================================================
    //========================CIRLCE LINKED LIST======================
    std::cout << "\n=============[CIRLCE LINKED LIST TEST]==============\n";

    SingleList<int> circleList;

    //  === 1. Insert at Head (Multiple Elements) ===
    std::cout << "\n=== [ Test: Insert at Head (Multiple Elements) ] ===\n ";
    circleList.insertAtHead(5);
    circleList.insertAtHead(9);
    circleList.insertAtHead(6);

    // Test: Print the circleList
    circleList.print();
    std::cout << "Expected result: 6 9 5\n";

    //  === 2. Remove at Head ===
    std::cout << "\n=== [ Test: Remove at Head ] ===\n ";
    circleList.removeAtHead();

    // Test: Print the updated circleList
    circleList.print();
    std::cout << "Expected result: 9 5\n";

    //  === 3. Check if the circleList is empty ===
    std::cout << "\n=== [ Test: Check if the circleList is empty ] ===\n ";
    std::cout << "Is circleList empty? " << circleList.isEmpty() << std::endl;
    std::cout << "Expected result: 0\n";

    //  === 4. Check the size of the circleList ===
    std::cout << "\n=== [ Test: Check the size of the circleList ] ===\n ";
    std::cout << "Size of the circleList: " << circleList.linkedListSize() << std::endl;
    std::cout << "Expected result: 2\n";

    //  === 5. Insert at Tail (Multiple Elements) ===
    std::cout << "\n=== [ Test: Insert at Tail (Multiple Elements) ] ===\n ";
    circleList.insertAtTail(7);
    circleList.insertAtTail(8);

    // Test: Print the circleList
    circleList.print();
    std::cout << "Expected result: 9 5 7 8\n";

    //  === 6. Insert at Index ===
    std::cout << "\n=== [ Test: Insert at Index ] ===\n ";
    circleList.insertAt(3, 1); // Insert at index 1 (between 9 and 5)

    // Test: Print the circleList
    circleList.print();
    std::cout << "Expected result: 9 3 5 7 8\n";

    //  === 7. Remove at Index ===
    std::cout << "\n=== [ Test: Remove at Index ] ===\n ";
    circleList.removeAt(3); // Remove element at index 3 (7)

    // Test: Print the circleList
    circleList.print();
    std::cout << "Expected result: 9 3 5 7\n";

    //  === 8. Retrieve at Index ===
    std::cout << "\n=== [ Test: Retrieve at Index ] ===\n ";
    int retrievedValueCircle = circleList.retrieveAt(1);
    std::cout << "Value retrieved at index 1: " << retrievedValueCircle << std::endl;
    std::cout << "Expected result: 3\n";

    //  === 9. Replace at Index ===
    std::cout << "\n=== [ Test: Replace at Index ] ===\n ";
    circleList.replaceAt(40, 2); // Replace element at index 2 (5) with 40

    // Test: Print the circleList
    circleList.print();
    std::cout << "Expected result: 9 3 40 7\n";
    //  === 10. isExist ===
    std::cout << "\n=== [ Test: isExist ] ===\n ";
    std::cout << "Does element 40 exist? " << circleList.isExist(40) << std::endl;
    std::cout << "Expected result: 1\n";

    std::cout << "Does element 10 exist? " << circleList.isExist(10) << std::endl;
    std::cout << "Expected result: 0\n";

    //  === 11. Clear ===
    std::cout << "\n=== [ Test: Clear ] ===\n ";
    circleList.clear();

    std::cout << "Is circleList empty after clear? " << circleList.isEmpty() << std::endl;
    std::cout << "Expected result: 1\n";

    std::cout << "Size of the circleList after clear: " << circleList.linkedListSize() << std::endl;
    std::cout << "Expected result: 0\n";



    return 0;
}

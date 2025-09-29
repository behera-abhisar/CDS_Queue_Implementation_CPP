# EXPERIMENT 18: QUEUE IMPLEMENTATION IN C++

## AIM
To implement a **Queue** data structure in C++ that supports the operations:
- Adding elements (Enqueue)
- Deleting elements (Dequeue)
- Checking if the queue is **overflow** (full) or **empty**

## TOOLS USED
- C++ Compiler (g++, clang++)
- Text Editor / IDE (VS Code, Code::Blocks)

## THEORY
A **Queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle.  
This means the element added first will be removed first. It is widely used in scheduling, CPU task management,  
and resource allocation.

### Characteristics of a Queue
- Elements are inserted from the **rear (end)**.
- Elements are deleted from the **front (beginning)**.
- It maintains order of processing.

### Basic Operations
1. **Enqueue (Add)**  
   - Insert an element at the rear of the queue.  
   - Before inserting, check if the queue is full (**overflow** condition).

2. **Dequeue (Delete)**  
   - Remove an element from the front of the queue.  
   - Before removing, check if the queue is empty (**underflow** condition).

3. **Front**  
   - Peek the element at the front of the queue without removing it.

4. **isEmpty()**  
   - Returns true if the queue has no elements.

5. **isFull()**  
   - Returns true if the queue is at its maximum capacity.

### Queue Representation
- **Array-based Queue**: Uses a fixed-size array to implement the queue.  
- **Linked List-based Queue**: Uses dynamic memory allocation; no fixed size.

### Advantages
- Simple to implement.  
- Efficient for sequential processing.  
- Essential for managing resources in operating systems and real-time systems.

### Applications
- CPU scheduling
- Disk scheduling
- Managing print jobs
- Call center systems

## EXPERIMENT 18(A): QUEUE IMPLEMENTATION (ADD/DELETE MEMBERS, CHECK OVERFLOW/EMPTY) IN C++

### ALGORITHM
1. **START**  
2. Define a class `Queue` with:  
   - Integer array `arr` to store elements.  
   - Integer `front` and `rear` to track the start and end of the queue.  
   - Integer `capacity` for maximum queue size.  

3. In the constructor:  
   - Allocate memory for `arr` with size `capacity`.  
   - Initialize `front = -1` and `rear = -1`.  

4. Define a function `enqueue(int x)` to:  
   - Check if the queue is full (`rear == capacity - 1`). If yes, display `"Queue Overflow"` and return.  
   - If `front == -1`, set `front = 0`.  
   - Increment `rear` and insert `x` into `arr[rear]`.  
   - Display a message that `x` has been added.  

5. Define a function `dequeue()` to:  
   - Check if the queue is empty (`front == -1` or `front > rear`). If yes, display `"Queue Underflow"` and return.  
   - Retrieve `arr[front]` and increment `front`.  
   - If `front > rear`, reset `front = rear = -1`.  
   - Display a message that the element has been removed.  

6. Define functions to:  
   - `isEmpty()` → returns true if queue is empty.  
   - `isFull()` → returns true if queue is full.  
   - `getFront()` → returns the front element.  
   - `getRear()` → returns the rear element.  
   - `getSize()` → returns number of elements in the queue.  

7. In `main()`:  
   - Create a queue object with given capacity.  
   - Use `enqueue()` to add elements.  
   - Use `dequeue()` to remove elements.  
   - Display front, rear, and size after operations.  

8. **STOP**

## CONCLUSION

In this experiment, we successfully implemented a **queue data structure** using a class in C++.  
We learned how to **add (enqueue)** and **delete (dequeue)** elements while handling **overflow** and **underflow** conditions.  
The program demonstrated the **First-In-First-Out (FIFO)** principle of queues and provided functions to check the **front**, **rear**, and **size** of the queue.  
This exercise reinforced the concepts of **dynamic memory management**, **class design**, and **object-oriented programming** in C++.


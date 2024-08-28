# Pointers
## EXPERIMENT 9

## Aim:
To allocate the memory of pointers and to increment the pointer

## Apparatus:
VS Code

## Theory

### 1. *Pointers*
A pointer is a variable that stores the memory address of another variable. In C/C++, pointers allow direct memory access and manipulation.
Syntax: datatype *pointerName;

### 2. *Memory Allocation*
Memory allocation refers to assigning memory dynamically during runtime using functions like malloc(), calloc(), and free().

### 3. *Pointer Incrementation*
Pointer incrementation involves moving the pointer to the next memory location, determined by the size of the data type to which the pointer points.

## Algorithm

### 1. *Memory Allocation and Pointer Incrementation*
1. *Start*.
2. *Declare a pointer* to the desired data type (e.g., int *ptr).
3. *Allocate memory* 
   - Example: ptr = (int*);
4. *Assign values* to the allocated memory:
   - Use a loop to assign values to each memory block.
5. *Initialize another pointer* to the allocated memory (e.g., int *temp = ptr).
6. *Iterate through the memory* using pointer incrementation:
   - In each iteration, print or manipulate the value pointed to by the current pointer.
   - Increment the pointer (temp++) to move to the next memory location.
7. *End*.

## Conclusion
Learned how pointers are used for dynamic memory management and how pointer arithmetic (such as incrementation) allows efficient data access in arrays.

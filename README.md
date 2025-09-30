# EXPERIMENT - STACK IMPLEMENTATION IN C++

## Aim: To study and implement the concepts of stack data structure and its operations in C++.

## Apparatus: VS Code or Online C++ Compiler

## Theory:

**Stack** is a fundamental linear data structure that follows the Last In First Out (LIFO) principle. It is one of the most important and widely used data structures in computer science, serving as the foundation for many algorithms and system-level operations. In a stack, elements are added and removed from the same end, called the "top" of the stack.

### Key Concepts:

1. **LIFO Principle**: Last In, First Out - the last element added is the first one to be removed.
   ```cpp
   Stack s;
   s.push(1);  // Stack: [1]
   s.push(2);  // Stack: [1, 2]
   s.push(3);  // Stack: [1, 2, 3]
   s.pop();    // Stack: [1, 2] (3 is removed)
   ```

2. **Top**: The uppermost element of the stack, which is accessible for operations.
   ```cpp
   int topElement = s.peek();  // Returns top element without removing it
   ```

3. **Stack Operations**: Basic operations that can be performed on a stack.
   ```cpp
   s.push(data);    // Insert element at top
   s.pop();         // Remove top element
   s.peek();        // View top element
   s.display();     // Show all elements
   ```

4. **Stack States**: Empty, partially filled, or full (in array implementation).

### Stack Implementation Approaches:

```cpp
class Stack {
private:
    int arr[MAXSIZE];  // Array-based implementation
    int top;           // Index of top element
public:
    Stack() : top(-1) {}  // Initialize empty stack
    
    void push(int data) {
        if (top < MAXSIZE - 1) {
            arr[++top] = data;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }
    
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }
};
```

### Types of Stack Implementations:

1. **Array-based Stack**: Fixed size, fast access, memory efficient
2. **Linked List Stack**: Dynamic size, flexible memory allocation
3. **Template Stack**: Generic implementation for any data type
4. **STL Stack**: Standard library implementation using containers

### Stack Operations Complexity:

| Operation | Time Complexity | Space Complexity |
|-----------|----------------|-----------------|
| **Push** | O(1) | O(1) |
| **Pop** | O(1) | O(1) |
| **Peek/Top** | O(1) | O(1) |
| **Display** | O(n) | O(1) |
| **Search** | O(n) | O(1) |

### Benefits of Stack:

- **Simple Structure**: Easy to understand and implement
- **Efficient Operations**: Constant time for push, pop, and peek
- **Memory Management**: Automatic memory allocation and deallocation
- **Function Calls**: Essential for managing function call sequences
- **Expression Evaluation**: Natural fit for parsing and evaluating expressions
- **Undo Operations**: Perfect for implementing undo functionality
- **Backtracking**: Useful for algorithms that need to retrace steps

### Applications of Stack:

- **Function Call Management**: Managing function calls and returns
- **Expression Evaluation**: Infix to postfix conversion, arithmetic expressions
- **Syntax Parsing**: Compiler design, bracket matching, syntax analysis
- **Undo Operations**: Text editors, graphics applications, game states
- **Browser History**: Back button functionality in web browsers
- **Memory Management**: Stack memory allocation for local variables
- **Backtracking Algorithms**: Maze solving, N-Queens problem, Sudoku solving

## Programs:

### 1. Stack Implementation with Basic Operations

---

**File:** `stack.cpp`  
**Experiment ID:** STK-01

**Description:** Implements a complete stack data structure using array-based approach with all fundamental operations including push, pop, peek, display, and expression evaluation demonstration.

**Algorithm:**

1. **Stack Class Design:**
   - Private members: integer array for storage, top index for tracking
   - Constructor initializes top to -1 (empty stack indicator)
   - Public methods for all stack operations

2. **Push Operation:**
   - Check if stack is full (top < MAXSIZE - 1)
   - If not full, increment top and store data at new top position
   - If full, display "Stack Overflow" error message

3. **Pop Operation:**
   - Check if stack is empty (top >= 0)
   - If not empty, decrement top (element becomes inaccessible)
   - If empty, display "Stack Underflow" error message

4. **Peek Operation:**
   - Check if stack is empty
   - If not empty, return element at top position without removing
   - If empty, display error and return error value

5. **Display Operation:**
   - Iterate from index 0 to top
   - Print all accessible elements in the stack
   - Show current stack state

6. **Expression Evaluation:**
   - Demonstrate stack usage for evaluating ((1+2)*3)
   - Use stack to store operands and intermediate results
   - Perform operations by popping operands and pushing results
   - Show step-by-step evaluation process

**Key Learning:** Understanding stack implementation, LIFO principle, overflow/underflow conditions, and practical application in expression evaluation.

---

## Key Learning Outcomes:

1. **Stack Fundamentals**: Understanding LIFO principle and stack behavior
2. **Implementation Techniques**: Array-based stack implementation with proper error handling
3. **Memory Management**: Efficient use of fixed-size array and index tracking
4. **Error Handling**: Proper detection and handling of overflow and underflow conditions
5. **Expression Evaluation**: Practical application of stack in arithmetic expression processing
6. **Algorithm Design**: Step-by-step approach to complex problem solving using stack
7. **Code Organization**: Object-oriented design principles in data structure implementation
8. **Testing and Validation**: Comprehensive testing of all stack operations and edge cases

## Applications:

- **Compiler Design**: Syntax parsing, operator precedence, function call management
- **Operating Systems**: Process stack management, interrupt handling, system calls
- **Web Browsers**: History management, back/forward navigation, tab management
- **Text Editors**: Undo/redo operations, syntax highlighting, auto-completion
- **Game Development**: Game state management, move history, AI decision trees
- **Mathematical Software**: Expression evaluation, formula parsing, calculator applications
- **Database Systems**: Query processing, transaction management, rollback operations
- **Network Protocols**: Protocol stack implementation, packet processing, routing

## Advantages of Stack:

- **Simplicity**: Easy to understand and implement compared to other data structures
- **Efficiency**: Constant time complexity for basic operations (push, pop, peek)
- **Memory Efficient**: Minimal memory overhead with array-based implementation
- **Natural LIFO**: Perfect fit for problems requiring last-in-first-out behavior
- **Function Management**: Essential for managing function calls and local variables
- **Expression Handling**: Ideal for parsing and evaluating mathematical expressions
- **Undo Functionality**: Natural choice for implementing undo/redo operations

## Important Concepts:

- **Stack Pointer/Top**: Index or reference to the topmost element in the stack
- **Stack Overflow**: Error condition when attempting to push onto a full stack
- **Stack Underflow**: Error condition when attempting to pop from an empty stack
- **LIFO Ordering**: Last In, First Out access pattern for stack elements
- **Stack Frame**: Memory area allocated for function calls including parameters and local variables
- **Call Stack**: System stack used by programs to manage function calls and returns
- **Stack Size**: Maximum number of elements that can be stored in the stack

## Best Practices:

- **Bounds Checking**: Always check for overflow and underflow conditions
- **Error Handling**: Provide meaningful error messages and return appropriate values
- **Initialization**: Properly initialize stack variables and top pointer
- **Const Correctness**: Use const methods where stack state isn't modified
- **Memory Efficiency**: Choose appropriate stack size based on application requirements
- **Template Usage**: Consider generic implementations for different data types
- **Exception Safety**: Handle exceptions gracefully in stack operations

## Common Stack Operations:

```cpp
// Basic Stack Operations
Stack s;

// Push operations
s.push(10);    // Add element to top
s.push(20);    // Stack: [10, 20]
s.push(30);    // Stack: [10, 20, 30]

// Peek operation
int top = s.peek();  // Returns 30, stack unchanged

// Pop operations
s.pop();       // Remove top element, Stack: [10, 20]
int value = s.popAndReturn();  // Remove and return top element

// Display operation
s.display();   // Print all elements: 10 20

// Check stack state
bool empty = s.isEmpty();
bool full = s.isFull();
int size = s.size();
```

## Stack vs Other Data Structures:

| Aspect | Stack | Queue | Array | Linked List |
|--------|-------|-------|-------|-------------|
| **Access Pattern** | LIFO | FIFO | Random Access | Sequential |
| **Insertion** | Top only | Rear only | Any position | Any position |
| **Deletion** | Top only | Front only | Any position | Any position |
| **Memory Usage** | Fixed/Dynamic | Fixed/Dynamic | Fixed | Dynamic |
| **Cache Performance** | Good | Good | Excellent | Poor |
| **Implementation** | Simple | Moderate | Simple | Moderate |

## Expression Evaluation with Stack:

```cpp
// Infix Expression: ((1+2)*3)
// Step-by-step evaluation:

Stack s;

// Step 1: Handle (1+2)
s.push(1);        // Stack: [1]
s.push(2);        // Stack: [1, 2]
int b = s.pop();  // b = 2, Stack: [1]
int a = s.pop();  // a = 1, Stack: []
s.push(a + b);    // Push 3, Stack: [3]

// Step 2: Handle *3
s.push(3);        // Stack: [3, 3]
int y = s.pop();  // y = 3, Stack: [3]
int x = s.pop();  // x = 3, Stack: []
s.push(x * y);    // Push 9, Stack: [9]

// Final result: 9
```

## Memory Layout:

```
Stack Memory Layout (Array-based):
┌──────────────────────────────────────────────────┐
│ arr[0] │ arr[1] │ arr[2] │ ...  │ arr[MAXSIZE-1] │
├──────────────────────────────────────────────────┤
│   10   │   20   │   30   │ ...  │      ---       │
└──────────────────────────────────────────────────┘
                    ↑
                   top = 2
```

## Common Stack Algorithms:

- **Balanced Parentheses**: Check if brackets are properly matched
- **Infix to Postfix**: Convert mathematical expressions to postfix notation
- **Postfix Evaluation**: Evaluate postfix expressions using stack
- **Function Call Simulation**: Simulate recursive function calls
- **Undo/Redo Implementation**: Maintain operation history for reversal
- **Backtracking Solutions**: Store and restore algorithm states
- **DFS Traversal**: Depth-first search using explicit stack

## Error Handling Strategies:

```cpp
// Robust error handling in stack operations
class SafeStack {
public:
    enum class StackResult {
        SUCCESS,
        OVERFLOW,
        UNDERFLOW,
        EMPTY_STACK
    };
    
    StackResult push(int data) {
        if (top >= MAXSIZE - 1) {
            return StackResult::OVERFLOW;
        }
        arr[++top] = data;
        return StackResult::SUCCESS;
    }
    
    StackResult pop(int& data) {
        if (top < 0) {
            return StackResult::UNDERFLOW;
        }
        data = arr[top--];
        return StackResult::SUCCESS;
    }
};
```

## Testing Stack Implementation:

- **Boundary Testing**: Test with empty stack, full stack, single element
- **Operation Sequence**: Test various push/pop combinations
- **Error Conditions**: Verify proper handling of overflow and underflow
- **Performance Testing**: Measure operation times for large datasets
- **Memory Testing**: Check for memory leaks in dynamic implementations
- **Stress Testing**: Test with maximum capacity and rapid operations
- **Integration Testing**: Test stack usage in larger algorithms

## Advanced Stack Concepts:

- **Generic Stacks**: Template-based implementation for any data type
- **Thread-Safe Stacks**: Concurrent access protection using synchronization
- **Persistent Stacks**: Immutable stacks that preserve previous versions
- **Bounded Stacks**: Stacks with configurable maximum size limits
- **Stack Machines**: Computer architectures based on stack operations
- **Call Stack Analysis**: Debugging and profiling function call patterns
- **Stack-based Languages**: Programming languages using stack-based execution

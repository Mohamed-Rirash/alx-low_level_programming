# Function pointers
The objectives of this project are:
- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

### 0. What's my name
[0-print_name.c](./0-print_name.c) a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *))`

### 1. If you spend too much time thinking about a thing, you'll never get it done
[1-array_iterator.c](./1-array_iterator.c) a function that executes a function given as a parameter on each element of an array.
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`
- where size is the size of the array and action is a pointer to the function you need to use

### 2. To hell with circumstances; I create opportunities
[2-int_index.c](./2-int_index.c) a function that searches for an integer.
- Prototype: `int int_index(int *array, int size, int (*cmp)(int))`
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
[3-main.c](./3-main.c) a program that performs simple operations.
- Usage: calc num1 operator num2
- You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int operator is one of the following:
	- `+: addition`
	- `-: subtraction`
	- `*: multiplication`
	- `/: division`
	- `%: modulo`
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
- [3-calc.h](./3-calc.h) contain all the function prototypes and data structures used by the program.
- [3-op_functions.c](./3-op_functions.c) contains all the operation functions.
- [3-get_op_func.c](./3-get_op_func.c) contain the function that selects the correct function to perform the operation asked by the user.

### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
[100-main_opcodes.c](./100-main_opcodes.c) a program that prints the opcodes of its own main function.
- Usage: ./main number_of_bytes
- Output format:
	- the opcodes should be printed in hexadecimal, lowercase
	- each opcode is two char long
	- listing ends with a new line


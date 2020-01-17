# 0x1E. C - Search Algorithms

## Description

What you should learn from this project:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

---

### [0. Linear search](./0-linear.c)

* C function that searches for a value in an array of integers using the Linear search algorithm.

### [1. Binary search](./1-binary.c)

* C function that searches for a value in a sorted array of integers using the Binary search algorithm.

* Also prints on every iteration which subarray is checking the function.

### [2. Big O #0](./2-O)

* What is the time complexity (worst case) of a linear search in an array of size n?

### [3. Big O #1](./3-O)

* What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### [4. Big O #2](./4-O)

* What is the time complexity (worst case) of a binary search in an array of size n?

### [5. Big O #3](./5-O)

* What is the space complexity (worst case) of a binary search in an array of size n?

### [6. Big O #4](./6-O)

* What is the space complexity of this function / algorithm?

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### [7. Jump search](./100-jump.c)

* C function that searches for a value in a sorted array of integers using the Jump search algorithm.

### [8. Big O #5](./101-O)

* What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

### [9. Interpolation search](./102-interpolation.c)

* C function that searches for a value in a sorted array of integers using the Interpolation search algorithm.

### [10. Exponential search](./103-exponential.c)

* C function that searches for a value in a sorted array of integers using the Exponential search algorithm.

### [11. Advanced binary search](./104-advanced_binary.c)

* C function that searches for a value in a sorted array of integers using the binary search algorithm taking in account that you must return the index of the first value in the array (if the searched value appears more than once in the array).

### [12. Jump search in a singly linked list](./105-jump_list.c)

* C function that searches for a value in a sorted singly linked list of integers using the Jump search algorithm (Note that is the linked list data structure and not an array, for more information checkout the structure in the header file).

### [13. Linear search in a skip list](./106-linear_skip.c)

* C function that searches for a value in a sorted skip list of integers (for more information checkout the structure in the header file).

### [14. Big O #6](./107-O)

* What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

### [15. Big O #7](./108-O)

* What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?

---

## Author

* **Nicolas Forero Puello** - [NickForero11](https://github.com/NickForero11)

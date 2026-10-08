# Arrays in C Programming

## Introduction

An **array** is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow programmers to store and manage multiple values using a single variable name.

Arrays are one of the fundamental data structures in C and are widely used in searching, sorting, matrix operations, and implementing advanced data structures.

---

## Why Use Arrays?

Without arrays:

```c
int mark1 = 90;
int mark2 = 85;
int mark3 = 78;
int mark4 = 92;
int mark5 = 88;
```

Using arrays:

```c
int marks[5] = {90, 85, 78, 92, 88};
```

### Benefits

- Store multiple values using a single variable.
- Easy access using indexes.
- Simplifies data processing.
- Efficient memory management.
- Useful in sorting and searching algorithms.

---

## Array Declaration

### Syntax

```c
data_type array_name[size];
```

### Example

```c
int numbers[5];
```

This creates an array capable of storing 5 integer values.

---

## Array Initialization

### Method 1: Specify Size

```c
int arr[5] = {10, 20, 30, 40, 50};
```

### Method 2: Let Compiler Determine Size

```c
int arr[] = {10, 20, 30, 40, 50};
```

---

## Array Indexing

Array indexing starts from **0**.

```c
int arr[5] = {10, 20, 30, 40, 50};

printf("%d", arr[0]); // 10
printf("%d", arr[2]); // 30
```

### Index Representation

|  Index  |  Value  |
|---------|---------|
|    0    |   10    |
|    1    |   20    |
|    2    |   30    |
|    3    |   40    |
|    4    |   50    |

---

## Accessing Array Elements

```c
#include <stdio.h>

int main()
{
    int arr[3] = {5, 10, 15};

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    return 0;
}
```

### Output

```text
5
10
15
```

---

## Taking Input into an Array

```c
#include <stdio.h>

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    return 0;
}
```

---

## Displaying Array Elements

```c
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

### Output

```text
1 2 3 4 5

---

## Types of Arrays

### 1. One-Dimensional Array

```c
int arr[5];
```

### 2. Two-Dimensional Array

```c
int matrix[3][3];
```

Example:

```c
int matrix[2][2] = {
    {1, 2},
    {3, 4}
};
```

### 3. Multi-Dimensional Array

```c
int arr[2][3][4];
```

---

## Advantages of Arrays

- Easy to store multiple values.
- Fast access using indexes.
- Efficient memory utilization.
- Foundation for advanced data structures.
- Useful for sorting and searching operations.

---

## Limitations of Arrays

- Fixed size.
- Same data type only.
- Insertion and deletion are expensive.
- Memory size cannot be changed after declaration.


# Suggested Repository Structure

```text
C-Programming-Arrays/
│
├── README.md
├── 01_Print_Array.c
├── 02_Sum_Of_Array.c
├── 03_Average_Array.c
├── 04_Max_Element.c
├── 05_Min_Element.c
├── 06_Even_Odd_Count.c
├── 07_Reverse_Array.c
├── 08_Linear_Search.c
├── 09_Second_Largest.c
├── 10_Remove_Duplicates.c
├── 11_Ascending_Sort.c
├── 12_Descending_Sort.c
├── 13_Merge_Arrays.c
├── 14_Frequency_Count.c
└── 15_Matrix_Addition.c
```

---

## Learning Outcomes

After completing these exercises, you will be able to:

- Declare and initialize arrays.
- Access and modify array elements.
- Traverse arrays using loops.
- Perform searching operations.
- Perform sorting operations.
- Work with 2D arrays and matrices.
- Solve real-world problems using arrays.

---

### Author

**Sai Kumar Rao Kanda**

Learning C Programming and Data Structures through hands-on coding and GitHub projects.

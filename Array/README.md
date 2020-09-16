# Array

## Description

An array is a collection of items stored at contiguous memory locations.
The idea is to store multiple items of the same type together.
This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

<br />

![array-data-structure](https://i.ibb.co/DkM5bG8/array.jpg)

<br />

## Array Size

In Programming like C, C++, Java once array size is decleared it cannot be changed during runtime.
So it can be cache locality which give performance boost.

```
char arr[]={'a','c','l'};
// arr[0] -> 'a', arr[1] -> 'c',arr[2] -> 'l',
arr[1]='b'
// arr[0] -> 'a', arr[1] -> 'b',arr[2] -> 'l',
```


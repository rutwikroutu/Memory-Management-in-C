# Notes on Garbage Collection

One implementation of Python called CPython is written in C !

In Python, once variables go outside the scopy, the programming language takes care of freeing up the memory etc.

However, this comes at a cost of the algorithm deciding some memory.

One method for garbage collector is

1) Reference counting

Every object has a refcount variable which tracks the number of references to this object. and when the refcount == 0, we give back the memory to the OS. 

The problem is that after every operation you have to manually check for each object how many references are there and if you need to remove / free some memory. This is computationally pretty expensive.

Ref counting cant handle cycles of references. Example, when a list references another list which references the previous list which referenced the other list.

2) Mark and Sweep

This is complex and can handle cycles. It also doesnt require you to compute after every operation.
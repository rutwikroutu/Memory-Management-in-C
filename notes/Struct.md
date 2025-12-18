# Structs in C

The memory taken in a C is the collection of all the sizes of its member variables.

It is better if you order the variables from largest size of to the smallest size of. There is something known as struct padding and due to word boundaries and bunch of other CPU things (which I need to research more) it is better if you order it in descending order.

They are stored in contiguous memory
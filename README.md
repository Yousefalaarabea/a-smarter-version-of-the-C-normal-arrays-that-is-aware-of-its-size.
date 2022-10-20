# a-smarter-version-of-the-C-normal-arrays-that-is-aware-of-its-size.
Assume that array class is modern C++ is not created yet. We want to create a smarter version of the 
C++ normal arrays that is aware of its size. Create this as a template class with the following features:
The smart array takes a type parameter to decide the type it will contain.
The smart array keeps track of its current size. 
It has a destructor that frees any heap storage allocated by the smart array.
It has a method size() that returns the number of elements in the array.
overriding the bracket-selection operator, which has the following prototype:
int & operator[](int k);
Your implementation of operator[] should check to make sure that the index k is valid. 
You should return the appropriate element in the internal array by reference so that clients can 
assign a new value to a selection expression.
Overload the assignment operator to copy and array and implement deep copying. See page 551 for 
details in Programming Abstractions book. 
Implement a copy constructor that takes another array of the same type and creates an identical one 
with copies of the values in the original array. 
Write a program to test the array on different types.

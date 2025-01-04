# C++ Vector Out-of-Bounds Access

This repository demonstrates a common C++ error: accessing an element in a `std::vector` beyond its valid index range.  The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides a corrected version.

**Understanding the Problem:**

Attempting to access an element using an index that is either negative or greater than or equal to the vector's `size()` results in undefined behavior. This can lead to crashes, unexpected results, or subtle memory corruption that might be difficult to debug.

**Solution:**

The solution involves carefully checking the index before accessing the element. This can be done by using `at()` which throws an exception if the index is out-of-bounds or by manually checking the index before accessing the element using `[]` operator. 

**How to Use:**

1. Clone this repository.
2. Compile and run `bug.cpp` to observe the error.
3. Compile and run `bugSolution.cpp` to see the corrected version.

This example highlights the importance of thorough input validation and bounds checking when working with dynamic data structures in C++.
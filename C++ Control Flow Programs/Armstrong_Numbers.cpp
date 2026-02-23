// C++ Program to Print Armstrong Numbers Between 1 to 1000
// Last Updated : 8 Dec, 2022
// Here, we will see how to print Armstrong numbers between 1 to 1000 using a C++ program. 

// Armstrong Number
// A number "N" is an Armstrong number if "N" is equal to the sum of all N's digits raised to the power of the number of digits in N.

// Example:

// C++ program to print armstrong numbers between 1 to 1000
 
// There are 2 ways to find all the Armstrong numbers between 1 to 1000 in C++:

// Using the Brute-force approach.
// Using the optimized solution.
// Let's start discussing each of these in detail.

// 1. Using Brute-force Approach 
// The idea is to first count the number of digits (or find order). Let the number of digits be order_n. For every digit curr in input number num, compute currorder_n. If the sum of all such values is equal to num, then return true, else false.

// Below is the C++ program to find Armstrong numbers between 1 to 1000 using a brute force approach:


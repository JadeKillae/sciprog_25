# Practical 7

This folder contains practical 07 codes. In this practical, we learn how to use dynamically allocated arrays with pointers. We estimate the value of e using Taylor's formula, and we also define functions to correctly create a pointer array, initialize it, and clean the used memory of the pointer afterwards.

Chosen language: C

## To compile:

* e number estimation code: gcc taylor.c -o taylor -lm
* Dynamic allocation code: gcc dynamicallocation.c -o dyna


## To execute:

* e number estimation: ./taylor
* Dynamic allocation: ./dyna

## Output examples (adapted in this readme file to make it look same as in terminal):

 * e number estimation:

 Enter the required polynomial order 

1

e term for order 1 is 1.00000000000000 

e is estimated as 2.0000000000. with difference -7.182818e-01

Enter the required polynomial order 

15

e term for order 1 is 1.00000000000000 

e term for order 2 is 0.50000000000000 

e term for order 3 is 0.16666666666667 

e term for order 4 is 0.04166666666667 

e term for order 5 is 0.00833333333333 

e term for order 6 is 0.00138888888889 

e term for order 7 is 0.00019841269841 

e term for order 8 is 0.00002480158730 

e term for order 9 is 0.00000275573192 

e term for order 10 is 0.00000027557319 

e term for order 11 is 0.00000002505211 

e term for order 12 is 0.00000000208768 

e term for order 13 is 0.00000000051758 

e term for order 14 is 0.00000000078189 

e term for order 15 is 0.00000000049892 

e is estimated as 2.7182818301. with difference 1.625527e-09


* Dynamic allocation:

Size of the array: 

15

a[0]: 1 

a[1]: 1 

a[2]: 1 

a[3]: 1 

a[4]: 1 

a[5]: 1 

a[6]: 1 

a[7]: 1 

a[8]: 1 

a[9]: 1 

a[10]: 1 

a[11]: 1 

a[12]: 1 

a[13]: 1 

a[14]: 1 
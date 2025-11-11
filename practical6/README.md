# Practical 6

This folder contains practical 06 codes. In this practical, we learn how to multiply matrices, and also how to compile codes from different files using make.We first have a code with every calculus together, and then we separate it into two different files: the main one, and the function one.

Chosen language: C

## To compile:

* First general code (all in 1 file): gcc matmult.c -o matmult
* Divided code, manual case: First we have to create the object files and then link everything together

    gcc -c main.c

    gcc -c mm.c

    gcc -o matmultc main.o mm.o


* Divided code, using make: we just use "make all" or "make"

    make all

## To execute:

* First general code: ./matmult
* Divided code: ./matmultc

## Output (adapted in this readme file to make it look same as in terminal):

 This is matrix A


   0   1   2

   1   2   3

   2   3   4

   3   4   5

   4   5   6


 This is matrix B


   0  -1  -2  -3

   1   0  -1  -2

   2   1   0  -1


 This is matrix C


   5   2  -1  -4

   8   2  -4 -10

  11   2  -7 -16

  14   2 -10 -22

  17   2 -13 -28
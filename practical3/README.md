# Practical 3

This folder contains practical 03 codes. In the main exercise, we use the Trapezoidal rule to find the aproximated integral of f(x)=tan(x) from 0 to pi/3, using loops that calculate the accumulated sum of the different terms. We also convert from degrees to radians

Chosen language: C

## To compile:

* Integers and floats print example code: gcc practical3.c -o practical3c -lm
* Trapezoidal rule code: cc practical3_traprule.c -o practical3_traprule -lm

## To execute:

* ./practical3c
* ./practical3_traprule

## Output:

* Example:

Two integers: 30 699 and two floats: 3.140000 2.234200

* Trapezoidal rule:

b (pi/3) in radians: 1.047198 
initial area: f(x0)+f(x12)= 1.732051 
New area at x(1) = 1.907028 
New area at x(2) = 2.259682 
New area at x(3) = 2.795581 
New area at x(4) = 3.523521 
New area at x(5) = 4.456137 
New area at x(6) = 5.610837 
New area at x(7) = 7.011252 
New area at x(8) = 8.689451 
New area at x(9) = 10.689451 
New area at x(10) = 13.072958 
New area at x(11) = 15.929254 

Trapezoidal result: 0.695045 
Real result: 0.693147 
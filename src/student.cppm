export module student;

import std;

// Exercise 1: implements function 'add', that adds two numbers
export int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b);

// ===============
// implementations

export int add(int a, int b)
{
   return a+b; // DONE: adds two numbers
}

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b)
{
   return a*b; // DONE: multiplies two numbers
}

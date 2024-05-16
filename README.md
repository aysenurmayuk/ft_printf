# ft_printf Project

The ft_printf project is a core component of the 42 school curriculum, aimed at reinforcing students' understanding of variadic functions, parsing, and string formatting in C programming. In this project, students are tasked with implementing their own version of the standard printf function, capable of formatting and printing data to the standard output according to a given format string.

## Purpose

The primary objective of the ft_printf project is to deepen students' understanding of string formatting and output manipulation in C, while also familiarizing them with variadic functions and parsing techniques. By implementing a custom printf function, students gain practical experience in handling format specifiers, parsing variable arguments, and generating formatted output, which are essential skills for developing robust and efficient C programs.

## Features

- Implements a custom printf function, `ft_printf`, capable of handling a wide range of format specifiers and modifiers, including `%s`, `%d`, `%c`, `%p`, `%f`, and more.
- Supports a subset of the standard printf functionality, including width and precision specifiers, flag characters, and conversion specifiers.
- Provides extensibility through the use of function pointers and modular design, allowing for easy customization and addition of new format specifiers.
- Offers a lightweight and efficient alternative to the standard printf function, with a focus on simplicity, portability, and performance.

## Usage

To use the ft_printf function in your projects, simply include the `ft_printf.h` header file and compile your source code with the `ft_printf.c` implementation file. The function accepts a format string and variable arguments, similar to the standard printf function, and outputs the formatted result to the standard output stream.

```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s! Your age is %d.\n", "world", 42);
    return (0);
}

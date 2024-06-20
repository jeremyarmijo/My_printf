# my_printf

## Introduction

`my_printf` is a personal project to create a custom implementation of the C standard library function `printf`. This project is part of my studies at Epitech and aims to deepen my understanding of formatted output, string manipulation, and variadic functions in C.

## Features

- Handle various format specifiers (`%d`, `%s`, `%c`, `%x`, etc.).
- Support for width and precision modifiers.
- Manage output to standard output similar to the standard `printf`.

## Installation

Clone the repository and compile the program:

```bash
git clone git@github.com:jeremyarmijo/my_printf.git
cd my_printf
make
```

## Usage

Include `my_printf` in your C project and use it as you would use `printf`:

```c
#include "my_printf.h"

int main() {
    my_printf("Hello, %s!\n", "world");
    return 0;
}
```

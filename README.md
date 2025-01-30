# Custom Printf Implementation

A custom implementation of the printf function that supports various format specifiers, flags, and modifiers. This project demonstrates low-level string manipulation, memory management, and variadic functions in C.

## Project Structure

```
printf/
├── include/          # Header files
│   └── main.h       # Main header with function prototypes and structures
├── src/             # Source files
│   ├── _printf.c    # Main printf implementation
│   ├── functions.c  # Basic format specifier handlers
│   ├── functions1.c # Additional format specifier handlers
│   ├── functions2.c # More format specifier handlers
│   └── ...         # Other implementation files
├── lib/             # Compiled library files
├── obj/             # Object files
├── tests/           # Test files
│   └── test_printf.c # Test suite
├── Makefile         # Build system
├── main.c           # Example usage
└── README.md        # This file
```

## Features

* Basic format specifiers: `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%p`, `%%`
* Support for field width and precision
* Support for flags: `-`, `+`, `0`, `#`, space
* Length modifiers: `l`, `h`
* Custom specifiers: 
  * `%b` - Binary
  * `%S` - String with non-printable characters
  * `%r` - Reverse string
  * `%R` - ROT13 encoded string
* Buffer optimization for reduced system calls

## Format Specifier Syntax

```
%[flags][width][.precision][length]specifier
```

### Supported Format Specifiers

* `%c` - Character
* `%s` - String
* `%d` or `%i` - Signed decimal integer
* `%u` - Unsigned decimal integer
* `%o` - Unsigned octal
* `%x` or `%X` - Unsigned hexadecimal
* `%p` - Pointer address
* `%b` - Binary
* `%S` - String with non-printable characters
* `%r` - Reverse string
* `%R` - ROT13 encoded string
* `%%` - Literal %

### Flags

* `-` - Left-justify within the given field width
* `+` - Forces to precede the result with a plus or minus sign
* `0` - Left-pads the number with zeroes instead of spaces
* `#` - Used with o, x or X specifiers adds 0, 0x or 0X respectively
* ` ` (space) - If no sign is going to be written, a blank space is inserted before the value

## Building the Project

### Prerequisites

* GCC compiler
* GNU Make

### Build Commands

```bash
# Build the library
make

# Build the main program
make main

# Run tests
make test

# Clean object files
make clean

# Full cleanup (objects and binaries)
make fclean

# Rebuild everything
make re
```

## Usage Example

```c
#include "include/main.h"

int main(void)
{
    int num = 42;
    _printf("Hello, %s!\n", "World");
    _printf("Number: %d\n", num);
    _printf("Binary: %b\n", num);
    _printf("Unsigned hex: %x\n", num);
    _printf("Address of num: %p\n", (void *)&num);
    return (0);
}
```

## Testing

The project includes a comprehensive test suite in `tests/test_printf.c`. Run the tests using:

```bash
make test
```

The test suite compares the output of `_printf` with the standard `printf` function for various format specifiers and edge cases.

## Return Value

* On success: Returns the number of characters printed (excluding the null byte)
* On error: Returns -1

## Error Handling

* Returns -1 if format string is NULL
* Handles memory allocation failures
* Validates format specifiers
* Checks for buffer overflow

## Contributing

1. Fork the repository
2. Create your feature branch
3. Commit your changes
4. Push to the branch
5. Create a new Pull Request

## License

This project is open source and available under the MIT License.
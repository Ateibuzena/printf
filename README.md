# libftprintf

A custom implementation of the C standard `printf` function, written in C for the 42 School curriculum. This project replicates the behavior of `printf`, handling various format specifiers and variadic arguments.

## 📚 Supported Format Specifiers

| Specifier | Description                    |
|----------:|--------------------------------|
| `%c`      | Character                      |
| `%s`      | String                         |
| `%d`/`%i` | Signed integer (decimal)       |
| `%u`      | Unsigned integer (decimal)     |
| `%x`      | Unsigned hexadecimal (lowercase) |
| `%X`      | Unsigned hexadecimal (uppercase) |
| `%p`      | Pointer address (hex format)   |
| `%%`      | Percent symbol                 |

## 🔧 Project Structure

```
├── src/ # Source files
│ ├── ft_printf.c
│ ├── ft_handle_char.c
│ ├── ft_handle_string.c
│ └── ... # Other handlers
├── main.c # Test file (not part of the library)
├── libftprintf.h # Header file
├── libftprintf.a # Static library (after build)
├── Makefile
└── README.md
```


## 🛠️ Compilation

To build the static library:

```bash
make
```

This creates libftprintf.a using all .c files inside the src/ directory.

To clean object files:

```bash
make clean
```

To clean everything (including the library):

```bash
make fclean
```

To force rebuild:

```bash
make re
```

## 🔍 Example Usage

```c
#include "libftprintf.h"

int main(void)
{
    int ret;

    ret = ft_printf("Hello %s! You scored %d points.\n", "Ana", 42);
    ft_printf("Printed %d characters.\n", ret);
    return (0);
}
```

Compile your test program with the static library:

```bash
gcc -Wall -Wextra -Werror main.c libftprintf.a -o test_printf
```

## ✅ Notes

- No standard library functions like printf, sprintf, or itoa are allowed.

- Only functions from unistd.h, stdlib.h, and stdarg.h are permitted.

- This implementation focuses on basic specifiers and does not support width, precision, or flags.

## 🧠 Authors

Ana Zubieta – [42 Málaga - Fundación Telefónica]
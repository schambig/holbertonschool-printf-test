# _printf

![_printf](https://i.imgur.com/QRigUKw.jpg)

# Table of Contents
- [Description](#description)
- [Format Specifiers](#format-specifiers)
- [Flowcharts](#flowcharts)
- [Installation](#Installation)
- [Examples](#examples)
- [Authors](#authors)

## Description
This custom function, which we named _printf(), emulates some of the funtionalities of the builtin C printf() function.

The  function  _printf()  writes  output to the standard output. The function writes under the control of a format string that specifies how subsequent arguments are converted for output.

Prototype: int _printf(const char *, ...);

## Format Specifiers

Format Specifier | Function name | Description
--- | --- | ---
`c` | `is_char` | Print a single character
`s` | `is_string` | Print a string of characters
`d` | `is_integer` | Print a decimal (base 10) number
`i` | `is_integer` | Print an integer in base 10

## Flowcharts

![_printf](https://prnt.sc/SqUkJmjudXoC)

## Installation
To use this custom _printf function you need `<stdio.h>`, `<stdarg.h>`, `<string.h>` and `<stddef.h>` libraries.

First, clone this repository to your local machine:

```
$ git clone https://github.com/schambig/holbertonschool-printf.git
```

Then, go to the repository folder:

```
$ cd holbertonschool-printf
```

Finally, you can compile it with your C source code:

```
$ gcc *.c [your_code] -o [outfile_name]
```
---
You can also make it portable, creating a static library, follow the these steps:

Once cloned (first step above) go to the repository folder, and get the object files:

```
$ gcc -c *.c 
```
Then create the static library:

```
$ ar -rc libprintf.a *.o
```

Once the static library is created, create and update the index of the just created library (this speed up the compilation process):

```
$ ranlib libprintf.a
```

Now you will have ```printf.a``` static library, and all you have to do is compile your code with this library:

```
$ gcc [your_code] -L. -lprintf -o [outfile_name]
```

## Examples


**Character**
* Input: ```_printf("%c is fun!\n", 'C');```
* Output: ```C is fun!```

**String**
* Input: ```_printf("%s\n", "Read the fucking manual.");```
* Output: ```Read the fucking manual.```

**Integer or Decimal**
* Input: ```_printf("Today is July %i.\n", 12);```
* Output: ```Today is July 12.```

**Percentage**
* Input: ```_printf("We've finished the 100%% of the mandatory tasks.\n");```
* Output: ```We've finished the 100% of the mandatory tasks.```


## Authors
| [<img src="https://avatars.githubusercontent.com/u/105877471?v=4" width=115><br><sub> Joel Melgarejo </sub>](https://github.com/Jmel8) |  [<img src="https://avatars.githubusercontent.com/u/98289735?v=4" width=115><br><sub> Salomón Chambi </sub>](https://github.com/schambig) |
| :---: | :---: |

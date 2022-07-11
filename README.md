# _printf

![_printf](https://i.imgur.com/QRigUKw.jpg)

# Table of Contents
- [Description](#description)
- [Format Specifiers](#format-specifiers)
- [Tasks](#tasks)
- [Some Examples](#some-examples)
- [Authors](#authors)

## Description
This project emulates some of the funtionalities of the builtin C printf() function, which we named _printf.

The  function  _printf()  writes  output to the standard output. The function writes under the control of a format string that specifies how subsequent arguments are converted for output.

Prototype: int _printf(const char *, ...);

## Format Specifiers
Function name | Description | Format Specifier
--- | --- | ---
`is_char` | Prints a character | `%c`
`is_string` | Prints a string | `%s`
`is_percentage` | Prints a '%' | `%%`
`is_integer` | Prints an integer | `%d` or `%i`

Format Specifier | Function name | Description
--- | --- | ---
`c` | `is_char` | Prints a character


## Installation
In order to use this custom _printf function you need only ```<unistd.h>``` and ```<stdarg.h>``` library.

First, clone this repository to your local machine:

```
$ git clone https://github.com/ChristianVaras/printf.git
```

After cloning the repo, go to the printf folder with:

```
$ cd printf
```

You can compile it with your your C source code with:

```
$ gcc *.c your_C_source_code -o output
```


But the simplest solution is to make it portable, in other words to create a static library:

```
gcc *.c
ar -rc libprintf.a *.o
ranlib libprintf.a
```

Now you will have ```printf.a``` static library, and all you have to do is compile your code with this library:

```
gcc your_C_source_code -L. -lprintf
```




## Tasks

### Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [ ] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.

### Advanced Tasks
- [ ] Handle conversion specifier ```b```.
- [ ] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [ ] Use a local buffer of 1024 chars in order to call write as little as possible.
- [ ] Handle conversion specifier ```S```.
- [ ] Handle conversion specifier ```p```.
- [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [ ] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [ ] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [ ] All above options should work well together.

## Some Examples


**Character**
* Input: ```_printf("The last letter of the alphabet is %c\n", 'Z');```
* Output: ```The last letter of the alphabet is Z```

**String**
* Input: ```_printf("%s\n", "This is a simple string.");```
* Output: ```This is a simple string.```

**Integer or Decimal**
* Input: ```_printf("I've %i years old\n", 16);```
* Output: ```I've 16 years old```

**Percentage**
* Input: ```_printf("I got 100%% of the profit.\n");```
* Output: ```I got 100%% of the profit.```


## Authors
- [Mauricio Carrasco](https://github.com/mauricodev) ~ [Linkedin](https://www.linkedin.com/in/mauriciocm69/) ~ [@mauricodev](https://twitter.com/mauricodev)
- [Christian Varas](https://github.com/ChristianVaras) ~ [@ChristianVaras8](https://twitter.com/ChristianVaras8)

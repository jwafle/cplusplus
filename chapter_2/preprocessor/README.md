# Preprocessor

## Directives

Pre-compile steps indicated by `#` and unique syntax.

## `include`

Causes recursive insertion of code in provided file. Produces a "translation unit" that is sent to the compiler.

## `define`

Macro rule for defining input text conversion to output text. Can be used in two ways:

```c++
#define identifier
#define identifier substitution_text
```

## Object `define` macros

### Substitution

```c++
#include <iostream>

#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}
```

Produces:

```c++
// The contents of iostream are inserted here

int main()
{
    std::cout << "My name is: " << "Alex" << '\n';

    return 0;
}
```

### Non-substitution

Allows conditional compilation of code.

```c++
#ifdef // checks for definition
#ifndef // checks for no definition
#endif // ends the conditional
#if 0 // always false
#if 1 // always true
```

### How Substitution Works

```c++
#define FOO 9 // Here's a macro substitution

#ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive
    std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
#endif
```

### Scope

Scope is per-file from top to bottom. Does not follow scope rules in the same way as a compiler would.

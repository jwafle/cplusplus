# Signed Integers

| short int     | 16 bits |                                           |
|---------------|---------|-------------------------------------------|
| int           | 16 bits | Typically 32 bits on modern architectures |
| long int      | 32 bits |                                           |
| long long int | 64 bits |                                           |

## Declaration

```c++
short s;      // prefer "short" instead of "short int"
int i;
long l;       // prefer "long" instead of "long int"
long long ll; // prefer "long long" instead of "long long int"
```

## Range

Signed integers have a range from -2**(n-1) to 2**(n-1)-1.

## Overflow

The C++20 standard makes this blanket statement: “If during the evaluation of an expression, the result is not mathematically defined or not in the range of representable values for its type, the behavior is undefined”. Colloquially, this is called `overflow`.

## Integer Division

C++ integer division resulting in an integer result will drop any remainder.

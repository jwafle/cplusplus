# Unsigned Integers

Can only take on positive integer values.

## Declaration

```c++
unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;
```

## Range

Unsigned integers have a range from 0 to (2**n)-1

## Overflow

Overflow behavior for unsigned integers is defined by the C++ standard. Overflowed unsigned integers "wrap around". In other words, unsigned integers greater than the range allowed by the type take on the value val %% max(range of type).

## Reasons to Not Use Unsigned Integers

1. Most values are near 0 and can easily experience overflow.

2. Mathematical operations on a combination of signed and unsigned integers usually result in an unsigned integer result that can also easily be overflowed.

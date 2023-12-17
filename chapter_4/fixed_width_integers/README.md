# Fixed Width Integers

The standard library provides a set of fixed-with integers in `stdint.h` that are guaranteed to be the same size regardless of architecture.

## Naming Convention

These fixed with integers are named:

`std::(u)int<size>_t`

They are available from `<cstdint>`.

## Fast Integers

Fastest integer types default to the fastest size for the given range in a system.

They are named:

`std::(u)int_fast<size>_t`

## Least Integers

Fastest integer types default to the least memory-expensive size for the given range in a system.

They are named:

`std::(u)int_least<size>_t`

## std::int8_t and std::uint8_t Often Behave as chars

Due to an oversight in the C++ specification, most compilers define and treat std::int8_t and std::uint8_t (and the corresponding fast and least fixed-width types) identically to types signed char and unsigned char respectively.

When storing integral values, it’s generally best to avoid std::int8_t and std::uint8_t (and the related fast and least types) and use std::int16_t or std::uint16_t instead.

## Best Practices for Integral Types

* Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
* Prefer std::int#_t when storing a quantity that needs a guaranteed range.
* Prefer std::uint#_t when doing bit manipulation or where well-defined wrap-around behavior is required.

Avoid the following when possible:

* short and long integers -- use a fixed-width type instead.
* Unsigned types for holding quantities.
* The 8-bit fixed-width integer types.
* The fast and least fixed-width types.
* Any compiler-specific fixed-width integers -- for example, Visual Studio defines __int8, __int16, etc…

## std::size_t

Much like an integer can vary in size depending on the system, `std::size_t` also varies in size. `std::size_t` is guaranteed to be unsigned and at least 16 bits, but on most systems will be equivalent to the address-width of the application. That is, for 32-bit applications, std::size_t will typically be a 32-bit unsigned integer, and for a 64-bit application, `std::size_t` will typically be a 64-bit unsigned integer.

The largest object creatable on a system has a size (in bytes) equal to the largest value `std::size_t` can hold.

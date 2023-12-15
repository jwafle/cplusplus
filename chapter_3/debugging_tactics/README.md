# Debugging Tactics

`DBG_MACRO_DISABLE` can allow for adding of debug statements that do not have to be removed.

Use `std::cerr` to print out debug statements instead of `std::cout`. This is because `std::cerr` is unbuffered and will immediately print out, whereas `std::cout` is not and the program may exit before the debug statement is printed.

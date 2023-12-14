# Header File Guards

## Accidental Duplication

With header files, it’s quite easy to end up in a situation where a definition in a header file gets included more than once. This can happen when a header file #includes another header file (which is common).

## Header Guard / Include Guard

All of your header files should have header guards on them. SOME_UNIQUE_NAME_HERE can be any name you want, but by convention is set to the full filename of the header file, typed in all caps, using underscores for spaces or punctuation. For example, square.h would have the header guard:

```c++
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// your declarations (and certain types of definitions) here

#endif
```

In large programs, it’s possible to have two separate header files (included from different directories) that end up having the same filename (e.g. directoryA\config.h and directoryB\config.h). If only the filename is used for the include guard (e.g. CONFIG_H), these two files may end up using the same guard name. If that happens, any file that includes (directly or indirectly) both config.h files will not receive the contents of the include file to be included second. This will probably cause a compilation error.

Because of this possibility for guard name conflicts, many developers recommend using a more complex/unique name in your header guards. Some good suggestions are a naming convention of PROJECT_PATH_FILE_H, FILE_LARGE-RANDOM-NUMBER_H, or FILE_CREATION-DATE_H.

## Header Guards Do Not Prevent ODR

Header guards only prevent duplicate code from being compiled on a per-file basis. However, header guarded code will be included once per-file if included in multiple files. This does not inherently prevent ODR, which is why you should only provide forward declarations of functions and non-function definitions in the header file.

## Pragma

`#pragma once` serves the same purpose as header guards: to avoid a header file from being included multiple times.
With traditional header guards, the developer is responsible for guarding the header (by using preprocessor directives #ifndef, #define, and #endif). 
With `#pragma once`, we’re requesting that the compiler guard the header. How exactly it does this is an implementation-specific detail.

If a header is copied multiple places in the file system, the `#pragma once` will typically fail since the compiler cannot tell the copies apart. The `#ifdef` version of the header guard would work in this situation.

`#pragma once` can also have different implementations per-compiler because it is not defined in the C++ standard. User beware.

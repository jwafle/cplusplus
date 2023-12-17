# sizeof Types

An object with `n` bits can hold `2**n` unique values. 

## Fundamental Data Type Sizes

| Boolean        | bool           | 1 byte             | 1 byte       |                       |
|----------------|----------------|--------------------|--------------|-----------------------|
| character      | char           | 1 byte             | 1 byte       | always exactly 1 byte |
| wchar_t        | 1 byte         | 2 or 4 bytes       |              |                       |
| char8_t        | 1 byte         | 1 byte             |              |                       |
| char16_t       | 2 bytes        | 2 bytes            |              |                       |
| char32_t       | 4 bytes        | 4 bytes            |              |                       |
| integer        | short          | 2 bytes            | 2 bytes      |                       |
| int            | 2 bytes        | 4 bytes            |              |                       |
| long           | 4 bytes        | 4 or 8 bytes       |              |                       |
| long long      | 8 bytes        | 8 bytes            |              |                       |
| floating point | float          | 4 bytes            | 4 bytes      |                       |
| double         | 8 bytes        | 8 bytes            |              |                       |
| long double    | 8 bytes        | 8, 12, or 16 bytes |              |                       |
| pointer        | std::nullptr_t | 4 bytes            | 4 or 8 bytes |                       |

`sizeof` does not include dynamically allocated memory used by an object.



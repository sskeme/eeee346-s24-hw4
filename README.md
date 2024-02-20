# Introduction

In this homework assignment, you will implement a few string manipulation functions. It is known that these methods are available from existing libraries and with the C++ string class. However, you are to implement your own versions of these functions. This homework assignment is still 'C-like' since C++ classes have not been covered in the course yet. 

You will be using pointers to character arrays and treating them like string literals. When dealing with string literals, it is important that after the last character, there is a null character `'\0'`. The null character indicates the end of the string of characters and is vital when using functions such as `strlen()`.

# Task

* Implement functions `substring()`, `reverse()`, and `ltrim()` in string_functions.cpp. You can find information about these functions in string_functions.h.
* For the implementations, use [`memcpy()`](https://cplusplus.com/reference/cstring/memcpy/) and [`strlen()`](https://cplusplus.com/reference/cstring/strlen/) of <string.h>. Do not use other library functions such as `strcat()`. You can refer to `concat()`, which is already complete, to see how `memcpy()`, `strlen()`, and the null character are used.

# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp *.h
```
```
./main
```

2.  Input
* Line 1: operation (integer), see #define at top of main.cpp
* Line 2+: multiple lines here based on the string operation
* End Line: operation OR an integer other than 0, 1, 2, or 3 to exit

concat():
```
0
string 1
string 2
```
substring():
```
1
string
start_index
length
```
reverse():
```
2
string
```
ltrim():
```
3
string
```
  
# Submit

1. Type the following commands on Terminal.

```
git add .
```
```
git commit -m "your_message_or_note_for_this_submission"
```
```
git push
```

2. You can verify that your program is working properly with predetermined inputs on GitHub Actions.

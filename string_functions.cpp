#include "string.h"

void concat(char* const dest, const char* const str1, const char* const str2) {
  int len1 = strlen(str1); // the length of str1 is returned by strlen() and stored in len1
  int len2 = strlen(str2); // the length of str2 is returned by strlen() and stored in len2
  memcpy(dest, str1, len1); // copies len1 bytes from the array pointed to by str1 to the array pointed to by dest
  memcpy(dest+len1, str2, len2); // copies len2 bytes from the array pointed to by str2 to the array pointed to by (dest+len1)
  dest[len1+len2] = '\0'; // null character
}

void substring(char* const dest, const char* const src, int start_index, int len) {
  // TODO: write your code
}

void reverse(char* const dest, const char* const src) {
  // TODO: write your code
}

void ltrim(char *const dest, const char *const src) {
  // TODO: write your code
}

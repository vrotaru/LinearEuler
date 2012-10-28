#include "liml.h"
#include <string.h>
#include <stdio.h>

lvalue string_char(lvalue string_, lvalue index_) {
  if (index_ < 0)
    return 0;

  char *s = (char*) string_;
  lvalue *ptr = (lvalue *)s;
  lvalue size = *(ptr - 1);
  
  if (index_ >= size)
    return 0;  
  
  int i = (int) index_;
  char ch = *(s+i);
  
  return (lvalue) ch;
}

lvalue string_find(lvalue string_, lvalue start_, lvalue char_) {
  if (start_ < 0)
    return -1;

  char *s = (char *) string_;
  lvalue *ptr = (lvalue *)s;
  lvalue size = *(ptr - 1);
  
  if (start_ >= size)
    return -1;
  
  int ch = (int) char_;
  
  return (lvalue) strchr(s + (int) start_, ch);
}

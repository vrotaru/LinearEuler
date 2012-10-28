#include "liml.h"
#include <stdio.h>
#include <stdlib.h>

lvalue files_read(lvalue v_) {
  char *s = (char *)v_;
  char *buffer;
  lvalue *ptr;
  long size;
  
  FILE *fh = fopen(s, "rb");
  
  if (fh != NULL) {
    fseek(fh, 0L, SEEK_END);
    size = ftell(fh);
    rewind(fh);
    
    buffer = malloc(size + sizeof(lvalue) + 1);
    ptr = (lvalue*)buffer;
    *ptr = (lvalue) size;
    buffer = (char *) (ptr+1);
    
    long rsize = fread(buffer, 1, size, fh);
    
    fclose(fh);
    fh = NULL;
    
    if (rsize == size) {
      *(buffer + size) = 0;
      return (lvalue) buffer;
    }
  }
  
  return string_make((lvalue) "");
}
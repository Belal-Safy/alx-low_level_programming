#include "main.h"
#include <string.h>

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;
 
    // Get the length of the string
    l = strlen(s);
 
    // Setting the begin_ptr
    // to start of string
    begin_ptr = s;
   
      //Setting the end_ptr the end of
      //the string
    end_ptr = s + l - 1;
 
    // Swap the char from start and end
    // index using begin_ptr and end_ptr
    for (i = 0; i < (l - 1) / 2; i++) {
 
        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
 
        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}

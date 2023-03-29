#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * rot13 - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */

char *rot13(const char *src)
{
    if(src == NULL){
      return NULL;
    }
  
    char* result = malloc(strlen(src));
    
    if(result != NULL){
      strcpy(result, src);
      char* current_char = result;
      
      while(*current_char != '\0'){
        //Only increment alphabet characters
        if((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90)){
          if(*current_char > 109 || (*current_char > 77 && *current_char < 91)){
            //Characters that wrap around to the start of the alphabet
            *current_char -= 13;
          }else{
            //Characters that can be safely incremented
            *current_char += 13;
          }
        }
        current_char++;
      }
    }
    return result;
}

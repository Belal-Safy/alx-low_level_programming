#include <stdio.h>

int main() {
     char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
     write(1, str, strlen(str));
    return 0;
}

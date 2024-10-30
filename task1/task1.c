#include <ctype.h>
#include <stdio.h>

void str_lower(char *orig, char *copy) {
    //printf("Original string: %s\n", orig);

    int index = 0;

    while (orig[index] != '\0') {
        copy[index] = tolower(orig[index]);
        index++;
    }

    //printf("Lowercase string: %s\n", copy);
}


void str_lower_mutate(char *orig) {
    int index = 0;

    while (orig[index] != '\0') {
        orig[index] = tolower(orig[index]);
        index++;
    }
}

// int main() {
//     char str1[] = "Hello World";
//     char *str1Lower;
//     str_lower(str1, str1Lower);
//     return 0;
// }
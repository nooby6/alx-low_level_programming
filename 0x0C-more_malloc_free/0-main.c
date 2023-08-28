#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(98);
    }
    return ptr;
}

int main() {
    unsigned int size = 10;
    int *arr = (int *)malloc_checked(size * sizeof(int));

    /* Use allocated memory */

    free(arr); /* Free the allocated memory */

    return 0;
}

// Dynamic Memory Allocation

// malloc() function
// free() function
// function

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 4;

    int* ptr; 

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Can't Allocated");
        return 0;
    }
    

    printf("Enter input values: \n");
    for (int i = 0; i < n; ++i) {
       scanf("%d", ptr + i);
    }
    
    printf("Input values: \n");
    for (int i = 0; i < n; ++i) {
       printf("%d\n", *(ptr + i));
    }

    free(ptr);

    return 0;
}

// realloc
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 4;

    int* ptr; 

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Can't Allocated");
        return 0;
    }
    

    printf("Allocated Memory\n");
    for (int i = 0; i < n; ++i) {
       printf("%p\n", ptr + i);
    }

    n = 5;

    ptr = realloc (ptr, n * sizeof(int));

    printf("Reallocated Memory\n");
    for (int i = 0; i < n; ++i) {
       printf("%p\n", ptr + i);
    }

    free(ptr);

    return 0;
}

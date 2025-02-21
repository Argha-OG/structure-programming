// C Pointers and Array
// Access array elements using pointer
// Change array elements using pointers

// C Pointers and Array
#include <stdio.h>

int main(){

    int numbers[5] = {1 , 3, 5, 7, 9};

    for (int i = 0; i < 5; ++i) {
        
        printf("%d = %p\n", numbers[i], &numbers[i]);
        
    }

    printf("Array Address: %p", numbers);

    return 0;
}

// Change array elements using pointers
#include <stdio.h>

int main(){

    int numbers[5] = {1 , 3, 5, 7, 9};

    *numbers = 2;

    *(numbers + 4) = 10;

    printf("First Element: %d\nSecond Element: %d", numbers[0], numbers[4]);

    return 0;
}


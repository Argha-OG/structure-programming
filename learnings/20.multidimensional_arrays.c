// Multidimensional Arrays 
// Declaration multidimensional array
// Initialization of multidimensional array
// Access Array Elements
// Change Array Indexes
// Multidimensional Array and for loop


// Declaration multidimensional array
int arr[2][3];

// Initialization of multidimensional array
int arr[2][3] = { {1,3,5},{2,4,6}}

// Access Array Elements
#include <stdio.h>

int main() {

    int arr[2][3] = { {1,3,5},{2,4,6}};


    printf("%d\n", arr[0][0], "%d\n", arr[1][1]);

    return 0;
}

// Change Array Indexes
#include <stdio.h>

int main() {

    int arr[2][3] = { {1,3,5},{2,4,6}};
    arr[0][2] = 7;
    arr[1][1] = 7;

    printf("%d\n%d\n", arr[0][2], arr[1][1]);

    return 0;
}

// Multidimensional Array and for loop
#include <stdio.h>

int main() {

    int arr[2][3] = { {1,3,5},{2,4,6}};

    for(int i = 0; i < 2; ++i ){
        for(int j = 0; j < 3; ++j ){
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}


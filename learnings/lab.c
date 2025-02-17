#include <stdio.h>

int main() {
    int a=5 , b=8 , c=3;
    if (a > b) {
       printf ("\a leargest");
    }
    else if (b > c) {
       printf ("\b leargest");
    }
    else {
       printf ("\c leargest");
    }
    
    getchar();
    getchar();
}
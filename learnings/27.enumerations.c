//  Enumeration in C
//  Integral Constant
//  Change value of Integral Constants

//  Enumeration in C
#include <stdio.h>

enum size {
    Small,
    Medium,
    Large,
    ExtraLarge,
};

int main() {

    enum size shoeSize;

    shoeSize = Large;

    printf("Size Number Is: %d", shoeSize);

}

//  Change value of Integral Constants
#include <stdio.h>

enum size {
    Small = 10,
    Medium = 20,
    Large = 25,
    ExtraLarge = 30,
};

int main() {

    enum size shoeSize;

    shoeSize = Large;

    printf("Size Number Is: %d", shoeSize);

}
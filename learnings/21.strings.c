// Strings
// String Input
// Access Characters of a String
// Change Characters of String

// Strings
#include <stdio.h>

int main() {

    char Str[] = "Argha";

    printf("%s", Str);

    return 0;
}

// String Input
#include <stdio.h>

int main(){
    
    char str[20];

    printf("Enter Your Full Name: ");

    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}

// Access Characters of a String
#include <stdio.h>

int main() {

    char str[] = "Argha";

    printf("%c", str[0]);
    printf("%c", str[1]);
    printf("%c", str[2]);
    printf("%c", str[3]);
    printf("%c", str[4]);

    return 0;
}

// Change Characters of String

#include <stdio.h>

int main() {

    char str[] = "Argha";
    str[0] = 'O';
    str[4] = 'O';

    printf("%s", str);

    return 0;
}

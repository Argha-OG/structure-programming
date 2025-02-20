//  Strings Function
//  strlen() function
//  strcpy() function
//  strcat() function
//  strcmp() function

// String
#include <stdio.h>

int main() {

        char lang[] = "Argha";

        printf("%s", lang);

    return 0;
}

//  strlen() function
#include <stdio.h>
#include <string.h>

int main() {

        char lang[] = "Argha";

        printf("%s", lang);

        printf("\nLength: %zu", strlen(lang));

    return 0;
}

//  strcpy() function
#include <stdio.h>
#include <string.h>

int main() {

        char lang[] = "Argha";

        char name[strlen(lang)];

        strcpy(name, lang);

        printf("%s", name);

        // printf("\nLength: %zu", strcpy(lang));

    return 0;
}

//  strcat() function
#include <stdio.h>
#include <string.h>

int main() {

        char lang[] = "Argha ";
        char name[] = "Biswas";
        strcat(lang, name);

        printf("%s", lang);

    return 0;
}

//  strcmp() function
#include <stdio.h>
#include <string.h>

int main() {

        char lang[] = "Argha ";
        char name[] = "Biswas";
        int result = strcmp(lang, name);

        printf("%d", result);

    return 0;
}
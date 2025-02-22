//  File Handling

//  Open a File
//  Read File Content
//  Closing File
//  Write Content to File

//  Open a File
#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("26.struct.c", "r");

    if (fptr != NULL)
    {
        printf("File Open Successful");
    } else {
        printf("File Open Unsuccessful");
    }
    
    return 0;
}

//  Read File Content
#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("26.struct.c", "r");

    char content[1000];

    if (fptr != NULL)
    {
        while(fgets(content, 1000, fptr);){
            printf("%s", content);
        }
        
    } else {
        printf("File Open Unsuccessful");
    }
    
    return 0;
}


//  Closing File 
#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("26.struct.c", "r");

    if (fptr != NULL)
    {
        printf("File Open Successful");
    } else {
        printf("File Open Unsuccessful");
    }
    
    return 0;
}

//  Read File Content
#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("26.struct.c", "r");

    char content[1000];

    if (fptr != NULL)
    {
        while(fgets(content, 1000, fptr);){
            printf("%s", content);
        }
        
    } else {
        printf("File Open Unsuccessful");
    }
    
    fclose(fptr);
    return 0;
}


//  Write Content to File
#include <stdio.h>

int main() {
    FILE* fptr;

    fptr = fopen("net.txt", "w");

    if (fptr != NULL)
    {
        printf("File Write Successful");
    } else {
        printf("File Write Unsuccessful");
    }

    fputs("I Love To Hack\n", fptr);
    fputs("Nothing Here Actually\n", fptr);
    
    fclose(fptr);
    return 0;
}
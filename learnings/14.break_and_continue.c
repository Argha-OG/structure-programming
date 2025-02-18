// Break And Continue
// Break: It is used to terminate the loop. It is used to come out of the loop.
// Continue: It is used to skip the current iteration of the loop. It is used to skip the current iteration of the loop and continue with the next iteration.

// break Statement
// break Statement with decision-making statement
// break with while Loop
// continue Statement

// Example 1: break with decision-making statement
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        printf("%d\n", i);
    }
    return 0;
}

// Example 2: break with while loop
#include <stdio.h>  
int main()  
{  
    int i=1;    
    while(i<=10)  
    {  
        if(i==5)  
        {  
            i++;  
            break;  
        }  
        printf("%d\n",i);  
        i++;  
    }  
    return 0;  
}

// Example 3: continue statement
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        printf("%d\n", i);
    }
    return 0;
}

// Example 4: continue with while loop
#include <stdio.h>
int main()
{
    int i=1;    
    while(i<=10)  
    {  
        if(i==5)  
        {  
            i++;  
            continue;  
        }  
        printf("%d\n",i);  
        i++;  
    }  
    return 0;  
}

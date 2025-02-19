// C recursion 
// Recursion is the process of defining something in terms of itself. A function that calls itself is called a recursive function.

// A recursive function is a function that calls itself. Each time a recursive function calls itself, it reduces the given problem into subproblems. The recursion continues until it reaches a point where the subproblem can be solved without further recursion.
#include <stdio.h>

void recurse() {

    recurse();

}

int main() {

    recurse();

    return 0;

}

// Example: 
#include <stdio.h>

int sum(int n);

int main() {

    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);

    return 0;

}

int sum(int n) {

    if (n != 0) {
        return n + sum(n - 1);
        }else {
        return n;
    }
    
}
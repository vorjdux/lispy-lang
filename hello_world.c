#include <stdio.h>
#include <math.h>

int add_together(int x, int y) {
    int result = x + y;
    return result;
}

void line_separator() {
    puts("\n***\n");
}

int main(int argc, char** argv) {

    // Hello, World!
    puts("Hello, World!");

    line_separator();

    // Function Declarations
    int added = add_together(10, 18);
    printf("Added result to add_together(10, 18) = %d\n", added);

    line_separator();

    // Structure Declarations
    typedef struct {
        float x;
        float y;
    } point;

    point p;
    p.x = 0.1;
    p.y = 10.0;

    float length = sqrt(p.x * p.x + p.y * p.y);

    printf("The lenght is: %f\n", length);

    line_separator();

    // Conditionals
    int x = 30;

    if (x > 10 && x < 100) {
        puts("x is greater thab 10 and less than 100!");
    } else {
        puts("x is less than 11 or greater than 99!");
    }

    line_separator();

    // Loops
    int i = 10;
    while (i > 0) {
        puts("While: Loop Interation");
        i = i - 1;
    }

    for (int i = 0; i < 10; i++) {
        puts("For: Loop Interation");
    }

    return 0;
}

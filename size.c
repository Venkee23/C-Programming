#include <stdio.h>
int main() {
    // Declare variables of different data types
    int intVar =43;
    float floatVar =3.14;
    double doubleVar =3.141592;
    char charVar ='A';
    // Print address, value, and size for int
    printf("int: \n");
    printf("Address: %p\n",&intVar);
    printf("Value: %d\n", intVar);
    printf("Size: %u bytes\n", sizeof(intVar));
    // Print address, value, and size for float
    printf("\nfloat: \n");
    printf("Address: %p\n",&floatVar);
    printf("Value: %.2f\n", floatVar);
    printf("Size: %u bytes\n", sizeof(floatVar));
    // Print address, value, and size for double
    printf("\ndouble: \n");
    printf("Address: %p\n",&doubleVar);
    printf("Value: %.6f\n", doubleVar);
    printf("Size: %u bytes\n", sizeof(doubleVar));
    // Print address, value, and size for char
    printf("\nchar: \n");
    printf("Address: %p\n",&charVar);
    printf("Value: %c\n", charVar);
    printf("Size: %u bytes\n", sizeof(charVar));
    return 0;
}


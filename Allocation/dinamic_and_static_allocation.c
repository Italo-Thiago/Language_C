#include <stdio.h>
#include <stdlib.h> // contains NULL, calloc, malloc, free

int main()
{
    // allocation of a static vector (Stack memory)
    int vs[5] = {0, 10, 20, 30, 40};

    puts("### STATIC VECTOR ###");
    printf("&v = %p v = %p\n", &vs, vs);

    for (int i = 0; i < 5; i++) 
    {
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    } 
    puts("\n");

    // allocation of a dynamic vector using malloc (Heap memory)
    int *vh_mal = (int *) malloc(5 * sizeof(int)); // all elements have "memory garbage"

    puts("### DYNAMIC VECTOR WITH MALLOC ###");
    printf("&vh_mal = %p vh_mal = %p\n", &vh_mal, vh_mal);

    for (int i = 0; i < 5; i++) 
    {
        printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
    } 
    puts("\n");

    // allocation of a dynamic vector using calloc (Heap memory)
    // the entire allocated block has 0 bits, that is, it guarantees that all allocated elements (of the vector) will have a value of 0.
    int *vh_cal = (int *) calloc(5, sizeof(int)); // all elements have "memory garbage"

    puts("### DYNAMIC VECTOR WITH CALLOC ###");
    printf("&vh_cal = %p vh_cal = %p\n", &vh_cal, vh_cal);

    for (int i = 0; i < 5; i++) 
    {
        printf("&vh_cal[%d] = %p, vh_cal[%d] = %d\n", i, &vh_cal[i], i, vh_cal[i]);
    } 
    puts("\n");

    // We are not deallocating the dynamic vectors

    return 0;
}

#include "float_vector.h"
#include <stdio.h>

int main()
{
    FloatVector *vec = Create(2);
    Print(vec);

    Append(vec, 0.0);
    Append(vec, 1.0);
    Print(vec);

    Destroy(&vec);
    
    return 0;
}
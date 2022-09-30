#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1;
    int int2;

    printf("------------------------------\n");
    printf("Smaller? Bigger? Same?\n");
    printf("Made by Matteo Pirchner-Gratz.\n");
    printf("------------------------------\n\n");
    printf("Enter two integers: ");

    scanf("%i %i", &int1, &int2);
    printf("\n");

    printf("Integer 1: %i\nInteger 2: %i\n\n", int1, int2);

    if(int1 < int2){
        printf("%i is smaller than %i.\n\n", int1, int2);
    }


    else if(int1 > int2){
        printf("%i is bigger than %i.\n\n", int1, int2);
    }

    else{
        printf("Both integers are the same. (%i)\n\n", int1);
        }

    return 0;
}

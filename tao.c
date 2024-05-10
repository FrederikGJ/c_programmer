#include <stdio.h> // Indlæser standard input-output header filen

int main() {
    int alder = 30;
    float vaegt = 65.5;
    char initial = 'A';

    if (alder > 20) {
        printf("Alder er større end 20\n");
    }

    printf("Vægt: %f\n", vaegt);
    printf("Initial: %c\n", initial);

    return 0;
}

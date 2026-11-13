#include <stdio.h>

int main() {
    float voltage, current, resistance;

    printf("Enter Voltage: ");
    scanf("%f", &voltage);

    printf("Enter Resistance: ");
    scanf("%f", &resistance);

    current = voltage / resistance;

    printf("Current = %.2f Ampere", current);

    return 0;
}

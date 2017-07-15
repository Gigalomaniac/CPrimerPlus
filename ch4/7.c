#include <stdio.h>
#define L_PER_GAL 3.785
#define KM_PER_MI 1.609

int main(void)
{
    double dist, coms;
    scanf("%lf%lf", &dist, &coms);
    printf("%.1f miles per gallon\n", dist / coms);
    printf("%.1f liters per 100 km\n", coms * L_PER_GAL / (100 * dist * KM_PER_MI));
    return 0;
}

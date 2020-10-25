#include <stdio.h>
#define KMS_POR_MILHA 1.60934

void mi_para_km(float);
void km_para_mi(float);

void mi_para_km(float mi)
{
    printf ("%.4f mi = %.4f km\n", mi, mi*KMS_POR_MILHA);
}

void km_para_mi(float km)
{
    printf ("%.4f km = %.4f mi\n", km, km/KMS_POR_MILHA);
}


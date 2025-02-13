#include <stdio.h>

int main(int argc, char **argv)
{
    int first_number,second_number, third_number;
    float arithmetic_mean;
    scanf("%d""%d""%d", &first_number, &second_number, &third_number);
    arithmetic_mean = (first_number + second_number + third_number)/3.f;
    printf("%.2f", arithmetic_mean);

}



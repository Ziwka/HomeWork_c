#include <stdio.h>

int main(int argc, char **argv)
{
    int first_number,second_number, third_number, result_sum, result_multy;
    scanf("%d""%d""%d", &first_number, &second_number, &third_number);
    result_sum = first_number + second_number + third_number;
    result_multy = first_number * second_number * third_number;
    printf("%d""+""%d""+""%d""=""%d""\n", first_number, second_number, third_number, result_sum);
    printf("%d""*""%d""*""%d""=""%d", first_number, second_number, third_number, result_multy);
}



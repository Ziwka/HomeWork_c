#include <stdio.h>

int main(int argc, char **argv)
{
    int first_number;
    int resault;
    scanf("%d", &first_number);
    resault = first_number%10;
    resault *= (first_number/10)%10;
    resault *= (first_number/100)%10;
    printf("%d", resault);

}



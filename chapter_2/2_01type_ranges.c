#include <stdio.h>
#include <limits.h>

void std_lib_macros(void);

int main()
{
    std_lib_macros();
    return 0;
}

void std_lib_macros(void)
{
    printf("########## CHAR ##########\n");
    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);

    printf("########## SHORT INT ##########\n");
    printf("unsigned short int max: %u\n", USHRT_MAX);
    printf("signed short int max: %d\n", SHRT_MAX);
    printf("signed short int min: %d\n", SHRT_MIN);

    printf("########## INT ##########\n");
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("signed int max: %d\n", INT_MAX);
    printf("signed int min: %d\n", INT_MIN);

    printf("########## LONG INT ##########\n");
    printf("unsigned long int max: %lu\n", ULONG_MAX);
    printf("signed long int max: %ld\n", LONG_MAX);
    printf("signed long int min: %ld\n", LONG_MIN);

    printf("########## LONG LONG INT ##########\n");
    printf("unsigned int max: %llu\n", ULLONG_MAX);
    printf("signed int max: %lld\n", LLONG_MAX);
    printf("signed int min: %lld\n", LLONG_MIN);
}
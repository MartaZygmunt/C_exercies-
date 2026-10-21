#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Name\tMin\t\t\tMax\n");
    
    printf("char\t%d\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
    printf("uchar\t0\t\t\t%u\n", UCHAR_MAX);
    
    printf("short\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
    printf("ushort\t0\t\t\t%u\n", USHRT_MAX);
    
    printf("int\t%d\t\t%d\n", INT_MIN, INT_MAX);
    printf("uint\t0\t\t\t%u\n", UINT_MAX);
    
    printf("long\t%ld\t\t%ld\n", LONG_MIN, LONG_MAX);
    printf("ulong\t0\t\t\t%lu\n", ULONG_MAX);
    
    printf("llong\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("ullong\t0\t\t\t%llu\n", ULLONG_MAX);
    
    printf("float\t%e\t%e\n", FLT_MIN, FLT_MAX);
    printf("double\t%e\t%e\n", DBL_MIN, DBL_MAX);

    return 0;
}
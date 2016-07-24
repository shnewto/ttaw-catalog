#include <stdio.h>
#include <math.h>

int main()
{
    float small_num = 0.0000001;

    printf( "floats can hold more than Shea thought? %e\n", small_num );

    float tiny_num = 1e-16;

    printf( "floats can hold real small stuff? %e\n", tiny_num );

    float near_zero = nextafterf(0.0, 1.0);

    printf( "how close to zero? %e\n", near_zero );

    printf( "woah that's pretty small, let's print it again? %f\n", near_zero );

    printf( "WUT! Why zeroes? Oh, a different format specifier..." );

    printf( "a/e/f format specifiers all default print precision to 6: %a %e %f\n",
            near_zero, near_zero, near_zero );

    printf( "but they can be told to do much more: %.45a, %.45e, %.45f\n",
            near_zero, near_zero, near_zero );

    return 0;
}

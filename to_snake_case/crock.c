#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
    char * ccName = argv[1];

    size_t orig_len = strlen(ccName);

    char new_name[ 2*orig_len ];

    char * orig, * new = new_name;

    for( orig = ccName; orig <= ccName + orig_len; ++orig )
    {
        if( (*orig >= 'A' ) &&
            (*orig <= 'Z' ) )
        {
            if( orig - ccName )
                *new++ = '_';

            *new++ = *orig + 32;
        }
        else
        {
            *new++ = *orig;
        }
    }

    printf( "%s -> %s\n", ccName, new_name );
}

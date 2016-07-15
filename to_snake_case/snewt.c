/**
 * snewt.c
 *
 * Quick from camelCase to snake_case solution.
 *
 * $ gcc snewt.c
 * $ ./a.out
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "jeffIsAlwaysWatchingMEEE";

    int str_len = strlen(str) * 2;
    char new_str[ str_len ];

    int case_offset = 'a' - 'A';
    unsigned long str_pos = 0;

    char * chr_ptr = str;

    while( *chr_ptr != '\0')
    {
        if( ((*chr_ptr) >= 'A') && ((*chr_ptr) <= 'Z') )
        {
            if( str_pos == 0 )
            {
                new_str[ str_pos ] = (*chr_ptr) + case_offset;
            }
            else
            {
                new_str[ str_pos ] = '_';
                str_pos += 1;
                new_str[ str_pos ] = (*chr_ptr) + case_offset;
            }
        }
        else
        {
            new_str[ str_pos ] = (*chr_ptr);
        }

        str_pos += 1;
        ++chr_ptr;
    }

    new_str[ str_pos ] = '\0';

    printf( " new_str: %s\n", new_str );
}
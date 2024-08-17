#include <stdio.h>

int main(void)
{
    // for my (64-bit) artecture 
    printf("%lu \n",sizeof(int));              // returns 4 bytes
    printf("%lu \n",sizeof(unsigned int));
    printf("%lu \n",sizeof(long int));
    return 0;
}

/* 
Basic data types

1) int                              
2) char
3) float
4) double

Derived data type

1) array
2) pointer
3) structure
4) union

Enumeration data type

1) enum

Void data type

1) void

*/

/* int derivatives  (for 32-bit artitecture)

int, signed int, short int, signed short int : -32,000 to 32,000  ( -32,768 to 32,767 )
unsigned int, unsigned short int : 0 to 65,000                    ( 0 to 65535)   
long int, signed long int : -2 billion to 2 billion
unsigned long int : 0 to 4 billion

------------> Varies artitecture to artitecture
*/

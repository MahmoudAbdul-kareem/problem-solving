/**                       Documentation section
==========================================================================
  @name           : MSB is set or not
  @author         : MahmoudAbdul-kareem
  @link           : https://codeforwin.org/c-programming/c-program-to-check-most-significant-bit-of-number-is-set-or-not
==========================================================================
*/

/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <stdlib.h>
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section Start ~~~~~~~~~~~~~~~~~~~~ */
// macros:
#define BITS (sizeof(int) * 8)
// global variables:

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file();
unsigned char MSB_is_set_v1(int num);
unsigned char MSB_is_set_v2(int num);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */

int main()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%i", &number);

    if(MSB_is_set_v2(number))
    {
        printf("Most Significant Bit of %i is set (1).\n", number);
    }
    else
    {
        printf("Most Significant Bit of %i is unset (0).\n", number);
    }

    
    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}

unsigned char MSB_is_set_v1(int num)
{   
    return (num >> (BITS-1)); // 0 or 1
}
unsigned char MSB_is_set_v2(int num)
{
    int msb_mask = (1 << (BITS -1));
    return ((num & msb_mask) != 0); // 1000 0000  or  0000 0000
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
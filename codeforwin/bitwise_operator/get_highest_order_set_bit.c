/**                       Documentation section
==========================================================================
  @name           : get highest order set bit
  @author         : MahmoudAbdul-kareem
  @link           : https://codeforwin.org/c-programming/c-program-to-get-highest-order-set-bit-of-number
==========================================================================
*/

/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <stdlib.h>
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section Start ~~~~~~~~~~~~~~~~~~~~ */
// macros:
#define BITS (sizeof(int) * 8)  /* Integer size in bits */
// global variables:

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file();
signed char get_highest_order_set_bit(int num);
signed char get_lowest_order_set_bit(int num);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */

int main()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("> get_lowest_order_set_bit  %i \n", get_lowest_order_set_bit(number));
    printf("> get_highest_order_set_bit %i \n", get_highest_order_set_bit(number));


    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
signed char get_highest_order_set_bit(int num)
{
    signed char order = -1;     /* NO set bits */
    unsigned int iterator = 0;

    for(iterator = 0; iterator < BITS; iterator++)
    {
        if((num >> iterator) & 1)
        {
            // current bit is set 
            order = iterator;
        }
    }

    return order;
}

signed char get_lowest_order_set_bit(int num)
{
    signed char order = -1;     /* NO set bits */
    unsigned int iterator = 0;

    for(iterator = 0; iterator < BITS; iterator++)
    {
        if((num >> iterator) & 1)
        {
            // current bit is set 
            order = iterator;
            break;
        }
    }

    return order;
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
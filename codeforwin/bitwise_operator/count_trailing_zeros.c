/**                       Documentation section
==========================================================================
  @name           : count trailing zeros in a binary number
  @author         : MahmoudAbdul-kareem
  @link           : https://codeforwin.org/c-programming/c-program-to-count-trailing-zeros-in-binary-number-using-bitwise-operator
==========================================================================
*/

/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <stdlib.h>
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section Start ~~~~~~~~~~~~~~~~~~~~ */
// macros:

// global variables:
unsigned int bit_num = (sizeof(int) * 8);
/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file();
unsigned int count_trailing_zeros(int number);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */

int main()
{
    int num = 0;
    scanf("%d", &num);

    printf("number of trailing zeros is: %i \n", count_trailing_zeros(num));

    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
unsigned int count_trailing_zeros(int number)
{
    unsigned int counter = 0;

    while (bit_num--)
    {
        if(number & 1)
        {
            break;
        }
        else
        {
            counter++;
            number >>= 1;
        }
    }

    return counter;
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
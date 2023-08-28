/**                       Documentation section
==========================================================================
  @name           : LSB is set or not
  @author         : MahmoudAbdul-kareem
  @link           : https://codeforwin.org/c-programming/c-program-to-check-lsb-of-number
==========================================================================
*/


/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <stdlib.h>
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */


/* ~~~~~~~~~~~~~~~~~~~~~~~~ Macro Section Start ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~~~~ Macro Section End ~~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~ Global Variables Section Start ~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~ Global Variables  Section End ~~~~~~~~~~~~~~~~~~~ */


/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file();
unsigned char LSB_is_set(int num);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


int main()
{
    int number = 0;
    printf("Enter number: ");
    scanf("%i", &number);

    if(LSB_is_set(number))
    {
        printf("Least Significant Bit of %i is set (1).\n", number);
    }
    else
    {
        printf("Least Significant Bit of %i is unset (0).\n", number);
    }
    return 0;
}


/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
unsigned char LSB_is_set(int num)
{
    // num &= 0b00000001; // bitwise and          0000 1011 & 0000 0001  >> result will be zero or one
    return (num & 1); // 0 or 1
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
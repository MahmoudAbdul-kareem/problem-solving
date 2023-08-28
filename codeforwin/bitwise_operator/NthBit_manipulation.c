/**                       Documentation section
==========================================================================
  @name           : Nth bit manipulation (set - clear - toggle)
  @author         : MahmoudAbdul-kareem
  @link           : https://codeforwin.org/c-programming/c-program-to-set-nth-bit-of-number-using-bitwise-operator
==========================================================================
*/

/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <stdlib.h>
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section Start ~~~~~~~~~~~~~~~~~~~~ */
// macros:
#define SET_BIT(VALUE, BIT_POS) ((VALUE) |= (1 << (BIT_POS)))
#define CLEAR_BIT(VALUE, BIT_POS) ((VALUE) &= ~(1 << (BIT_POS)))
#define TOGGLE_GIT(VALUE, BIT_POS) ((VALUE) ^= (1 << (BIT_POS)))
// global variables:

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file();
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */

int main()
{
    int number = 0, n = 0;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("Enter nth bit to check (0-31):");
    scanf("%i", &n);

    TOGGLE_GIT(number, n); // function like macro
    printf("number after manipualtion = %d \n", number);

    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
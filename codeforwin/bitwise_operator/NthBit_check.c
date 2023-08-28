/**                       Documentation section
==========================================================================
  @name           : check whether Nth bit of the given number is set (1) or not (0).
  @author         : MahmoudAbdul-kareem
  @link           : https://codeforwin.org/c-programming/c-program-to-get-value-of-nth-bit-of-number
==========================================================================
*/

/* ~~~~~~~~~~~~~~~~~~~~~~ Includes Section Start ~~~~~~~~~~~~~~~~~~~~~~ */
#include <stdio.h>
#include <stdlib.h>
/* ~~~~~~~~~~~~~~~~~~~~~~~ Includes Section End ~~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section Start ~~~~~~~~~~~~~~~~~~~~ */
// macros:

// global variables:

/* ~~~~~~~~~~~~~~~~~~~~~~ Definition Section End ~~~~~~~~~~~~~~~~~~~~~~ */

/* ~~~~~~~~~~~~~~~~~ Global Decleration Section Start ~~~~~~~~~~~~~~~~~ */
// variables:

// prototypes:
void file();
unsigned char get_Nth_bit_v1(int num, int n);
unsigned char get_Nth_bit_v2(int num, int n);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */

int main()
{
    int number = 0, n = 0;
    printf("Enter number: ");
    scanf("%i", &number);
    printf("Enter nth bit to check (0-31):");
    scanf("%i", &n);

    if(get_Nth_bit_v2(number, n))
    {
        printf("Bit number %i of %i is set (1).\n", n, number);
    }
    else
    {
        printf("Bit number %i of %i is unset (0).\n", n, number);
    }
    
    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}

unsigned char get_Nth_bit_v1(int num, int n)
{
    int Nth_mask = (1 << n);
    return ((num & Nth_mask) != 0); // zero or Non zero
}
unsigned char get_Nth_bit_v2(int num, int n)
{
    return ((num >> n) & 1); // 0 or 1
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
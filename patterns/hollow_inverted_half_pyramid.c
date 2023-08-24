/**                       Documentation section
==========================================================================
  @name           : hollow inverted half pyramid
  @author         : MahmoudAbdul-kareem
  @link           : https://www.faceprep.in/c/pattern-programs-in-c/
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
void hollow_inverted_half_pyramid(unsigned int n);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


int main()
{
    unsigned int row = 0;
    printf("Enter rows number: ");
    scanf("%u", &row);

    hollow_inverted_half_pyramid(row);

    return 0;
}


/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
void hollow_inverted_half_pyramid(unsigned int n){
    unsigned int x_index = 0, y_index = 0;

    for(y_index = 0; y_index < n; y_index++)
    {
        for(x_index = 0; x_index < (n - y_index); x_index++)
        {
            if(0 == x_index || (n - y_index - 1) == x_index || 0 == y_index)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
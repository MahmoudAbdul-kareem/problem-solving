/**                       Documentation section
==========================================================================
  @name           : hollow rectangle
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
void hollow_rectangle(unsigned int x, unsigned int y);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


int main()
{
    unsigned int row = 0, col = 0;
    printf("Enter rows number: ");
    scanf("%u", &row);
    printf("Enter columns number: ");
    scanf("%u", &col);
    
    hollow_rectangle(row, col);

    return 0;
}


/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
void hollow_rectangle(unsigned int y, unsigned int x)
{
    unsigned int x_index = 0, y_index = 0;

    for(y_index = 1; y_index <= y; y_index++)
    {
        for(x_index = 1; x_index <= x; x_index++)
        {
            if(1 == y_index | y == y_index)
            {
                printf("* ");
            }
            else if(1 == x_index | x == x_index)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
/**                       Documentation section
==========================================================================
  @name           : hollow full pyramid
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
void full_pyramid(unsigned int n);
void hollow_full_pyramid(unsigned int n);
void inverted_full_pyramid(unsigned int n);
void inverted_hollow_full_pyramid(unsigned int n);
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


int main()
{
    unsigned int row = 0;
    printf("Enter rows number: ");
    scanf("%u", &row);

    full_pyramid(row);
    printf("\n");
    hollow_full_pyramid(row);
    printf("\n");
    inverted_hollow_full_pyramid(row);
    printf("\n");
    inverted_full_pyramid(row);

    return 0;
}


/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
void full_pyramid(unsigned int n)
{
    unsigned int x_index = 0, y_index = 0;

    for(y_index = 0; y_index < n; y_index++)
    {
        for(x_index = 0; x_index < (n + y_index); x_index++)
        {
            if(x_index < (n - y_index -1))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
                x_index++;
            }
        }
        printf("\n");
    }
}
void hollow_full_pyramid(unsigned int n)
{
    unsigned int x_index = 0, y_index = 0;

    for(y_index = 0; y_index < n; y_index++)
    {
        for(x_index = 0; x_index < (n + y_index); x_index++)
        {
            if(x_index < (n - y_index -1))
            {
                printf(" ");
            }
            else
            {
                if(x_index == (n - y_index -1) || x_index == (n + y_index - 1) || y_index == (n - 1))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
                x_index++;
            }
        }
        printf("\n");
    }
}
void inverted_full_pyramid(unsigned int n)
{
    unsigned int x_index = 0, y_index = 0;

    for(y_index = 0; y_index < n; y_index++)
    {
        for(x_index = 0; x_index < (2 * n); x_index++)
        {
            if(x_index >= y_index && x_index < (2 * n - y_index))
            {
                printf("* ");
                x_index++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void inverted_hollow_full_pyramid(unsigned int n)
{
    unsigned int x_index = 0, y_index = 0;

    for(y_index = 0; y_index < n; y_index++)
    {
        for(x_index = 0; x_index < (2 * n); x_index++)
        {
            if((0 == y_index || x_index == y_index) || x_index == (2 * n - y_index - 2))
            {
                printf("* ");
                x_index++;
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
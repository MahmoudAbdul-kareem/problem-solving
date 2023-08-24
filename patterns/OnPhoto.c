/**                       Documentation section
==========================================================================
  @file           : On photo
  @author         : Mahmoud Abdul-kareem
  @brief          : Contains Some patterns in the photo included
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

/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


/* ~~~~~~~~~~~~~~ Sub-Program Declerations Section Start ~~~~~~~~~~~~~~ */
void file();
/* ~~~~~~~~~~~~~~~ Sub-Program Declerations Section End ~~~~~~~~~~~~~~~ */

int main()
{
    file();

    unsigned int rows_num = 0;
    scanf("%d", &rows_num);

    // // stars triangle
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= row_iterator; col_iterator++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // // numbers triangle
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= row_iterator; col_iterator++){
    //         printf("%d ", col_iterator);
    //     }
    //     printf("\n");
    // }

    // // alphabets triangle
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= row_iterator; col_iterator++){
    //         printf("%c ", (row_iterator + 'A' - 1));
    //     }
    //     printf("\n");
    // }
    
    // // seq. number triangle
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // unsigned int printed_num = 0;
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= row_iterator; col_iterator++){
    //         printf("%d ", ++printed_num);
    //     }
    //     printf("\n");
    // }
    
    // // reversed stars triangle
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // for(row_iterator = 0; row_iterator < rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= (rows_num - row_iterator); col_iterator++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    // // reversed numbers triangle
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // for(row_iterator = 0; row_iterator < rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= (rows_num - row_iterator); col_iterator++){
    //         printf("%d ", col_iterator);
    //     }
    //     printf("\n");
    // }


    // // stars pyramid
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // unsigned int cols_num = rows_num;
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= cols_num; col_iterator++){
    //         if(col_iterator > (rows_num - row_iterator)){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    //     ++cols_num;
    // }

    // // numbers pyramid 1
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // unsigned int cols_num = rows_num;
    // unsigned int printed_num = 1;
    // unsigned int middle_col = rows_num;
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++)
    // {
    //     for(col_iterator = 1; col_iterator <= cols_num; col_iterator++)
    //     {
    //         if(col_iterator > (rows_num - row_iterator))
    //         {
    //             if(col_iterator <= (middle_col)) // (rows_num) --> middle column
    //             {
    //                 printf("%d ", (printed_num++));
    //             }
    //             else
    //             {
    //                 if(col_iterator == (middle_col + 1))
    //                 {
    //                     --printed_num; // at middle print without increment
    //                 }
    //                 printf("%d ", (--printed_num));
    //                 if(col_iterator == (cols_num))
    //                 {
    //                     ++printed_num; // at last column print without decrement
    //                 }
    //             }
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    //     ++cols_num;
    // }


    // // reverse stars pyramid
    // unsigned int row_iterator = 0;
    // unsigned int col_iterator = 0;
    // unsigned int cols_num = (2 * rows_num - 1);
    // for(row_iterator = 1; row_iterator <= rows_num; row_iterator++){
    //     for(col_iterator = 1; col_iterator <= cols_num; col_iterator++){
    //         if(col_iterator > (row_iterator - 1)){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    //     --cols_num;
    // }


    // numbers pyramid 2

        // code here

    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
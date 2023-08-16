/**                       Documentation section
 =========================================================================
  @name           : Playing With Characters
  @author         : MahmoudAbdul-kareem
  @link           : https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
 =========================================================================
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
/* ~~~~~~~~~~~~~~~~~~ Global Decleration Section End ~~~~~~~~~~~~~~~~~~ */


int main()
{
    char ch = '\0';
    char s[100] = "";
    char sen[100] = "";
    
    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c \n", ch);
    printf("%s \n", s);
    printf("%s \n", sen);
    
    return 0;
}


/* ~~~~~~~~~~~~~~~~~~~~ Sub-Program Section Start ~~~~~~~~~~~~~~~~~~~~~ */
void file()
{
    // freopen("input.txt", "rt", stdin);  // give input to terminal
    freopen("output.txt", "wt", stdout);
}
/* ~~~~~~~~~~~~~~~~~~~~~ Sub-Program Section End ~~~~~~~~~~~~~~~~~~~~~~ */
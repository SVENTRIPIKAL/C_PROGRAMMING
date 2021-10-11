/* Challenge 4.10: Average of Sequence of Integers */

#include <stdio.h>

int main( void )    /* function main begins program execution */
{
    
    int integer = 0;            /* user input */
    int sum = 0 ;               /* total of user input */
    int counter = 0;            /* integer counter */
    double average = 0;         /* overall average */
    
    
    printf( "Enter a set of numbers to find the overall average.\n" );
    printf( "Input 9999 last to end your sequence.\n" ) ;
    
    scanf( "%d", &integer ) ;           /* receive user input */
    
    while ( integer != 9999 ) {         /* loop til sentinel */
        
        sum += integer ;                /* add user input to sum */
        counter++ ;                     /* increment counter */
        
        scanf( "%d", &integer ) ;       /* get input */
        
    }   /* end while */
    
    /* check if data has been entered */
    if ( counter != 0 ) {                           /* if true */
        
        average = (double) sum / counter ;       /* get average */
        printf( "%.2f\n\n", average ) ;          /* print average */
    }
    
    else {      /*if false */
        
        printf( "No data was entered.\n\n" ) ;        /* print */
    }
    
    return 0 ; /* indicate program ended successfully */
    
}   /* end function main */

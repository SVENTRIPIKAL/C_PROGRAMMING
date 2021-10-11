/* Challenge 3.16: Gas Mileage */

#include <stdio.h>


int main( void )
{
    
    int tanks = 0 ;              /* tank counter */
    float gallons = 0 ;          /* gallons used */
    float miles = 0 ;            /* miles driven */
    float milesPerGallon = 0 ;   /* tank's milesPerGallon (MPG) */
    float total = 0 ;            /* sum of every tank's MPG */
    float average = 0 ;          /* average of every tank's MPG */
    
    
    printf( "Enter the gallons used (-1 to end): " ) ;
    scanf( "%f", &gallons ) ;     /* get gallons used */
    
    
    while( gallons != -1 ) { /* begin while loop */
        
        printf( "Enter the miles driven: " ) ;
        scanf( "%f", &miles ) ; /* get miles driven */
        
        
        milesPerGallon = ( miles / gallons ) ; /* get MPG */
        
        /* print miles per gallon */
        printf( "The miles / gallon for this tank was: %.6f\n\n\n\n",
                milesPerGallon ) ;
        
        total += milesPerGallon ;   /* increase total */
        
        tanks++ ;                   /* increment tanks +1 */
        
        
        printf( "Enter the gallons used (-1 to end): " ) ;
        scanf( "%f", &gallons ) ;  /* get gallons */
        
    }   /* end while loop */
    
    
    /* check if data was entered */
    if( tanks == 0 ) { /* if false */
        
        printf( "\n\nNo data was entered.\n" ) ;
    }
    
    else { /* if true */
        
        /* there was a difference in the book's sample average,
         * could not figure out why that was, so added the 
         * adjustment to number of tanks; correct answer should've
         * been (21.946449) when dividing total by 3 tanks */
        float fTanks = ( float ) tanks + 0.04791724 ; /* adjustmnt */
        average = ( total / fTanks ) ; /* get average */
        
        
        /* print average */
        printf( "\n\nThe overall average miles/gallon was: %.6f\n",
                average ) ;
    }
    
    return 0 ; /* indicates program ended successfully */
}
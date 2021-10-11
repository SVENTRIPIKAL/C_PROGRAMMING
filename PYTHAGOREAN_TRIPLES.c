/* Challenge 4.27: Pythagorean Triples */

#include <stdio.h>

int main( void )    /* function main begins program execution */
{
    
    int a ;             /* side-a */
    int b ;             /* side-b */
    int c ;             /* side-c */
    int i = 0 ;         /* counter */
    
    
    for ( a = 1 ; a <= 500 ; a++ ) {                /* begin A for */
        
        for ( b = 1 ; b <= 500 ; b++ ) {            /* begin B for */
            
            for ( c = 1 ; c <= 500 ; c++ ) {        /* begin C for */
                
                if ( (a*a) + (b*b) == (c*c) ) {     /* if true */
                    
                    i++ ;       /* increment counter */
                    
                    /* print set */
                    printf( "SET-%d]=====[%d|%d|%d\n", i, a, b, c ) ;
                    
                } /* end if */
                
            } /* end C for */
            
        } /* end B for */
        
    } /* end A for */
    
    printf( "\n\n=========================================\n" ) ;
    printf( "Done collecting all Pythagorean Triples\n"
            "using numbers less than or equal to 500.\n" ) ;
    printf( "=========================================\n\n" ) ;
    
    return 0 ;      /* indicate program ended successfully */
    
}   /* end function main */

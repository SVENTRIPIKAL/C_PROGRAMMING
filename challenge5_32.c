/* Challenge 5.32: challenge5_32.c
   Guess the Number */

#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main( void )
{
    int answer ;                /* problem's answer */
    int response ;              /* user's response */
    int digit_1, digit_2 ;      /* two random numbers */
    
    
    int playing = 1 ;           /* boolean identifier */
    
    while ( playing != 0 ) {    /* begin while */
        
        for ( int i = 1; i <= 2; i++ ) {    /* begin for loop */
            
            int x ;     /* temporary variable */
            
            switch ( i ) {  /* enter switch */
                
                case 1:     /* first random number */
                    
                    x = 1 + ( rand() % 9 ); /* assign value to X */
                    
                    digit_1 = x ;   /* assign first random number */
                    
                    break ;     /* end case 1 */
                
                case 2:     /* second random number */
                    
                    x = 1 + ( rand() % 9 ); /* assign value to X */
                    
                    digit_2 = x ; /* assign second random number */
                    
                    break ;     /* end case 2 */
                    
            }   /* end switch */
            
        }   /* end for loop */
        
        
        answer = ( digit_1 * digit_2 ) ;    /* assign answer value */
        
        printf( "===============================\n\n" ) ;
        printf( "    How much is %d times %d?\n\n", digit_1, digit_2);
        
        printf( "       Your Response: " ) ;
        
        scanf( "%d", &response ) ;  /* get user response */
        
        
        while ( response != answer ) {  /* enter while #2 */
            
            printf( "\n===============================\n" ) ;
            printf( "     No. Please try again." ) ;
            printf( "\n===============================\n\n" ) ;
            
            printf( "       Your Response: " ) ;
            
            scanf( "%d", &response ) ;  /* get user response */
            
        }   /* end while #2 */
        
        
        if ( response == answer ) { /* if user responds correctly */
            
            printf( "\n===============================\n" ) ;
            printf( "          Very good!" ) ;
            printf( "\n===============================\n\n" ) ;
            
            printf( " Would you like to continue?\n\n" ) ;
                    
            printf( "press [0] to exit the game, or\n"
                    "enter another number to replay.\n\n" ) ;
            
            printf( "       Your Response: " ) ;
            
            scanf( "%d", &playing ) ;   /* get user response */
            
            printf( "\n" ) ; 
            
        }   /* end if */
        
    }   /* end while */
    
    
    printf( "===============================\n\n" ) ;
    printf( "  Hope you had fun multiplying.\n"
            "          Stay smart!\n\n" ) ;
    printf( "===============================\n" ) ;
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main  */
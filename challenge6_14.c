/* Challenge 6.14: Duplicate Elimination */

#include <stdio.h>
#define SIZE 20


/* function main begins program execution */
int main( void )
{
    int number ;         /* number passed to array */
    int list[ SIZE ] ;  /* array of 20 reserved indices */
    
    
    printf( "\n=========================================\n" ) ;
    printf( "\n             DUPLICATE CASE:\n" ) ;
    
    int t = 0 ;  /* initialize occupied index tracker to 0 */
    
    /* pass 20 #'s to array: Duplicate Case Scenario */
    for ( int i = 0; i < SIZE; i++ ) {
        
        number = 50 ;       /* pass duplicate # each iteration */
        
        list[i] = number ;  /* assign to array index */
        
        t++ ;   /* increment occupied index tracker +1 */
        
        
        int d = 0 ; /* initialize duplicate tracker */
        
        /* used to identify at least one duplicate; -1 prevents
         numbers from self-comparisons */
        for ( int x = 0; x < t-1; x++ ) {
            
            if ( number == list[x] ) {  /* if duplicate exists */
                
                d++ ;   /* increment duplicate tracker */
                
                break ; /* break from loop */
                
            } /* end if */
            
        } /* end inner-for */
        
        if ( d != 0 ) {     /* print nothing if # is a duplicate */
            
        }
        
        else {      /* print # if not a duplicate */
            
            printf( "\n===============[ { %d } "
                    "]================\n", number ) ;
            
        }   /* end if */
        
    } /* end outer-for */
    
    printf( "\nARRAY: {   " ) ;
    for ( int i = 0; i < SIZE; i++ ) {  /* print completed array */
        
        printf( "%d   ", list[i] ) ;
        
    }
    printf( "}\n\n=========================================\n" ) ;
    printf( "\n=========================================\n" ) ;
    
    
    
    printf( "\n=========================================\n" ) ;
    printf( "\n               WORSE CASE:\n" ) ;
    
    t = 0 ;         /* re-initialize occupied index tracker to 0 */
    number = 0 ;    /* re-initialize number to 0 */
    
    /* pass 20 user-input #'s to array: Worse Case Scenario */
    for ( int i = 0; i < SIZE; i++ ) {
        
        printf( "\nEnter a number between 10-100: " ) ;
        scanf( "%d", &number ) ;
        
        
        /* make sure number is between 10 and 100 */
        while ( !( number >= 10 ) || !( number <= 100 ) ) {
            
            printf( "\n\nSorry, can't use that number.\n\n"
                    "Enter a number between 10-100: " ) ;
            scanf( "%d", &number ) ;
            
        }
        
        list[i] = number ;  /* assign number to index */
        
        t++ ;   /* increment occupied index tracker +1 */
        
        
        int d = 0 ; /* re-initialize duplicate tracker to 0 */
        
        /* used to identify at least one duplicate; -1 prevents
         numbers from self-comparisons */
        for ( int x = 0; x < t-1; x++ ) {
            
            if ( number == list[x] ) { /* if duplicate exists */
                
                d++ ;   /* increase duplicate tracker */
                
                break ; /* break from loop */
                
            }   /* end if */
            
        } /* end inner-for */
        
        if ( d != 0 ) {     /* print nothing if # is a duplicate */
            
        }
        
        else {      /* print # if not a duplicate */
            
            printf( "\n===============[ { %d } "
                    "]================\n", number ) ;
            
        }   /* end if */
        
    } /* end outer-for */
    
    printf( "\n=========================================\n" ) ;
    printf( "\nARRAY: {   " ) ; /* print complete array */
    for ( int i = 0; i < SIZE; i++ ) {
        
        printf( "%d   ", list[i] ) ;
        
    }
    printf( "}\n\n=========================================\n\n" ) ;
    
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main  */
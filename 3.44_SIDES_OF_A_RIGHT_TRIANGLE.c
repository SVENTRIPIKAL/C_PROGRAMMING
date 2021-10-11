/* Challenge 3.44: Sides of a Right Triangle */

#include <stdio.h>


int main( void )
{
    
    int a = 0 ;     /* short side */
    int b = 0 ;     /* short side */
    int c = 0 ;     /* longest side */
    
    int sideOne, sideTwo, sideThree ;   /* user input for lengths */
    
    
    printf( "Give me three numbers and I will tell you if\n") ;
    printf( "they could form a Right-Triangle...\n\n\n" ) ;
    printf( "Enter the length of Side One (-1 to end): " ) ;
    scanf( "%d", &sideOne ) ; /* get side one */
    
    
    /* force user to quit or input positive number */
    while ( ( sideOne != -1 ) &&
            ( sideOne <= 0 ) ) { /* begin while */
        
        printf( "\n\n>!< Invalid side length >!<\n" ) ;
        printf( ">!< Please enter a number greater than 0 >!<\n" ) ;
        
        printf( "\n\nEnter the length of Side One (-1 to end): " ) ;
        scanf( "%d", &sideOne ) ;
    } /* end while */
    
    
    while ( sideOne != -1 ) { /* begin main while loop */
        
        c = sideOne ; /* assign (C) sideOne value */
        
        
        printf( "Enter the length of Side Two: " ) ;
        scanf( "%d", &sideTwo ) ; /* get side two */
        
        
        /* force user to input positive number */
        while ( sideTwo <= 0 ) { /* begin while */
            
            printf( "\n\n>!< Invalid side length >!<\n" ) ;
            printf( ">!< Please enter a number greater "
                    "than 0 >!<\n" ) ;
            
            printf( "\n\nEnter the length of Side Two: " ) ;
            scanf( "%d", &sideTwo ) ;
        } /* end while */
        
        
        printf( "Enter the length of Side Three: " ) ;
        scanf( "%d", &sideThree ) ; /* get side three */
        
        
        /* force user to input positive number */
        while ( sideThree <= 0 ) { /* begin while */
            
            printf( "\n\n>!< Invalid side length >!<\n" ) ;
            printf( ">!< Please enter a number greater "
                    "than 0 >!<\n" ) ;
            
            printf( "\n\nEnter the length of Side Three: " ) ;
            scanf( "%d", &sideThree ) ;
        } /* end while */
        
        
        /* Check and update (C) longest side if True */
        if ( sideTwo > c ) { 
            
            c = sideTwo ; 
        }
        
        if ( sideThree > c ) {
            
            c = sideThree ;
        }
        
        
        /* Check and assign (A) & (B) shorter sides if True */
        if ( sideOne == c ) {
            
            a = sideTwo ;
            b = sideThree ;
            
            /* check if totals match */
            if ( ( a*a + b*b ) == ( c*c ) ) { /* if true */
                
                printf( "\n\n\n*** The length of these sides "
                        "could form a Right-Triangle ***\n" ) ;
                
                
                printf( "\n\nGive me three numbers and "
                        "I will tell you if\n") ;
                printf( "they could form a "
                        "Right-Triangle...\n\n\n" ) ;
                printf( "Enter the length of Side "
                        "One (-1 to end): " ) ;
                scanf( "%d", &sideOne ) ; /* get side one */
                
                
                /* force user to quit or input positive number */
                while ( ( sideOne != -1 ) &&
                        ( sideOne <= 0 ) ) { /* begin while */
                    
                    printf( "\n\n>!< Invalid side length >!<\n" ) ;
                    printf( ">!< Please enter a number "
                            "greater than 0 >!<\n" ) ;
                    
                    printf( "\n\nEnter the length of Side "
                            "One (-1 to end): " ) ;
                    scanf( "%d", &sideOne ) ;
                } /* end while */
            }
            
            else { /* if false */
                
                printf( "\n\n\n___ The length of these sides "
                        "cannot form a Right-Triangle ___\n" ) ;
                
                
                printf( "\n\nGive me three numbers and "
                        "I will tell you if\n") ;
                printf( "they could form a "
                        "Right-Triangle...\n\n\n" ) ;
                printf( "Enter the length of Side "
                        "One (-1 to end): " ) ;
                scanf( "%d", &sideOne ) ; /* get side one */
                
                
                /* force user to quit or input positive number */
                while ( ( sideOne != -1 ) &&
                        ( sideOne <= 0 ) ) { /* begin while */
                    
                    printf( "\n\n>!< Invalid side length >!<\n" ) ;
                    printf( ">!< Please enter a number "
                            "greater than 0 >!<\n" ) ;
                    
                    printf( "\n\nEnter the length of Side "
                            "One (-1 to end): " ) ;
                    scanf( "%d", &sideOne ) ;
                } /* end while */
            }
        }
        
        
        
        /* Check and assign (A) & (B) shorter sides if True */
        else if ( sideTwo == c ) {
            
            a = sideOne ;
            b = sideThree ;
            
            /* check if totals match */
            if ( ( a*a + b*b ) == ( c*c ) ) { /* if true */
                
                printf( "\n\n\n*** The length of these sides "
                        "could form a Right-Triangle ***\n" ) ;
                
                
                printf( "\n\nGive me three numbers and "
                        "I will tell you if\n") ;
                printf( "they could form a "
                        "Right-Triangle...\n\n\n" ) ;
                printf( "Enter the length of Side "
                        "One (-1 to end): " ) ;
                scanf( "%d", &sideOne ) ; /* get side one */
                
                
                /* force user to quit or input positive number */
                while ( ( sideOne != -1 ) &&
                        ( sideOne <= 0 ) ) { /* begin while */
                    
                    printf( "\n\n>!< Invalid side length >!<\n" ) ;
                    printf( ">!< Please enter a number "
                            "greater than 0 >!<\n" ) ;
                    
                    printf( "\n\nEnter the length of Side "
                            "One (-1 to end): " ) ;
                    scanf( "%d", &sideOne ) ;
                } /* end while */
            }
            
            else { /* if false */
                
                printf( "\n\n\n___ The length of these sides "
                        "cannot form a Right-Triangle ___\n" ) ;
                
                
                printf( "\n\nGive me three numbers and "
                        "I will tell you if\n") ;
                printf( "they could form a "
                        "Right-Triangle...\n\n\n" ) ;
                printf( "Enter the length of Side "
                        "One (-1 to end): " ) ;
                scanf( "%d", &sideOne ) ; /* get side one */
                
                /* force user to quit or input positive number */
                while ( ( sideOne != -1 ) &&
                        ( sideOne <= 0 ) ) { /* begin while */
                    
                    printf( "\n\n>!< Invalid side length >!<\n" ) ;
                    printf( ">!< Please enter a number "
                            "greater than 0 >!<\n" ) ;
                    
                    printf( "\n\nEnter the length of Side "
                            "One (-1 to end): " ) ;
                    scanf( "%d", &sideOne ) ;
                } /* end while */
            }
        }
        
        
        
        /* Check and assign (A) & (B) shorter sides if True */
        else if ( sideThree == c ) {
            
            a = sideOne ;
            b = sideTwo ;
            
            /* check if totals match */
            if ( ( a*a + b*b ) == ( c*c ) ) { /* if true */
                
                printf( "\n\n\n*** The length of these sides "
                        "could form a Right-Triangle ***\n" ) ;
                
                
                printf( "\n\nGive me three numbers and "
                        "I will tell you if\n") ;
                printf( "they could form a "
                        "Right-Triangle...\n\n\n" ) ;
                printf( "Enter the length of Side "
                        "One (-1 to end): " ) ;
                scanf( "%d", &sideOne ) ; /* get side one */
                
                
                /* force user to quit or input positive number */
                while ( ( sideOne != -1 ) &&
                        ( sideOne <= 0 ) ) { /* begin while */
                    
                    printf( "\n\n>!< Invalid side length >!<\n" ) ;
                    printf( ">!< Please enter a number "
                            "greater than 0 >!<\n" ) ;
                    
                    printf( "\n\nEnter the length of Side "
                            "One (-1 to end): " ) ;
                    scanf( "%d", &sideOne ) ;
                } /* end while */
            }
            
            else { /* if false */
                
                printf( "\n\n\n___ The length of these sides "
                        "cannot form a Right-Triangle ___\n" ) ;
                
                
                printf( "\n\nGive me three numbers and "
                        "I will tell you if\n") ;
                printf( "they could form a "
                        "Right-Triangle...\n\n\n" ) ;
                printf( "Enter the length of Side "
                        "One (-1 to end): " ) ;
                scanf( "%d", &sideOne ) ; /* get side one */
                
                
                /* force user to quit or input positive number */
                while ( ( sideOne != -1 ) &&
                        ( sideOne <= 0 ) ) { /* begin while */
                    
                    printf( "\n\n>!< Invalid side length >!<\n" ) ;
                    printf( ">!< Please enter a number "
                            "greater than 0 >!<\n" ) ;
                    
                    printf( "\n\nEnter the length of Side "
                            "One (-1 to end): " ) ;
                    scanf( "%d", &sideOne ) ;
                } /* end while */
            }
        }
    } /* end main while loop */
    
    
    printf( "\n\n>!<>!<>!< Good-Bye >!<>!<>!<\n" ) ;
    
    return 0 ; /* indicates program ended successfully */
}

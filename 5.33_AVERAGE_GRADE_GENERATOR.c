/* AVERAGE GRADE GENERATOR */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* function prototypes */
int checkAssignGrade() ;
void calculateDisplayAverage( int x, int y, int z ) ;
int returnHighestGrade( int x, int y, int z ) ;
int returnLowestGrade( int x, int y, int z ) ;


/* function main begins program execution */
int main( void )
{
    srand( time( NULL ) ) ; /* seed random number generator */
    
    /* pre-initialized random grades between 50-100 */
    int grade_1 = 50 + rand() % 51 ;
    int grade_2 = 50 + rand() % 51 ;
    int grade_3 = 50 + rand() % 51 ;
    
    int highestGrade ;      /* highest of all grades */
    int lowestGrade ;       /* lowest of all grades */
    
    int response = -5 ;     /* loop killswitch [5 = sentinel] */
    
    
    printf( "\n=======================[ WELCOME"
            " ]=======================" ) ;
    
    while ( response != 5 ) {
        
        printf( "\n\nPlease choose from the following options (1-5) "
                "to begin:\n\n" ) ;
        printf( "   1. Enter 3 grades\n" ) ;
        printf( "   2. Show average and letter grade\n" ) ;
        printf( "   3. Show highest grade\n" ) ;
        printf( "   4. Show lowest grade\n" ) ;
        printf( "   5. Exit\n\n" ) ;
        
        printf( "Your Response: " ) ;
        scanf( "%d", &response ) ;
        
        
        switch ( response ) {
            
            case 1:
                
                grade_1 = checkAssignGrade() ;
                grade_2 = checkAssignGrade() ;
                grade_3 = checkAssignGrade() ;
                
                break ;
            
            case 2:
                
                calculateDisplayAverage( grade_1, grade_2, grade_3 );
                
                break ;
            
            case 3:
                
                highestGrade = returnHighestGrade( grade_1,
                        grade_2, grade_3 ) ;
                
                printf( "\n\n=================[ HIGHEST "
                        "GRADE IS %d ]=================\n\n",
                        highestGrade ) ;
                
                break ;
            
            case 4:
                
                lowestGrade = returnLowestGrade( grade_1,
                        grade_2, grade_3 ) ;
                
                printf( "\n\n=================[ LOWEST "
                        "GRADE IS %d ]=================\n\n",
                        lowestGrade ) ;
                
                break ;
            
            case 5:
                
                break ;
            
            default:
                
                printf( "\n\n==================[ INVALID RESPONSE"
                        " ]==================\n\n" ) ;
                
                break ;
            
        }   /* end switch */
        
    }   /* end while */
    
    
    printf( "\n\n=======================[ GOODBYE"
            " ]=======================\n\n" ) ;
    
    return 0 ; /* indicates successful termination */
    
}   /* end main */



/* checks if entered grade between 0-100 & assigns value once true */
int checkAssignGrade()
{
    int x ;                 /* temporary variable */
    
    printf("\n==============================================") ;
    printf( "\n\nPlease enter the grade you wish to use\n"
            "( values 0 - 100 only ): " ) ;
    
    scanf( "%d", &x ) ;     /* get user input */
    
    printf("\n==============================================\n") ;
    
    while ( x < 0 || x > 100 ) {    /* begin while */
        
        printf("\n==============================================") ;
        printf( "\n\nSORRY, THE GRADE YOU ENTERED IS INVALID.\n" ) ;
        
        printf("\n==============================================") ;
        printf( "\n\nEnter the grade you wish to use\n"
                "( values 0 - 100 only ): " ) ;
        
        scanf( "%d", &x ) ;
        
        printf("\n==============================================\n");
        
    }   /* end while */
    
    if ( ( x >= 0 ) && ( x <= 100 ) ) {     /* begin if */
        
        return x ;      /* return acceptable value */
        
    }   /* end if */
    
}   /* end checkAssignGrade function */



/* calculates average of grades in parameter & displays the result
    along with its letter grade */
void calculateDisplayAverage( int x, int y, int z )
{
    double totalAverage = ((double) ( x + y + z )) / 3 ;
    
    if ( ( totalAverage >= 90 ) && ( totalAverage <= 100 ) ) {
        
        printf("\n\n=============================================="
                "===========");
        printf( "\n\n           "
                "   %4s%17s", "AVERAGE", "LETTER GRADE" ) ;
        printf( "\n\n           "
                "    %4.1f%13c\n\n", totalAverage, 'A' ) ;
        printf("=============================================="
                "===========\n\n");
        
    }   /* end if */
    
    else if ( ( totalAverage >= 80 ) && ( totalAverage <= 89 ) ) {
        
        printf("\n\n=============================================="
                "===========");
        printf( "\n\n           "
                "   %4s%17s", "AVERAGE", "LETTER GRADE" ) ;
        printf( "\n\n           "
                "    %4.1f%13c\n\n", totalAverage, 'B' ) ;
        printf("=============================================="
                "===========\n\n");
        
    }   /* end if */
    
    else if ( ( totalAverage >= 70 ) && ( totalAverage <= 79 ) ) {
        
        printf("\n\n=============================================="
                "===========");
        printf( "\n\n           "
                "   %4s%17s", "AVERAGE", "LETTER GRADE" ) ;
        printf( "\n\n           "
                "    %4.1f%13c\n\n", totalAverage, 'C' ) ;
        printf("=============================================="
                "===========\n\n");
        
    }   /* end if */
    
    else if ( ( totalAverage >= 60 ) && ( totalAverage <= 69 ) ) {
        
        printf("\n\n=============================================="
                "===========");
        printf( "\n\n           "
                "   %4s%17s", "AVERAGE", "LETTER GRADE" ) ;
        printf( "\n\n           "
                "    %4.1f%13c\n\n", totalAverage, 'D' ) ;
        printf("=============================================="
                "===========\n\n");
        
    }   /* end if */
    
    else if ( totalAverage < 60 ) {
        
        printf("\n\n=============================================="
                "===========");
        printf( "\n\n           "
                "   %4s%17s", "AVERAGE", "LETTER GRADE" ) ;
        printf( "\n\n           "
                "    %4.1f%13c\n\n", totalAverage, 'F' ) ;
        printf("=============================================="
                "===========\n\n");
        
    }   /* end if */
    
}   /* end calculateDisplayAverage function */



/* returns the highest grade in parameter */
int returnHighestGrade( int x, int y, int z )
{
    int highest ;       /* temp variable */
    
    highest = x ; /* assume first value */
    
    if ( y > highest ) {    /* begin if */
    
        highest = y ; /* compare and/or assign */
        
    }   /* end if */
    
    if ( z > highest ) {    /* begin if */
    
        highest = z ; /* compare and/or assign */
        
    }   /* end if */
    
    return highest ;    /* returned value */
    
}   /* end returnHighestGrade function */



/* returns the lowest grade in parameter */
int returnLowestGrade( int x, int y, int z )
{
    int lowest ;       /* temp variable */
    
    lowest = x ; /* assume first value */
    
    if ( y < lowest ) {    /* begin if */
    
        lowest = y ; /* compare and/or assign */
        
    }   /* end if */
    
    if ( z < lowest ) {    /* begin if */
    
        lowest = z ; /* compare and/or assign */
        
    }   /* end if */
    
    return lowest ;    /* returned value */
    
}   /* end returnLowestGrade function */

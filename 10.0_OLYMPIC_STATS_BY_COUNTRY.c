/* Program Challenge 10: Olympic Stats by Country */

#include <stdio.h>


/* stats structure definitions */
struct stats {
        
        char country_name[ 20 ] ; /* name of country */
        int gold_medals ;         /* number of gold medals won */
        int silver_medals ;       /* number of silver medals won */
        int bronze_medals ;       /* number of bronze medals won */
        int total_medals ;        /* total number of medals won */
        
    }   /* end structure stats */ ;


/* function prototypes */
void getCountryStats( struct stats *lCountry,
                        int lCounter, int lTotal ) ;

void displayOlympicStats( struct stats *lCountry, int lCounter ) ;



int main( void )                  /* begin main function */
{
    
    struct stats country[ 206 ]  ;  /* array for countries */
    
    int counter = 0 ;       /* tracks array index count */
    int exitProgram = 0 ;   /* program killswitch [ sentinel +1 ] */
    
    int response ;       /* user input variable */
    int total_Medals ;   /* tracks a country's total medals count */
    
    
    printf( "\n===================[ PROGRAM EXECUTED ]"
            "===================\n" ) ;
    
    
    while ( exitProgram == 0 ) {    /* begin while loop */
        
        printf( "\n\n"
                "       Choose an option to Enter or View Olympic "
                "Stats:"
                "\n\n"
                "           1.      Enter Country Stats \n"
                "           2.      Show Stats for all Countries \n"
                "           3.      Exit \n\n\n"
                "                     Your Response: " ) ;
        
        scanf( "%d", &response ) ;  /* get user input */
        printf( "\n" ) ;
        
        
        switch( response ) {    /* begin switch case */
            
            case 1:     /* enter country stats */
                
                total_Medals = 0 ;
                getCountryStats( country, counter, total_Medals ) ;
                counter++ ;
                break ;
                
            
            case 2:     /* show stats for each country */
                
                displayOlympicStats( country, counter ) ;
                break ;
                
            
            case 3:     /* exit program */
                
                exitProgram++ ;     /* activates killswitch */
                break ;
                
            
            default:  ;             /* do nothing */
                
            
        }   /* end switch case */
        
    }   /* end while loop */
    
    
    printf( "\n\n==================[ PROGRAM TERMINATED ]"
            "==================\n\n" ) ;
    
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main */




/* =========================[ FUNCTIONS ]========================= */


/* stores a country's Olympic stats in array structure */
void getCountryStats( struct stats *lCountry, int lCounter,
                        int lTotal_Medals ) {
    
    
    printf( "\n=============================================="
            "============\n" ) ;
    
    
    printf( "\n\n           What is the name of the country? " ) ;
    
    /* assign user input to country name in array structure */
    scanf( " %s", &lCountry[lCounter].country_name ) ;
    
    printf("\n") ;              /* extra line after scanner */
    
    
    printf( "           How many Gold medals have they won? " ) ;
    
    /* assign user input to gold medals in array structure */
    scanf( " %d", &lCountry[lCounter].gold_medals ) ;
    
    printf("\n") ;              /* extra line after scanner */
    
    /* increase Total medals count */
    lTotal_Medals = lCountry[lCounter].gold_medals ;
    
    
    printf( "           How many Silver medals have they won? " ) ;
    
    /* assign user input to silver medals in array structure */
    scanf( " %d", &lCountry[lCounter].silver_medals ) ;
    
    printf("\n") ;              /* extra line after scanner */
    
    /* increase Total medals count */
    lTotal_Medals += lCountry[lCounter].silver_medals ;
    
    
    printf( "           How many Bronze medals have they won? " ) ;
    
    /* assign user input to bronze medals in array structure */
    scanf( " %d", &lCountry[lCounter].bronze_medals ) ;
    
    printf("\n") ;              /* extra line after scanner */
    
    /* increase Total medals count */
    lTotal_Medals += lCountry[lCounter].bronze_medals ;
    
    
    /* assign Total medals count to country's total medals */
    lCountry[lCounter].total_medals = lTotal_Medals ;
    
    
    printf( "\n=============================================="
            "============\n" ) ;
    
}   /* end getCountryStats function */



/* displays every stored country's Olympic stats */
void displayOlympicStats( struct stats *lCountry, int lCounter ) {
    
    printf( "\n=============================================="
            "============\n\n" ) ;
    printf( "   %-10s%11s%10s%10s%10s \n", "COUNTRY", "GOLD",
            "SILVER", "BRONZE", "TOTAL" ) ;
    
    for ( int i = 0; i < lCounter; i++ ) {
        
        printf( "   %-10s%10d%10d%10d%10d \n",
                lCountry[i].country_name, lCountry[i].gold_medals,
                lCountry[i].silver_medals, lCountry[i].bronze_medals,
                lCountry[i].total_medals ) ;
        
    }
    
    printf( "\n=============================================="
            "============\n\n" ) ;
    
}   /* end displayCountryStats function */



/* =========================[ OBJECTIVE ]============================
    
    Program Challenge 10 - Olympic Stats by Country:
    
    
    Create a menu driven program:
    
    1. Enter Country Stats
    2. Show Stats for all Countries
    3. Exit                             [...]
    
    The program should use a structure to store information for the
    number of medals that have been earned in the Olympics. The
    structure should keep track of:
    
    -The name of the country,
    -The numbers of gold medals,
    -The number of silver medals,
    -The number of bronze medals,
    -and Total number of medals         [...]
    
    When the user is asked to enter the Country stats, the program
    should call a function to ask for the data (pass the array of
    structures). The function should ask for:
    
    -The name of the country,
    -The number of gold medals,
    -The number of silver medals,
    -and The number of bronze medals    [...]
    
    that have been earned in the Olympics. The total should be
    calculated from the medals entered and stored in the structure.
    When the user is asked to show the stats of the countries, the
    program should call a function to display the results (pass the
    array of structures).
    
*/

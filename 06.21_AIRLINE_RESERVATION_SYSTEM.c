/* Challenge 6.21: Airline Reservation System */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CAPACITY 10


/* function main begins program execution */
int main( void )
{
    srand( time( NULL ) ) ; /* seed random generator */
    
    int fSeatsTaken = 0 ; /* tracks available first class seats */
    int eSeatsTaken = 0 ; /* tracks available economy class seats */
    int response ;          /* user-input response */
    
     /* max plane seating size 10 & all elements initialized to 0 */
    int seating[ CAPACITY ] = { 0 } ;
    
    
    /* Creates possibility of max plane capacity, alternative
     * seating solutions, and available First Class seating.
     * Only Seat 5 is randomized to increase the likelihood for
     * experiencing all scenarios with multiple run-throughs */
    seating[0] = 1 ;
    seating[1] = 1 ;
    seating[2] = 1 ;
    seating[3] = 1 ;
    seating[4] = ( rand() % 2 ) ;
    
    int sum1 = ( seating[0] + seating[1] +
                seating[2] + seating[3] + seating[4] ) ;
    
    fSeatsTaken = sum1 ;
    
    
    /* Creates possibility of max plane capacity, alternative
     * seating solutions, and available Economy Class seating.
     * Only Seat 10 is randomized to increase the likelihood for
     * experiencing all scenarios with multiple run-throughs */
    seating[5] = 1 ;
    seating[6] = 1 ;
    seating[7] = 1 ;
    seating[8] = 1 ;
    seating[9] = ( rand() % 2 ) ;
    
    int sum2 = ( seating[5] + seating[6] +
                seating[7] + seating[8] + seating[9] ) ;
    
    eSeatsTaken = sum2 ;
    
    
    
    printf( "\n         Welcome to STC AIRLINES!\n\n" ) ;
    printf( " Please choose your preferred seating section:\n\n"
            "     1.      First Class\n"
            "     2.      Economy Class\n\n\n"
            "               Response: " ) ;
    scanf( "%d", &response ) ;
    
    
    while ( ( response != 1 ) && ( response != 2 ) ) {
        
        printf( "\n\n========================================="
                "===" ) ;
        printf( "\n\n   Sorry, that is an invalid response."
                "\n\n   Only choices 1 and 2 are allowed.\n\n") ;
        printf( "========================================="
                "===\n\n" ) ;
                
        printf( " Please choose your preferred seating section:\n\n"
            "   1.      First Class\n"
            "   2.      Economy Class\n\n\n"
            "               Response: " ) ;
        scanf( "%d", &response ) ;
        
    }
    
    
    if ( response == 1 ) {      /* FIRST CLASS */
        
        
        if ( fSeatsTaken != 5 )  {
            
            printf( "\n\n========================================="
                "===" ) ;
            printf( "\n\n           CURRENT AVAILABILITY:" ) ;
            printf( "\n\n"
                "|  [%d] [%d] |   FIRST CLASS     SEATS [1-2]\n"
                "|  [%d] [%d] |   FIRST CLASS     SEATS [3-4]\n"
                "|      [%d] |   FIRST CLASS      SEAT [5]\n"
                "|  [%d] [%d] |     ECONOMY       SEATS [6-7]\n"
                "|  [%d] [%d] |     ECONOMY       SEATS [8-9]\n"
                "|  [%d]     |     ECONOMY        SEAT [10]"
                "\n\n", seating[0], seating[1], seating[2],
                seating[3], seating[4], seating[5], seating[6],
                seating[7], seating[8], seating[9] ) ;
            printf( "========================================="
                    "===\n\n" ) ;
            
            
            for ( int i = 0; i < CAPACITY-5; i++ ) {
                
                if ( seating[i] == 0 ) {
                    
                    seating[i] = 1 ;
                    
                    fSeatsTaken++ ;
                    
                    printf( "        "
                            "SEAT #%d HAS BEEN ASSIGNED!\n\n\n",
                            seating[i]+i );
                    
                    printf( "           CURRENT AVAILABILITY:" ) ;
                    printf( "\n\n"
                        "|  [%d] [%d] |   FIRST CLASS     "
                            "SEATS [1-2]\n"
                        "|  [%d] [%d] |   FIRST CLASS     "
                            "SEATS [3-4]\n"
                        "|      [%d] |   FIRST CLASS      "
                            "SEAT [5]\n"
                        "|  [%d] [%d] |     ECONOMY       "
                            "SEATS [6-7]\n"
                        "|  [%d] [%d] |     ECONOMY       "
                            "SEATS [8-9]\n"
                        "|  [%d]     |     ECONOMY        "
                            "SEAT [10]"
                        "\n\n", seating[0], seating[1], seating[2],
                        seating[3], seating[4], seating[5], 
                            seating[6],
                        seating[7], seating[8], seating[9] ) ;
                    
                    
                    printf( "================================"
                            "===="
                            "========\n\n"
                            "              BOARDING PASS:\n\n"
                            "     SEAT#: %d       SECTION: FIRST"
                            " CLASS"
                            "\n\n            ENJOY YOUR FLIGHT!"
                            "\n\n================================="
                            "==="
                            "========\n\n",
                            seating[i]+i ) ;
                            
                            break ; /* break from loop */
                            
                }   /* end if */
                
            }   /* end for */
            
        }   /* end available seat loop check */
        
        
        
        else if ( ( fSeatsTaken == 5 ) && ( eSeatsTaken != 5 ) ) {
            
            printf( "\n\n========================================="
                "===" ) ;
            printf( "\n\n"
                    "  We are terribly sorry, but it looks like\n"
                    "  there are currently no First Class seats\n"
                    "         available at this time.\n\n" ) ;
            printf( "========================================="
                "===" ) ;
            
            
            printf( "\n\n           CURRENT AVAILABILITY:" ) ;
            printf( "\n\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [1-2]\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [3-4]\n"
                "|      [%d] |   FIRST CLASS      "
                    "SEAT [5]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [6-7]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [8-9]\n"
                "|  [%d]     |     ECONOMY        "
                    "SEAT [10]"
                "\n\n", seating[0], seating[1], seating[2],
                seating[3], seating[4], seating[5], 
                    seating[6],
                seating[7], seating[8], seating[9] ) ;
            printf( "========================================="
                "===\n\n" ) ;
            
            
            printf( " Would you like to consider an Economy Class\n"
                    "               seat instead?\n\n"
                    "     1.      Yes\n"
                    "     2.      No\n\n\n"
                    "               Response: " ) ;
            scanf( "%d", &response ) ;
            
            
            while ( ( response != 1 ) && ( response != 2 ) ) {
                
                printf( "\n\n====================================="
                        "===="
                        "===" ) ;
                printf( "\n\n   Sorry, that is an invalid response."
                        "\n\n   Only choices 1 and 2 are allowed."
                        "\n\n") ;
                printf( "========================================="
                        "===\n\n" ) ;
                
                
                printf( " Would you like to consider an Economy "
                        "Class\n"
                        "               seat instead?\n\n"
                        "     1.      Yes\n"
                        "     2.      No\n\n\n"
                        "               Response: " ) ;
                scanf( "%d", &response ) ;
                
            }
            
            
            if ( response == 1 ) {
                
                if ( eSeatsTaken != 5 ) {
                    
                    for ( int i = 5; i < CAPACITY; i++ ) {
                        
                        if ( seating[i] == 0 ) {
                            
                            seating[i] = 1 ;
                            
                            eSeatsTaken++ ;
                            
                            printf( "\n\n==============="
                                    "================="
                                    "============" ) ;
                            printf( "\n\n         "
                                    "SEAT #%d HAS BEEN ASSIGNED!"
                                    "\n\n\n",
                                    seating[i]+i );
                            
                            printf( "           CURRENT "
                                    "AVAILABILITY:" ) ;
                            
                            printf( "\n\n"
                                "|  [%d] [%d] |   FIRST CLASS     "
                                    "SEATS [1-2]\n"
                                "|  [%d] [%d] |   FIRST CLASS     "
                                    "SEATS [3-4]\n"
                                "|      [%d] |   FIRST CLASS      "
                                    "SEAT [5]\n"
                                "|  [%d] [%d] |     ECONOMY       "
                                    "SEATS [6-7]\n"
                                "|  [%d] [%d] |     ECONOMY       "
                                    "SEATS [8-9]\n"
                                "|  [%d]     |     ECONOMY        "
                                    "SEAT [10]"
                                "\n\n", seating[0], seating[1], 
                                    seating[2],
                                seating[3], seating[4], seating[5], 
                                    seating[6],
                                seating[7], seating[8], 
                                    seating[9] ) ;
                            
                            
                            printf( "============"
                                    "===================="
                                    "===="
                                    "========\n\n"
                                    "              BOARDING PASS:"
                                    "\n\n"
                                    "     SEAT#: %d       SECTION:"
                                    " ECONOMY"
                                    " CLASS"
                                    "\n\n            ENJOY YOUR "
                                    "FLIGHT!"
                                    "\n\n================"
                                    "================="
                                    "==="
                                    "========\n\n",
                                    seating[i]+i ) ;
                                    
                                    break ; /* break from loop */
                            
                        }   /* end if */
                        
                    }   /* end for */
                    
                }   /* end available seat loop check */
                
            }   /* end ACCEPT economy class seat */
            
            
            else if ( response == 2 ) {
                
                printf( "\n========================="
                        "===================" ) ;
                printf( "\n\n               We understand.\n\n"
                        "    Next flight will depart in 3 hours."
                        "\n\n"
                        "    THANK YOU FOR CHOOSING STC AIRLINES!"
                        "\n\n" ) ;
                printf( "========================="
                        "===================\n\n" ) ;
                
            }   /* end DECLINE economy class seat */
            
        }   /* end response 1 else if statement */
        
        
        
        else if ( ( fSeatsTaken == 5 ) && ( eSeatsTaken == 5 ) ) {
            
            printf( "\n\n========================================="
                "===" ) ;
            printf( "\n\n"
                    "  We are terribly sorry, but it looks like\n"
                    "  there are currently no seats available for\n"
                    "          this flight at this time.\n\n" ) ;
            printf( "========================================="
                "===" ) ;
            
            
            printf( "\n\n           CURRENT AVAILABILITY:" ) ;
            printf( "\n\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [1-2]\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [3-4]\n"
                "|      [%d] |   FIRST CLASS      "
                    "SEAT [5]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [6-7]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [8-9]\n"
                "|  [%d]     |     ECONOMY        "
                    "SEAT [10]"
                "\n\n", seating[0], seating[1], seating[2],
                seating[3], seating[4], seating[5], 
                    seating[6],
                seating[7], seating[8], seating[9] ) ;
            
            
            printf( "========================="
                    "===================" ) ;
            printf( "\n\n    We apologize for any inconvenience.\n\n"
                    "  Next available flight arrives in "
                    "3 hours."
                    "\n\n"
                    "    THANK YOU FOR CHOOSING STC AIRLINES!"
                    "\n\n" ) ;
            printf( "========================="
                    "===================\n\n" ) ;
            
        }   /* end no seats available */
        
    }   /* end FIRST CLASS scenarios */
    
    
    
    
    else if ( response == 2 ) {       /* ECONOMY CLASS */
        
        
        if ( eSeatsTaken != 5 ) {
            
            printf( "\n\n========================================="
                "===" ) ;
            printf( "\n\n           CURRENT AVAILABILITY:" ) ;
            printf( "\n\n"
                "|  [%d] [%d] |   FIRST CLASS     SEATS [1-2]\n"
                "|  [%d] [%d] |   FIRST CLASS     SEATS [3-4]\n"
                "|      [%d] |   FIRST CLASS      SEAT [5]\n"
                "|  [%d] [%d] |     ECONOMY       SEATS [6-7]\n"
                "|  [%d] [%d] |     ECONOMY       SEATS [8-9]\n"
                "|  [%d]     |     ECONOMY        SEAT [10]"
                "\n\n", seating[0], seating[1], seating[2],
                seating[3], seating[4], seating[5], seating[6],
                seating[7], seating[8], seating[9] ) ;
            printf( "========================================="
                    "===\n\n" ) ;
            
            
            for ( int i = 5; i < CAPACITY; i++ ) {
                
                if ( seating[i] == 0 ) {
                    
                    seating[i] = 1 ;
                    
                    eSeatsTaken++ ;
                    
                    printf( "        "
                            "SEAT #%d HAS BEEN ASSIGNED!\n\n\n",
                            seating[i]+i );
                    
                    printf( "           CURRENT AVAILABILITY:" ) ;
                    printf( "\n\n"
                        "|  [%d] [%d] |   FIRST CLASS     "
                            "SEATS [1-2]\n"
                        "|  [%d] [%d] |   FIRST CLASS     "
                            "SEATS [3-4]\n"
                        "|      [%d] |   FIRST CLASS      "
                            "SEAT [5]\n"
                        "|  [%d] [%d] |     ECONOMY       "
                            "SEATS [6-7]\n"
                        "|  [%d] [%d] |     ECONOMY       "
                            "SEATS [8-9]\n"
                        "|  [%d]     |     ECONOMY        "
                            "SEAT [10]"
                        "\n\n", seating[0], seating[1], seating[2],
                        seating[3], seating[4], seating[5], 
                            seating[6],
                        seating[7], seating[8], seating[9] ) ;
                    
                    
                    printf( "================================"
                            "===="
                            "========\n\n"
                            "              BOARDING PASS:\n\n"
                            "     SEAT#: %d       SECTION: ECONOMY"
                            " CLASS"
                            "\n\n            ENJOY YOUR FLIGHT!"
                            "\n\n================================="
                            "==="
                            "========\n\n",
                            seating[i]+i ) ;
                            
                            break ; /* break from loop */
                            
                }   /* end if */
                
            }   /* end for */
            
        }   /* end available seat loop check */
        
        
        
        else if ( ( eSeatsTaken == 5 ) && ( fSeatsTaken != 5 ) ) {
            
            printf( "\n\n========================================="
                "===" ) ;
            printf( "\n\n"
                    "  We are terribly sorry, but it looks like\n"
                    "  there are currently no Economy Class seats\n"
                    "         available at this time.\n\n" ) ;
            printf( "========================================="
                "===" ) ;
            
            
            printf( "\n\n           CURRENT AVAILABILITY:" ) ;
            printf( "\n\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [1-2]\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [3-4]\n"
                "|      [%d] |   FIRST CLASS      "
                    "SEAT [5]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [6-7]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [8-9]\n"
                "|  [%d]     |     ECONOMY        "
                    "SEAT [10]"
                "\n\n", seating[0], seating[1], seating[2],
                seating[3], seating[4], seating[5], 
                    seating[6],
                seating[7], seating[8], seating[9] ) ;
            printf( "========================================="
                "===\n\n" ) ;
            
            
            printf( " Would you like to consider a First Class\n"
                    "               seat instead?\n\n"
                    "     1.      Yes\n"
                    "     2.      No\n\n\n"
                    "               Response: " ) ;
            scanf( "%d", &response ) ;
            
            
            while ( ( response != 1 ) && ( response != 2 ) ) {
                
                printf( "\n\n====================================="
                        "===="
                        "===" ) ;
                printf( "\n\n   Sorry, that is an invalid response."
                        "\n\n   Only choices 1 and 2 are allowed."
                        "\n\n") ;
                printf( "========================================="
                        "===\n\n" ) ;
                
                
                printf( " Would you like to consider a First "
                        "Class\n"
                        "               seat instead?\n\n"
                        "     1.      Yes\n"
                        "     2.      No\n\n\n"
                        "               Response: " ) ;
                scanf( "%d", &response ) ;
                
            }
            
            
            if ( response == 1 ) {
                
                if ( fSeatsTaken != 5 ) {
                    
                    for ( int i = 0; i < CAPACITY-5; i++ ) {
                        
                        if ( seating[i] == 0 ) {
                            
                            seating[i] = 1 ;
                            
                            fSeatsTaken++ ;
                            
                            printf( "\n\n==============="
                                    "================="
                                    "============" ) ;
                            printf( "\n\n         "
                                    "SEAT #%d HAS BEEN ASSIGNED!"
                                    "\n\n\n",
                                    seating[i]+i );
                            
                            printf( "           CURRENT "
                                    "AVAILABILITY:" ) ;
                            
                            printf( "\n\n"
                                "|  [%d] [%d] |   FIRST CLASS     "
                                    "SEATS [1-2]\n"
                                "|  [%d] [%d] |   FIRST CLASS     "
                                    "SEATS [3-4]\n"
                                "|      [%d] |   FIRST CLASS      "
                                    "SEAT [5]\n"
                                "|  [%d] [%d] |     ECONOMY       "
                                    "SEATS [6-7]\n"
                                "|  [%d] [%d] |     ECONOMY       "
                                    "SEATS [8-9]\n"
                                "|  [%d]     |     ECONOMY        "
                                    "SEAT [10]"
                                "\n\n", seating[0], seating[1], 
                                    seating[2],
                                seating[3], seating[4], seating[5], 
                                    seating[6],
                                seating[7], seating[8], 
                                    seating[9] ) ;
                            
                            
                            printf( "============"
                                    "===================="
                                    "===="
                                    "========\n\n"
                                    "              BOARDING PASS:"
                                    "\n\n"
                                    "     SEAT#: %d       SECTION:"
                                    " FIRST"
                                    " CLASS"
                                    "\n\n            ENJOY YOUR "
                                    "FLIGHT!"
                                    "\n\n================"
                                    "================="
                                    "==="
                                    "========\n\n",
                                    seating[i]+i ) ;
                                    
                                    break ; /* break from loop */
                                    
                        }   /* end if */
                        
                    }   /* end for */
                    
                }   /* end available seat loop check */
                
            }   /* end ACCEPT first class seat */
            
            
            else if ( response == 2 ) {
                
                printf( "\n========================="
                        "===================" ) ;
                printf( "\n\n               We understand.\n\n"
                        "    Next flight will depart in 3 hours."
                        "\n\n"
                        "    THANK YOU FOR CHOOSING STC AIRLINES!"
                        "\n\n" ) ;
                printf( "========================="
                        "===================\n\n" ) ;
                
            }   /* end DECLINE first class seat */
            
        }   /* end response 2 else if statement */
        
        
        
        else if ( ( eSeatsTaken == 5 ) && ( fSeatsTaken == 5 ) ) {
            
            printf( "\n\n========================================="
                "===" ) ;
            printf( "\n\n"
                    "  We are terribly sorry, but it looks like\n"
                    "  there are currently no seats available for\n"
                    "          this flight at this time.\n\n" ) ;
            printf( "========================================="
                "===" ) ;
            
            
            printf( "\n\n           CURRENT AVAILABILITY:" ) ;
            printf( "\n\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [1-2]\n"
                "|  [%d] [%d] |   FIRST CLASS     "
                    "SEATS [3-4]\n"
                "|      [%d] |   FIRST CLASS      "
                    "SEAT [5]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [6-7]\n"
                "|  [%d] [%d] |     ECONOMY       "
                    "SEATS [8-9]\n"
                "|  [%d]     |     ECONOMY        "
                    "SEAT [10]"
                "\n\n", seating[0], seating[1], seating[2],
                seating[3], seating[4], seating[5], 
                    seating[6],
                seating[7], seating[8], seating[9] ) ;
            
            
            printf( "========================="
                    "===================" ) ;
            printf( "\n\n    We apologize for any inconvenience.\n\n"
                    "  Next available flight arrives in "
                    "3 hours."
                    "\n\n"
                    "    THANK YOU FOR CHOOSING STC AIRLINES!"
                    "\n\n" ) ;
            printf( "========================="
                    "===================\n\n" ) ;
            
        }   /* end no seats available */
        
    }   /* end ECONOMY CLASS scenario */
    
    
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main  */

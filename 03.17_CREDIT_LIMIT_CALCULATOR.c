/* Challenge 3.17: Credit-Limit Calculator */

#include <stdio.h>


int main( void )
{
    
    int accountNumber = 0 ;         /* customer's account number */
    float beginningBalance = 0 ;    /* month's beginning balance */
    float totalCharges = 0 ;        /* month's total charges */
    float totalCredits = 0 ;        /* month's total credits */
    float creditLimit = 0 ;         /* customer's credit limit */
    
    
    printf( "Enter account number (-1 to end): " ) ;
    scanf( "%d", &accountNumber ) ; /* get account number */
    
    
    /* force user to quit or input 4-digit account number */
    while ( ( accountNumber != -1 ) &&
            ( accountNumber < 1000 ) | 
            ( accountNumber > 9999 ) ) { /* begin while */
        
        printf( "\n\n*Invalid account number*\n" ) ;
        printf( "*Please enter a 4-digit account number*\n" ) ;
        
        printf( "\n\nEnter account number (-1 to end): " ) ;
        scanf( "%d", &accountNumber ) ;
    } /* end while */
    
    
    while ( accountNumber != -1 ) { /* begin main while loop */
        
        float newBalance = 0 ;      /* initialize new balance */
        
        printf( "Enter beginning balance: " ) ;
        scanf( "%f", &beginningBalance ) ; /* get balance */
        
        newBalance += beginningBalance ; /* increase new balance */
        
        printf( "Enter total charges: " ) ;
        scanf( "%f", &totalCharges ) ; /* get total charges */
        
        newBalance += totalCharges ; /* increase new balance */
        
        printf( "Enter total credits: " ) ;
        scanf( "%f", &totalCredits ) ; /* get total credits */
        
        newBalance -= totalCredits ; /* decrease new balance */
        
        printf( "Enter credit limit: " ) ;
        scanf( "%f", &creditLimit ) ; /* get credit limit */
        
        
        /* check if new balance exceeds credit limit */
        if ( newBalance > creditLimit ) { /* if true */
            
            printf( "Account:      %d\n", accountNumber ) ;
            printf( "Credit limit: %.2f\n", creditLimit ) ;
            printf( "Balance:      %.2f\n", newBalance ) ;
            printf( "Credit Limit Exceeded.\n\n\n" ) ; /* results */
            
            
            printf( "Enter account number (-1 to end): " ) ;
            scanf( "%d", &accountNumber ) ; /* get account number */
            
            
            /* force user to quit or input 4-digit account number */
            while ( ( accountNumber != -1 ) &&
                    ( accountNumber < 1000 ) |
                    ( accountNumber > 9999 ) ) { /* begin while */
                
                printf( "\n\n*Invalid account number*\n" ) ;
                printf( "*Please enter a 4-digit account number*\n");
                
                printf( "\n\nEnter account number (-1 to end): " ) ;
                scanf( "%d", &accountNumber ) ;
            } /* end while */
        }
        
        else { /* if false */
            
            printf( "\n\nEnter account number (-1 to end): " ) ;
            scanf( "%d", &accountNumber ) ; /* get account number */
            
            
            /* force user to quit or input 4-digit account number */
            while ( ( accountNumber != -1 ) &&
                    ( accountNumber < 1000 ) |
                    ( accountNumber > 9999 ) ) { /* begin while */
                
                printf( "\n\n*Invalid account number*\n" ) ;
                printf( "*Please enter a 4-digit account number*\n");
                
                printf( "\n\nEnter account number (-1 to end): " ) ;
                scanf( "%d", &accountNumber ) ;
            }   /* end while */
        }
    }   /* end main while loop */
    
    printf( "\n\nThank you for using Credit-Limit Calculator (=\n" );
    
    return 0 ; /* indicates program ended successfully */
}

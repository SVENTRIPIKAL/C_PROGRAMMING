/* Challenge 4.28: Calculating Weekly Pay */

#include <stdio.h>

int main( void )    /* function main begins program execution */
{
    
    int payCode ;
    
    printf( "Please enter the employee's pay-code number "
            "(1, 2, 3, 4):\n" ) ;
    printf( "{Input 0 to exit payroll} " ) ;
    
    scanf( "%d", &payCode ) ;
    
    
    while ( payCode != 0 ) {                    /* begin while */
        
        switch( payCode ) {                     /* begin switch */
            
            case 1: {                           /* begin case 1 */
                
                int wages = 500 ;
                
                printf( "\nThis employee is a 'Manager';\n" ) ;
                printf("Their fixed weekly pay is $%.2f.\n\n",
                        ( double ) wages ) ;
                
                
                printf( "Please enter the next employee's"
                        " pay-code number (1, 2, 3, 4):\n" ) ;
                printf( "{Input 0 to exit payroll} " ) ;
                
                scanf( "%d", &payCode ) ;
                
                break ;
                
            }   /* end case 1 */
            
            
            case 2: {                           /* begin case 2 */
                
                int wages = 9 ;        int hours ;
                
                printf( "\nThis employee is an 'Hourly Worker';\n" );
                printf( "They receive a fixed $9/h for their first\n"
                        "40 hours of work, plus an overtime rate of"
                        "\n1.5 times their hourly wage for any\n"
                        "additional hours worked in the week.\n" ) ;
                printf( "How many hours did the employee work"
                        " this week? " ) ;
                
                scanf( "%d", &hours ) ;
                
                
                double timeHalf ;
                int extra ;
                double overTime ;
                
                if ( hours > 40 ) {
                    
                    timeHalf = wages * 1.5 ;
                    extra = hours - 40 ;
                    wages *= 40 ;
                    overTime = wages + ( timeHalf * extra ) ;
                    
                    printf( "Employee's pay is $%.2f.\n\n",overTime);
                    
                    
                    printf( "Please enter the next employee's"
                            " pay-code number (1, 2, 3, 4):\n" ) ;
                    printf( "{Input 0 to exit payroll} " ) ;
                    
                    scanf( "%d", &payCode ) ;
                }
                
                else if ( hours <= 40 ) {
                    
                    wages *= hours ;
                    
                    printf( "Employee's pay is $%.2f.\n\n",
                            ( double ) wages ) ;
                    
                    
                    printf( "Please enter the next employee's"
                            " pay-code number (1, 2, 3, 4):\n" ) ;
                    printf( "{Input 0 to exit payroll} " ) ;
                    
                    scanf( "%d", &payCode ) ;
                }
                
                break ;
                
            }   /* end case 2 */
            
            
            case 3: {                           /* begin case 3 */
                
                int wages = 250 ;
                int gSales ;
                double commission, percentOfgSales ;
                
                printf( "\nThis employee is a 'Commission Worker';"
                        "\n" );
                printf( "They receive a fixed $250 plus 5.7%% of"
                        " their Gross Weekly Sales.\n" ) ;
                printf( "What was the total of the employee's"
                        " Gross Sales for the week? " ) ;
                
                scanf( "%d", &gSales ) ;
                
                percentOfgSales = gSales * 0.057 ; 
                
                commission = wages + percentOfgSales ;
                
                printf( "Employee's pay is $%.2f.\n\n", commission );
                
                
                printf( "Please enter the next employee's pay-code "
                        "number (1, 2, 3, 4):\n" ) ;
                printf( "{Input 0 to exit payroll} " ) ;
                
                scanf( "%d", &payCode ) ;
                
                break ;
                
            }   /* end case 3 */
            
            
            case 4: {                           /* begin case 4 */
                
                int wages = 60 ;            int production ;
                
                printf( "\nThis employee is a 'Piece Worker';\n" ) ;
                printf( "They receive a fixed $60 per item produced"
                        " for the company.\n") ;
                printf("How many items did the employee"
                        " produce this week? " ) ;
                
                scanf( "%d", &production ) ;
                
                wages *= production ;
                
                printf( "Employee's pay is $%.2f.\n\n",
                        ( double ) wages ) ;
                
                
                printf( "Please enter the next employee's pay-code "
                        "number (1, 2, 3, 4):\n" ) ;
                printf( "{Input 0 to exit payroll} " ) ;
                
                scanf( "%d", &payCode ) ;
                
                break ;
                
            }   /* end case 4 */
            
            
            default: {                          /* begin default */
                
                printf( "\nInvalid Entry.\n" ) ;
                printf( "Please enter the employee's pay-code"
                        " number (1, 2, 3, 4):\n" ) ;
                printf( "{Input 0 to exit payroll} " ) ;
                
                scanf( "%d", &payCode ) ;
                
                break ;
                
            }   /* end default */
            
        } /* end switch */
        
    } /* end while */
    
    
    printf( "\n\nPayroll exited successfully...\n\n" ) ;
    
    return 0 ;      /* indicate program ended successfully */
    
}   /* end function main */

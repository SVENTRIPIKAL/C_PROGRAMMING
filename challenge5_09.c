/* Challenge 5.9: challenge5_09.c
   Parking Charges */

#include <stdio.h>

double calculateCharges( double x ) ;   /* function prototype */


/* function main begins program execution */
int main( void )
{
    int i = 1 ;                     /* counter */
    double parkingHours ;           /* parking hours */
    double hours_1, charge_1 ;      /* car 1: hours & charges */
    double hours_2, charge_2 ;      /* car 2: hours & charges */
    double hours_3, charge_3 ;      /* car 3: hours & charges */
    double totalHours = 0 ;     /* combined hours for all cars */
    double totalCharges = 0 ;   /* combined charges for all cars */
    
    
    while ( i <= 3 ) {      /* begin while */
        
        switch ( i ) {      /* begin switch */
            
            case 1 :        /* car 1 */
                
                /* prompt for user input */
                printf( "Enter parking hours for First car: " ) ;
                
                scanf( "%lf", &parkingHours ) ; /* get hours */
                
                hours_1 = parkingHours ; /* assign car 1 hours */
                
                /* calculate & assign car 1 charges */
                charge_1 = calculateCharges( parkingHours ) ;
                
                /* increase overall total hours */
                totalHours += parkingHours ;
                
                /* increase overall total charges */
                totalCharges += charge_1 ;
                
                i++ ;       /* increase counter */
                
                break;      /* end case 1 */
            
            case 2 :    /* car 2 */
                
                /* prompt for user input */
                printf( "Enter parking hours for Second car: " ) ;
                
                scanf( "%lf", &parkingHours ) ; /* get hours */
                
                hours_2 = parkingHours ; /* assign car 2 hours */
                
                /* calculate & assign car 2 charges */
                charge_2 = calculateCharges( parkingHours ) ;
                
                /* increase overall total hours */
                totalHours += parkingHours ;
                
                /* increase overall total charges */
                totalCharges += charge_2 ;
                
                i++ ;       /* increase counter */
                
                break;      /* end case 2 */
            
            case 3 :    /* car 3 */
                
                /* prompt for user input */
                printf( "Enter parking hours for Third car: " ) ;
                
                scanf( "%lf", &parkingHours ) ; /* get hours */
                
                hours_3 = parkingHours ; /* assign car 3 hours */
                
                /* calculate & assign car 3 charges */
                charge_3 = calculateCharges( parkingHours ) ;
                
                /* increase overall total hours */
                totalHours += parkingHours ;
                
                /* increase overall total charges */
                totalCharges += charge_3 ;
                
                i++ ;       /* increase counter */
                
                break;      /* end case 3 */
            
        }   /* end switch */
        
    }   /* end while */
    
    
    /* print information in tabular format */
    printf( "=======================================\n" ) ;
    printf( "   %s%13s%13s\n", "Car", "Hours", "Charge" ) ;
    printf( "     1%13.1f%13.2f\n", hours_1, charge_1 ) ;
    printf( "     2%13.1f%13.2f\n", hours_2, charge_2 ) ;
    printf( "     3%13.1f%13.2f\n", hours_3, charge_3 ) ;
    printf( "   TOTAL%11.1f %12.2f\n", totalHours, totalCharges ) ;
    printf( "=======================================\n" ) ;
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main  */



/* function calculateCharges receives a double-type 'parkingHours'
   argument and returns a calculated double-type 'parkingCharge' */
double calculateCharges( double x )
{
    double additionalHours ;     /* charge over 3.0 hours */
    double parkingCharge ;      /* total charge for parking hours */
    double minimumFee = 2.00 ;  /* minimum parking fee */
    
    if ( x > 3.0 ) {    /* if parking hours greater than 3.0 */
        
        additionalHours = x - 3.0 ;  /* get difference */
        
        /* calculate total charge for parking over 3.0 hrs */
        parkingCharge = minimumFee + ( 0.50 * additionalHours ) ;
        
        if ( parkingCharge > 10.00 ) { /* if charge greater than $10 */
            
            parkingCharge = 10.00 ;    /* maximum charge is $10 */
        }
    }
    
    else {  /* if parking hours is less than or equal to 3.0 */
        
        parkingCharge = minimumFee ;   /* charge minimum parking fee */
    }
    
    return parkingCharge ; /* return calculated double type charge */
    
}   /* end function calculateCharges description */
/*  Challenge 7.30: Calculating Circle Circumference &
                        Circle Area of Sphere Volume Using
                            Function Pointers */

#include <stdio.h>
#include <math.h>
#define PI 3.14159


/* function prototypes */
double getUserInputRadius() ;             /* user input radius */
void Cal_Cir_Circumference( double x ) ; /* circle circumference */
void Cal_Cir_Area( double y ) ;         /* circle area */
void Cal_Sph_Volume( double z ) ;       /* sphere volume */



int main( void )            /* begin main function */
{
    
    /* initialize array of 3 pointers to functions
        that receive double parameter and return void */
    void ( *calculate[ 3 ] )( double ) = { Cal_Cir_Circumference ,
                                            Cal_Cir_Area ,
                                            Cal_Sph_Volume } ;
    
    int response ;              /* user menu decision */
    double radius ;             /* user radius input */
    int exitProgram = 0 ;       /* initialize program killswitch */
    
    
    
    printf( "\n==================[ HELLO! (= ]"
            "==================\n" ) ;
    
    
    while ( exitProgram == 0 ) {    /* begin while */
        
        printf( "\n\n"
                " Which operation would you like to perform:"
                "\n\n"
                "   1.      Calculate Circumference of Circle? \n"
                "   2.      Calculate Area of Circle? \n"
                "   3.      Calculate Volume of Sphere? \n"
                "   4.      Exit? \n\n\n"
                "               Your Response: " ) ;
        
        scanf( "%d", &response ) ;  /* get user input */
        
        
        switch( response ) {    /* begin switch */
            
            case 1:        /* CIRCUMFERENCE */
                    radius = getUserInputRadius() ;
                    ( *calculate[ 0 ] )( radius ) ;
                    break ;
            
            case 2:        /* AREA */
                    radius = getUserInputRadius() ;
                    ( *calculate[ 1 ] )( radius ) ;
                    break ;
            
            case 3:        /* VOLUME */
                    radius = getUserInputRadius() ;
                    ( *calculate[ 2 ] )( radius ) ;
                    break ;
            
            case 4:        /* EXIT */
                    ( exitProgram++ ) ; /* activates killswitch */
            
            default: ;     /* DO NOTHING */
            
        }   /* end switch */
        
    }   /* end while */
    
    
    printf( "\n\n=================[ GOODBYE! =D ]"
            "=================\n\n" ) ;
    
    
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main */



/* =========================[ FUNCTIONS ]========================= */

/* function gets and returns user input radius */
double getUserInputRadius() {
    
    double input ;              /* temp variable */
    
    printf( "\n\n What is the radius you want to use: " ) ;
    
    scanf( " %lf", &input ) ;   /* assign user input */
    
    printf("\n") ;              /* extra line after 2nd scanner */
    
    return input ;              /* return user input */
    
}   /* end getUserInput() */



/* function calculates the circumference of a circle & displays a
    message indicating the calculation, radius, and result */
void Cal_Cir_Circumference( double x ) {
    
    double circumference = ( 2 * PI * x ) ;
    
    printf( "\n=================================================\n\n"
            "   CALCULATION USED:   ( 2 ) * ( %.5f ) * ( %.2f ) \n"
            "   USER RADIUS VALUE:  %.2f \n"
            "   OPERATION RESULT:   %.2f \n"
            "\n=================================================\n",
            PI, x, x, circumference ) ;
    
}   /* end Cal_Cir_Circumference( double x )  */



/* function calculates the area of a circle & displays a
    message indicating the calculation, radius, and result */
void Cal_Cir_Area( double y ) {
    
    double area = ( PI * pow( y, 2 ) ) ;
    
    printf( "\n=================================================\n\n"
            "   CALCULATION USED:   ( %.5f ) * ( %.2f ^ ( 2 ) ) \n"
            "   USER RADIUS VALUE:  %.2f \n"
            "   OPERATION RESULT:   %.2f \n"
            "\n=================================================\n",
            PI, y, y, area ) ;
    
}   /* end Cal_Cir_Area( double y ) */



/* function calculates the volume of a sphere & displays a
    message indicating the calculation, radius, and result */
void Cal_Sph_Volume( double z ) {
    
    double volume = ( ( ( double ) 4/3 ) * ( PI ) * 
                    ( pow( z, 3 ) ) ) ;
    
    printf( "\n=================================================\n\n"
            "   CALCULATION USED:   ( 4/3 ) * ( %.5f ) * "
                                    "( %.2f ^ ( 3 ) ) \n"
            "   USER RADIUS VALUE:  %.2f \n"
            "   OPERATION RESULT:   %.2f \n"
            "\n=================================================\n",
            PI, z, z, volume ) ;
    
}   /* end Cal_Sph_Volume( double z ) */



/*==========================[ OBJECTIVE ]============================
    
    7.30 (Calculating Circle Circumference, Circle Area of Sphere
    Volume Using Function Pointers) Use the techniques you learned
    in Fig: 7.28, create a text-based, menu-driven program that
    allows the user to choose whether to calculate the circumference
    of a circle, the area of a circle or the volume of a sphere.
    
    The program should then input a radius from the user, perform the
    appropriate calculation and display the result.
    
    Use an array of function pointers in which each pointer
    represents a function that returns void and receives a double
    parameter. The corresponding functions should each display
    message indicating which calculations was performed, the value of
    the radius and the result of the operation.
    
*/

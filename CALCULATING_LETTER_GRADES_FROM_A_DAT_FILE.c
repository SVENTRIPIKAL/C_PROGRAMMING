/* CALCULATING_LETTER_GRADES_FROM_A_DAT_FILE */

#include <stdio.h>


/* student structure definitions */
struct student_info {
        
        char first_name[ 20 ] ; /* student's first name */
        char last_name[ 20 ] ;  /* student's last name */
        int grades[ 5 ] ;    /* array for student's grades */
        
    }   /* end student structure definitions */ ;


/* function prototypes */
double calculateAverage ( struct student_info *A, int count ) ;

char calculateLetterGrade( double X ) ;

void displayContents( struct student_info *A, int count,
                        double X, char Y ) ;



int main( void )                /* begin main function */
{
    
    struct student_info list[ 10 ] ; /* array of 10 struct type */
    
    double student_average ;         /* student average */
    char student_letterGrade ;       /* student letter grade */
    
    int counter = 0 ;               /* index counter */
    
    
    /* pointer to the 'studentDataSheet.dat' file */
    FILE *studentDataSheetPtr ;
    
    
    /* fopen function opens 'studentDataSheet.dat' file
     *  and exits the program if the attempt fails */
    if ( ( studentDataSheetPtr = fopen( "studentDataSheet.dat",
                                        "r" ) ) == NULL ) {
        
        printf( "\n=============================================="
                "============\n\n" ) ;
        
        printf( "\tFAILED TO OPEN FILE--PROGRAM TERMINATED..."
                "\n\n" ) ;
        
        printf( "\n=============================================="
                "============\n\n" ) ;
        
    }   /* end if */
    
    
    /* if function is successful: scan, calculate, and print data */
    else {
        
        printf( "\n" ) ;
        
        
        /* scans the data sheet and assigns each section to the
         *  student info list in accordance with the student info
         *   structure */
        fscanf( studentDataSheetPtr, "%s%s%d%d%d%d%d",
                &list[counter].first_name,
                &list[counter].last_name,
                &list[counter].grades[0],
                &list[counter].grades[1],
                &list[counter].grades[2],
                &list[counter].grades[3],
                &list[counter].grades[4] ) ;
        
        
        /* calculateAverage function receives student data
         *  from the list and returns an average according
         *   to the student's grades */
        student_average = calculateAverage( list, counter ) ;
        
        
        /* calculateLetterGrade function receives the previous
         *  average that was calculated and returns a letter
         *   grade according to the student's average */
        student_letterGrade = calculateLetterGrade(
                                student_average ) ;
        
        
        /* displayContents function receives a student's data
         *  from the list and prints the data; along with
         *   the student's average and letter grade */
        displayContents( list, counter, student_average,
                            student_letterGrade ) ;
        
        
        counter++ ;     /* index counter is incremented */
        
        
        /* while 'studentDataSheet.dat' file contains additional
         *  lines of data, the program continues to scan, calculate,
         *   and print the data as previously described */
        while ( counter != 5 ) {
            
            fscanf( studentDataSheetPtr, "%s%s%d%d%d%d%d",
                    &list[counter].first_name,
                    &list[counter].last_name,
                    &list[counter].grades[0],
                    &list[counter].grades[1],
                    &list[counter].grades[2],
                    &list[counter].grades[3],
                    &list[counter].grades[4] ) ;
            
            student_average = calculateAverage( list, counter ) ;
            
            student_letterGrade = calculateLetterGrade(
                                    student_average ) ;
            
            displayContents( list, counter, student_average,
                                student_letterGrade ) ;
            
            counter++ ;
            
        }   /* end while */
        
        fclose( studentDataSheetPtr );        /* close file */
        
        printf( "=============================================="
                "============\n\n" ) ;
        
    }   /* end else */
    
    
    return 0 ;  /* indicates successful termination */
    
}   /* end main */



/* receives a student's structure info from list, and calculates
 *  and returns student's average grade */
double calculateAverage( struct student_info *A, int count ) {
    
    int num =   A[count].grades[0] +
                A[count].grades[1] +
                A[count].grades[2] +
                A[count].grades[3] +
                A[count].grades[4] ;
    
    double avg = ( double ) num / 5 ;
    
    return avg ;
    
}   /* end calculateAverage function */



/* receives student average and returns their letter grade */
char calculateLetterGrade( double X ) {
    
    char letter ;   /* temp variable for letter grade */
    
    if ( ( X >= 90 ) && ( X <= 100 ) ) {
        
        letter = 'A' ;
    }
    
    else if ( ( X >= 80 ) && ( X <= 89 ) ) {
        
        letter = 'B' ;
    }
    
    else if ( ( X >= 70 ) && ( X <= 79 ) ) {
        
        letter = 'C' ;
    }
    
    else if ( ( X >= 60 ) && ( X <= 69 ) ) {
        
        letter = 'D' ;
    }
    
    else if ( X < 60 ) {
        
        letter = 'F' ;
    }
    
    return letter ;
    
}   /* end calculateLetterGrade function */



/* prints student's structure info, average, and letter grade */
void displayContents( struct student_info *A, int count,
                        double X, char Y ) {
    
    printf( "=============================================="
            "============\n\n" ) ;
    
    
    printf( "   %-10s\t\t\t%s \n", "FIRST NAME:",
                A[count].first_name ) ;
    
    printf( "   %-10s\t\t\t%s \n", "LAST NAME:",
                A[count].last_name ) ;
    
    printf( "   %-10s\t\t\t%d, %d, %d, %d, %d \n", "GRADES:",
                A[count].grades[0], A[count].grades[1],
                    A[count].grades[2], A[count].grades[3],
                        A[count].grades[4] ) ;
    
    printf( "   %-10s\t\t\t%.2f \n", "AVERAGE:", X ) ;
    
    printf( "   %-10s%8c \n", "LETTER GRADE:", Y ) ;
    
    printf( "\n" ) ;
    
}   /* end displayContents function */



/* =========================[ OBJECTIVE ]============================
    
    This program should use a structure (struct) that consists of a
    student’s first name, a student’s last name, and an array of 5
    grades.The program should create an array of 10 elements of the
    structure type. Create a file that has the appropriate data
    structure for 5 students.
    
    -Student’s first name
    -Student’s last name
    -grade1, grade2, grade3, grade4, grade5
    
    The program should load the data elements from a text file. You
    will have to create the text file. The program will have a
    function that will calculate the average when a structure is
    passed into the function. The program will also have a function
    that will calculate the letter grade from the average of the
    previous function. The program will display the contents of the
    array plus the average and letter grade to the screen.
    Make sure to have comments that describes what the code is doing.
    
*/
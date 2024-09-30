#include <stdio.h>
#include <string.h>

struct student {
    char name[ 20 ] ;
    int id ;
    int scoresubject[ 5 ] ;
}   ; // end struct

int valuestudent( struct student group[ ] , int n ) ;

int main( ) {
    int n = 3 ;
    struct student group[ n ] ;
    int answer = valuestudent( group , n ) ;
    // printf( "%d" , answer ) ;
    return 0 ;
} // end function

int valuestudent( struct student group[ ] , int n ) {
    float average = 0 ;
    for (int i = 0 ; i < n ; i++) {
        printf( " please enter name =" ) ;
        scanf( "%s" , group[ i ].name ) ;
        printf( " please enter id = " ) ;
        scanf( "%d" , &group[ i ].id ) ;
        for ( int j = 0 ; j < 5 ; j++ ) {
            printf( " please enter  grade subject = " ) ;
            scanf( "%d" , &group[ i ].scoresubject[ j ] ) ;
        } // end for
    } // end for

    for ( int i = 0 ; i < n ; i++ ) { 
        printf( "\nStudent %d\n" , i + 1 ) ;
        printf( "Name: %s\n" , group[ i ].name ) ;
        printf( "ID: %d\n" , group[ i ].id ) ;
        printf( "Scores = " ) ;
        for ( int j = 0 ; j < 5 ; j++ ) {
            if (group[ i ].scoresubject[ j ] >= 80) {
                printf( "A " ) ;
            } else if ( group[ i ].scoresubject[ j ] >= 75){
                printf( " B +" ) ;
            }else if ( group[ i ].scoresubject[ j ] >= 70){
                printf( " B " ) ;
            }else if ( group[ i ].scoresubject[ j ] >= 65){
                printf( " C+ " ) ;
            }else if ( group[ i ].scoresubject[ j ] >= 60){
                printf( " C " ) ;
            }else if ( group[ i ].scoresubject[ j ] >= 55){
                printf( " D+ " ) ;
            }else if ( group[ i ].scoresubject[ j ] >= 50){
                printf( " D " ) ;
            }else {
                printf( " F " ) ;
            } // end if*
        } // end for
        printf( " \nScores = " ) ;
        for ( int j = 0 ; j < 5 ; j++ ) {
            printf( "%d " , group[ i ].scoresubject[ j ] ) ;
        } // end for
        for (int j = 0 ; j < 5 ; j++ ) {
            average += group[ i ].scoresubject[ j ] ;
        } // end for 
        average /= 5 ;
        printf( "\naverage = %.1f\n" , average ) ;
        printf( "\n" ) ;
    } // end for ปริ้นค่าของแต่ละคนออกมา

    return 0 ;
} // end main function

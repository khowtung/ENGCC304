#include <stdio.h>

int arm( int number ) ;
int main( ) {
   int number ; 
    printf( " please enter nmber = " ) ;
    scanf( "%d" , &number ) ;
    arm( number ) ;

    return 0 ;
} // end main function

int arm( int number ) {
    int realnumber , part , answer = 0  ;
    int count = 0 , sum = 0 ;

    realnumber = number ;
    while ( realnumber !=0 ) { 
        realnumber /= 10 ;
        count++ ;
    } // end while

    realnumber = number ;

    while ( realnumber != 0 ) {
        answer = realnumber % 10 ;
        int part = 1 ;
        for (int i = 0 ; i < count ; i++ ) {
            part *= answer ;
        } // end for
        printf( "answer power %d = %d\n" , answer , part ) ;
        sum += part ;
        realnumber /= 10 ;
    } // end for
    printf( "count = %d\n" , count ) ;
    printf( "sum = %d\n" , sum ) ;
    printf( "number = %d\n" , number ) ;
    if ( sum == number ) {
        printf( " Pass\n " ) ;
    }else {
        printf( " Not pass\n " ) ;
    } // end if
    return 0 ;
    } // end function arm

    

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ( ) {
    srand( time ( NULL ) ) ; 
    int randomnum = rand( ) % 100 + 1 ;
    int play = 1 ;
    int guess ;
    while ( true ) {
        int score = 100 ;
        int max = 100 , min = 0 ;
        //printf( " random = %d\n " , randomnum ) ;
        printf( " please enter  num (1,-1) for play = " ) ;
        scanf( " %d" , &play ) ;
        if ( play == -1 ) {
            break ;
        } else if ( play == 1 ) {
            printf( " score = %d \n " , score ) ;
            while ( true ) {
                printf( " please guess number %d and %d = \n " , min , max ) ;
                scanf( " %d" , &guess ) ;
                if ( guess == randomnum ) {
                    printf( " you win guess num is %d \n " , randomnum ) ;
                    printf( " score game = %d \n " , score ) ; 
                    break ;
                } else {
                    if ( guess < randomnum ) {
                        if ( guess > min ) {
                            min = guess + 1 ;
                        } // end if
                        score -= 10 ;
                        printf( " score = %d \n " , score ) ;
                    } else if( guess > randomnum){
                        if ( guess < max ) {
                            max = guess - 1 ;
                        } // end if 
                        score -= 10 ;
                        printf( " score = %d \n " , score ) ;
                    } // end if
                } // end if 
            } // end while loop
        } // end if
    } // end while loop
    return 0 ; 
} // end function

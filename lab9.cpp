#include<stdio.h>
int main( ) {
    int num = 0 ;
    printf( " please enter max num = " ) ;
    scanf( "%d", &num ) ; 
    int Array[ num ] ;

    for ( int  i = 0 ; i < num ; i++ ) {
        printf( " please enter num [%d] " , i ) ;
        scanf( "%d", &Array[i] ) ;
    } // end for loop รับค่า

    printf( "number" ) ;

    for (int  i = 0 ; i < num ; i++ ) {
        printf( " %2d" , i ) ;
    } // end for loop แสดงค่า
    printf( "\nanswer" ) ;

    for (int i = 0 ; i < num ; i++ ) {
        int p = 1 ;
        if ( Array[i] == 0 || Array[i] == 1) {
            p = 0 ;
        } else {
            for ( int j = 2 ; j <= Array[i]/2 ; j++ ) {
                if ( Array[i] % j == 0 ) {
                    p = 0 ;
                    break ;
                } // end if 
            } // end for  
        } // end else
        if ( p == 0 )
        {
            printf( " # " ) ;
        } else {
            printf( " %d" , Array[i] ) ;
        } // end if
    } // end for
    return 0 ;
} // end function
//จำนวนเฉพาะคือหารได้แค่ 1 กับ ตัวมันเอง ก็เหมือนกับเอาตัวมันหารตัวมันแล้วได้เศษ0 แต่ถ้าไม่ใช้หารตัวมันจะได้เศษมากกกว่า1

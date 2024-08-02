#include <stdio.h>

int main(){
    int grade ;
    printf( " please grade = " ) ;
    scanf( "%d" , &grade ) ;
    switch (grade / 5){
    case 16 :
        printf( " A " ) ;
        break ;
    case 15 :
        printf( " B+ " ) ;
        break ;
    case 14 :
        printf( " B " ) ;
        break ;
    case 13 :
        printf( " C+ " ) ;
        break ;
    case 12 :
        printf( " C " ) ;
        break ;
    case 11 :
        printf( " D+ " ) ;
        break ;
    case 10 :
        printf( " D " ) ;
        break ;
    default :
        printf( " F " ) ;
        break ;
    } // end switch case
  return 0 ;
} // end function

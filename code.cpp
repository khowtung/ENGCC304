# include <stdio.h>
int main () {         
    int a = 3 ;  
    int b = 4 ;
    if( a > b ) {                                         
        printf( " The numver in A is greater  than B. \n " ) ;            
    } // end if
    printf( " Hello world " ) ;             
    return 0 ;
} //end main */

int main () {                
    int score = 0 ;     
    printf( " Please enter your score : " ) ;    
    scanf( "%d" , &score ) ;  
    printf( " Grade :  " ) ;     
    if( score >= 80 ) {   
        printf( " A " ) ; 
    }else if( score >= 75 && score < 80 ) {    
        printf( " B+ " ) ;
    }else if( score >= 70 && score < 75 ) {
        printf( " B " ) ;
    }else if( score >= 65 && score < 70 ) {
        printf( " C+ " ) ;
    }else if( score >= 60 && score < 65 ) {
        printf( " C " ) ;
    }else if( score >= 55 && score < 60 ) {
        printf( " D+ " ) ;
    }else if( score >= 50 && score < 55 ) {
        printf( " D " ) ;
    }else{               
        printf( " F " ) ;
    } // end if
return 0 ;
} // enfd function  

int main() {                      
    char Oper ;                                                
    float Num1, Num2 ;                                    
    printf( " Calculator " ) ;                                           
    scanf( "%f %c %f" , &Num1 , &Oper , &Num2 ) ;            
    switch( Oper ){                                                   
        case '+' :                                                               
            printf( "%.0f + %.0f  = %.0f" , Num1 , Num2 , Num1 + Num2 ) ;     
        break ;
        case '-' :
            printf( "%.0f - %.0f  = %.0f" , Num1 , Num2 , Num1 - Num2 ) ;
            break ;
        case '*' :
            printf( "%.0f * %.0f  = %.0f" , Num1 , Num2 , Num1 * Num2 ) ;
            break ;
        case '/' :
            printf( "%.2f / %.2f  = %.0f" , Num1 , Num2 , Num1 / Num2 ) ;
            break ;     
        default :      
            printf( " Error , please try again. " ) ;     
            break;                                      
    } // end switch case
    return 0 ;
} // end function 

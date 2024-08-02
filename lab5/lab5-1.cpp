int main(){
    int grade ;
    printf( " please enter code = " ) ;
    if( scanf( "%d" , &grade ) != 1){       // ถ้าผลลัพธ์ของ scanf ไม่เท่ากับ 1 แสดงว่าผู้ใช้ไม่ได้ป้อนจำนวนเต็ม
        printf(" please enter number only. ");
    }else{
    if( grade > 80 ){
        printf( " A " ) ;
    }else if( grade > 75 && grade <= 80 ){
        printf( " B+ " ) ;
    }else if( grade >70 && grade <= 75 ){
        printf( " B " ) ;
    }else if( grade > 65 && grade <= 70 ){
        printf( " C+ " ) ;
    }else if( grade > 60 && grade <= 65 ){
        printf( " C " ) ;
    }else if( grade > 55 && grade <= 60){
        printf( " D+ " ) ;
    }else if( grade > 50 && grade <= 55 ){
        printf( " D " ) ;
    }else{
        printf( " F " ) ;
    } // end if
    }// end if
        return 0;
    } // end main function

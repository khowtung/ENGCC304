/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main( ) {

    char text[ 100 ] , reverse[ 100 ] ; // เก็บค่าตัวอักษร หลายตัว
    printf( "please enter " ) ;
    scanf( "%s" , text ) ;

    int length = strlen( text ) ;
    for ( int i = 0 ; i < length ; i++ ) {
        reverse[ i ] = tolower( text[ length - 1 - i ] ) ;
        text[ i ] = tolower( text[ i ] ) ;
    } // end for1 เก็บค่าการรีเวอร์ส 
    reverse[ length ] = '\0' ;       // หยุดการเก็บค่ารีเวิส

    if ( strcmp( text , reverse ) == 0 ) {
        printf( " Pass\n" ) ;
    } else {
        printf( " Not pass\n " ) ;
    } // end if

    return 0 ;
} // end main function

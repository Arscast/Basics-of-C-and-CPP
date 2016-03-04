#include <stdio.h>
void SayHello( void );
int main (int argc, const char * argv[])
{
    SayHello();
    
    //
    
    int myInt;
    
    myInt = 3 * 2;
    printf("myInt ---> %d\n" , myInt);
    
    myInt += 1;
    printf( "myInt ---> %d\n", myInt );
    
    myInt -= 5;
    printf( "myInt ---> %d\n", myInt );
    
    myInt *= 10;
    printf( "myInt ---> %d\n", myInt );
    
    myInt /= 4;
    printf( "myInt ---> %d\n", myInt );
    
    myInt /= 2;
    printf( "myInt ---> %d\n\n\n", myInt );
    
    //
    
    
    myInt = 5;
    
    myInt = myInt * 3;
    printf( "myInt ---> %d\n", myInt );
    
    printf( "myInt ---> %d\n", myInt++ );/* The value in the variable myInt increases ,after this the operator printf print this value*/
    
    printf( "myInt ---> %d\n", ++myInt );/*Operator printf print the value of the variable myInt and then increase this value by 1*/
    
    return 0;
}
void SayHello( void )
{
    printf( "Hello, world!\n\n\n" );
}

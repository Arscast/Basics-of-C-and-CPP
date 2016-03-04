#include <stdio.h>
void SayHello( void );
int main (int argc, const char * argv[])
{
    SayHello();
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
    printf( "myInt ---> %d\n", myInt );
    
    return 0;
}
void SayHello( void )
{
    printf( "Hello, world!\n" );
} 

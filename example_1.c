#include <stdio.h>
#include <stdbool.h>//library for true and false 
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
    
        int i;
	
	i = 0;
	 
        if (i = 5) //if statement
           printf("Never print this statement!");
	while ( i++ < 4 ) //while statement
		printf("while: i=%d\n",i);
	printf("after while loop, i=%d\n\n",i);
	
	for ( i = 0; i < 4; i++ ) //for statement
		printf("first for: i=%d\n",i);
	printf("after first for loop, i=%d\n\n",i);
	
	for ( i = 1; i <= 4; i++ )
		printf("second for: i=%d\n",i);
	printf("after second for loop, i=%d\n\n",i);
	

    return 0;
}
void SayHello( void )
{
    printf( "Hello, world!\n\n\n" );
}



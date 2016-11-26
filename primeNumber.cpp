#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[])
{   int i, j;
    long myNumber[999999];
    bool isprime;
    
    for (i = 2; i < 10000; i++)
    {
        isprime = true;
        for (j=2; j<=i/2; j++)
            if ((i%j) == 0 )
                isprime = false;
        if (isprime)
            cout << i << endl;
        
    }
    
    

 }


//
// hello5.c
// Chapter 2
// <book title>
//
// Cutting back our functions to just 1 that takes 2 string parameters.
//

#include <stdio.h>

void printGreeting( char* greeting , char* addressee )
{
  printf( "%s, %s!\n" , greeting , addressee );
}

int main() 
{
  printGreeting( "Hello" , "world" );
  printGreeting( "Good day" , "Your Royal Highness" );
  printGreeting( "Howdy" , "John Q. and Jane P. Doe" );
  printGreeting( "Hey" , "Moe, Larry, and Curly" );

  return 0; 
}

//  <eof>

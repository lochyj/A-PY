#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }

   char* call_loc = "Python3.10\\python.exe main.py";
   //strcat(call_loc, strcat(" ", argv[2]));

   system(call_loc);

   return 0;
}
#include <iostream>
#include <vector>
#include <time.h> //for random numbers
#include <cmath>
#include <stdio.h>
#include <string.h>

//using namespace std;

//function declaration


void printchar(char *C){
  int i = 0;
  while(*C != '\0'){

   std::cout << *C;
   C++;
  }
}
int main(){

  char C[20] = "Hello";
  printchar(C);

  

  return 0;
}

//Function Definition



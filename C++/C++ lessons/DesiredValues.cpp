#include <iostream>
#include <vector>
#include <time.h> //for random numbers
#include <cmath>
#include <string.h>

//using namespace std;

//function declaration

char f(char *a, int start, int len, int lenghtChar);

int main(){

  char arr[] = {'A','B','C'};

  int sizeOfChar = sizeof(arr)/sizeof(arr[0]);

  std::vector<char> received;
  
f(arr, 0, 4,sizeOfChar);



   
   
  return 0;
}

char f(char *a, int start, int len, int lenghtChar){
   
   int counter = start;
   char f2[lenghtChar];
     
     for(int i =0; i < len; i++){

       if(a[3] == '\0'){

        std::cout << 'N';

       }
       else{
         f2[i] = a[counter];
         counter++;
         
       }
     }


     for(int i = 0; i < lenghtChar; i++){

       std::cout <<  f2[i];
     }


}


//Function Definition


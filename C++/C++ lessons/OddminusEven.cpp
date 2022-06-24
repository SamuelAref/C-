#include <iostream>
#include <vector>
#include <time.h> //for random numbers
#include <cmath>

//using namespace std;

//function declaration


int f(int a[], int length);
int main(){

    int  oddsAndeven[5] = {4,1,2,3};
    int size = sizeof(oddsAndeven)/sizeof(oddsAndeven[0]);
    int verdict = f(oddsAndeven,size);

    std::cout << verdict;
   
  return 0;
}


//Function Definition

int f(int a[], int length){
  
  int sumEven = 0;
  int  sumOdd = 0;
   
  for(int i = 0; i < length; i++){

    if(a[i] % 2 == 0){

      sumEven = sumEven + a[i];
    }

    else{

      sumOdd = sumOdd + a[i];
    }

  }

  return sumOdd - sumEven;


}
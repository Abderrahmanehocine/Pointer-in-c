#include <stdio.h>


int main(){
int a=4; //size of int data type is 4 byte
int *p; // p is a pointer of int point the adress in the memory
p=&a; // each place in the memory have an adress the symbole &a it means the adress of a for exemple : a=4; 4 is the value of a | and for exemple 200 is the adress of a so p=200
//if we print the adress we print p
//if we print the value of a we print a or *p it is the same because of p=&a;
//the number 4 stored as binary number in the memory like this:
/* 
  a stored like that in the memory:
  a_____________
  |   00000100  |000 
  |_____________| 
  |   00000000  |001 
  |_____________| 
  |   00000000  |002  
  |_____________| 
  |   00000000  |003
  |_____________|      

  000 is the adress of the first byte the data type of *p is int so when *p point to a it means *p point 4 byte from 000 to 003, and the value is 4
  
  */

  printf("The value of a is %d\n",*p); // we can olso print the value of a with a;
  printf("The adress of a is %d\n",p);// the adress here is 0000 / the adress change in evry divece  
}

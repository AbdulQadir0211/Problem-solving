#include<stdio.h>

    int revrsNum(int num1, int num2){
   if (num1 == 0){
      return num2;
   }
   num2 *= 10;
   num2 += (num1 % 10);
   num1 = num1/10;
   return revrsNum(num1, num2);
}
int main(){
   int Num = 1345431;
   int Num2 = revrsNum(Num,0);
   if (Num == Num2){
      printf(Num," is Palindrome!");
   }
   else{
      printf(Num," is not a Palindrome!");
   }
   return 0;
}

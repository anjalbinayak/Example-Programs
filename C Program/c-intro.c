#include<stdio.h>
typedef struct{
   char *sym;
   int val;
}numeral;
int maxNume(numeral *nu, int num){
   int i, index;
   for(i = 0; i<15; i++){//15 numerals in array
      if(nu[i].val <= num)
         index = i;
   }
   //gretest value numeral index, not greater than number
   return index;
}
void decToRoman(numeral *nu, int num){
   int max;
   if(num != 0){
      max = maxNume(nu, num);
      printf("%s", nu[max].sym);
      num -= nu[max].val;//decrease number
      decToRoman(nu, num);//recursively print numerals
   }
}
main(){
   int number;
   numeral nume[15] = {{"I",1},{"IV",4},{"V",5},{"IX",9}, {"X",10},{"XL",40},{"L",50},{"XC",90},
{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000},{"MMMM",4000},{"V'",5000}};
   printf("Enter a decimal number: ");
   scanf("%d", &number);
   if(number >0 && number <= 5000){//checking input number
      printf("The Roman equivalent of %d is ", number);
      decToRoman(nume, number);
   }
   else{
      printf("Invalid Input");
   }
   printf("\n");
}

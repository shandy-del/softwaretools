#include <stdio.h>
#include <stdlib.h>

int main(void){
 int count = 1;
 int input = 0;
 int ans = rand() % 1000 + 1;
 

 do{
  printf("guess a number between 1 and 1000:");

  
  if (scanf("%i", &input) == 1 && input == ans) {
   printf("You've got it!");
   break;
  } else if (scanf("%i", &input) == 1 && input != ans){
   printf("Try it agian.");
  }
  count++;
 }while(count <= 10);

 if(count == 10){
  printf("Sorry, you lose. The correct answer is %i", ans);
 }

}


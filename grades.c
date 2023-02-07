#include <stdio.h>



void main (void){

   float grade;

    printf("Input your grade: ");
    scanf("%f", &grade);

     if (grade <= 100 && grade >= 92){
        printf("You get grade A\n");

     } else if (grade <= 91 && grade >= 84){
        printf("You get grade A-\n");

     } else if (grade <= 83 && grade >= 76){
        printf("You get grade B\n");

     } else if (grade <= 75 && grade >= 68){
        printf("You get grade B-\n");

     } else if (grade <67 && grade >=60){
        printf("You get grade C\n");

     } else if (grade <=59 && grade >=50){
        printf("You get grade D\n");
     } else if (grade  < 50 ){
       printf("you get grade F\n");

     } else //(grade <=0 || grade > 100);
         printf("\nInvalid Grade, Try again");



 return 0;
}


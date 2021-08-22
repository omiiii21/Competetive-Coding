#include <stdio.h>
#include "NumberToWords.h"
#include "TriangularNumbers.h"
int input();
void output(int);
void convert_to_words();
int main(void)
{
    float result;
    int choice, num;
    int sum=0,rem=0,count=0;
    printf("Press 1 to calculate Sum of Digits of a number\n");
    printf("Press 2 to Reverse the digits of a number\n");
    printf("Press 3 to find the average of 'n' numbers inputted by the user\n");
    printf("Press 4 to Generate a table of triangular numbers for 'n' numbers\n");
    printf("Press 5 to Program to print numbers in words.\n");
    printf("Enter your choice: ");
    choice = input();
      
    switch (choice) {
    case 1: {
        printf("Enter number: ");
        num = input();
        while(num!=0){
            sum=sum+num%10;
            num=num/10;
        }
        printf("Sum of digits= ");
        output(sum);
        break;
    }
    case 2: {
        printf("Enter number:\n");
        num = input();
      
        while(num!=0){
            rem = rem*10 +num%10;
            num /=10;
        }   
        printf("Reversed number= ");
        output(rem);
        break;
    }
    case 3: {
        printf("Enter number:");
        num = input();
        while(num!=0){
            rem = rem + num%10;
            count++;
            num/=10;
        }
        printf("Average of digits of number= ");
        output(rem/count);
        break;
    }
    case 4: { 
        printf("Enter number:");
        num = input();
        triangular_series(num);      
        break;
    }

    case 5: {
        printf("Enter number:");
        num = input();
       
        convert_to_words("num");

        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
  
void output(int number)
{
    printf("%d", number);
}
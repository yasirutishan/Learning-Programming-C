# Learning-Programming-C
Learning Programming C Language 

Question 1
Have the computer print

HI, HOW OLD ARE YOU?

on one line. The user then enters his or her age immediately after the question mark. The computer then skips two lines and prints on two consecutive lines.

WELCOME (age)
LET’S BE FRIENDS!

Question 2

Write a program which uses the format commands with modifiers to print the following output:


Question 3
Write a simple program to evaluate the average speed of a car traveled in meters per second (ms-1).

Question 4
Convert a temperature reading in degrees Fahrenheit to degrees Celsius, using the formula

C = ( 5 / 9 ) x ( F – 32 )

Test the program with the following values: 68, 150, 212, 0, -22, -200 (degree Fahrenheit).


Question 5

What will be output of the following program?
        
#include<stdio.h>
int main(){
    int i=5,j;
    j=++i+++i+++i;
    printf("%d %d",i,j);
    return 0;
}

Got an error for this ( j=++i+++i+++i;)
But this gives an answer
j=++i  + ++i  + ++i;


Question 6

What will be output of the following program?

#include<stdio.h>
int main(){
    int i=1;
    i=2+2*i++;
    printf("%d",i);
    return 0;
}


Question 7

What will be output of the following program?

#include<stdio.h>
int main(){
    int a=2,b=7,c=10;
    c=a==b;
    printf("%d",c);
    return 0;
}


Question 8

What will be output of the following program?

#include<stdio.h>
int main(){
    int a=0,b=10;
    if(a=0){
         printf("true");
    }
    else{
         printf("false");
    }
    return 0;
}


Question 9

What will be output of the following program?

#include<stdio.h>
int main(){
    int a;
    a=015 + 0x71 +5;
    printf("%d",a);
    return 0;
}


Question 10

What will be output of the following program?

#include<stdio.h>
int main(){
     int i=5;
     int a=++i + ++i + ++i;
     printf("%d",a);
     return 0;
}


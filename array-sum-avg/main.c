//
//  main.c
//  array-sum-avg
//
//  Created by Peter Rodriguez.
//
/*
 Use the program to create:

 1) Takes an array size

 2) finds sum and average of the array content

 3) finds how many numbers in the array are below the calculated average
 
 */
#include <stdio.h>

int main() {

    int i, num;
    int count = 0;
    float total = 0.0, average;
    
    printf ("Enter the value of N \n");
    scanf("%d", &num);
    int array[num];
    
    printf("Enter %d numbers (negative, positive, and zero) \n", num);
     
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
     
    printf("Input array elements \n");
     
    for (i = 0; i < num; i++)
    {
        printf("%+3d\n", array[i]);
    }
     
    for (i = 0; i < num; i++)
    {
        total+=array[i];
    }
     
    average = total / num;
     
    for(i = 0; i < num; i++){
        if(array[i] < average)
            count++;
    }
    
        printf("\n Sum of all numbers =  %.2f\n", total);
        printf("\n Average of all input numbers =  %.2f\n", average);
        printf(" \n Total numbers below average = %d\n", count);
    
    
    return 0;
}

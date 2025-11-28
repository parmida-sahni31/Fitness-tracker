//adding all the header files.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "../include/functions.h"

//defining user defined functions.
//function 1.
void bmi()
{
    float height, weight, bmi; //declaring local variables in bmi function.

    printf("\nEnter your height in meters.\n");
    scanf("%f", &height);
    printf("Enter your weight in Kg.\n");
    scanf("%f", &weight);
    
    bmi = weight / (pow(height, 2));

    printf("\nYour BMI is: %.2f\n", bmi); //we use %.2 so that it will print only upto 2 decimals.

    //bmi criterions.
    
    if (bmi < 18.5)
        printf("\nOH NO! You're underweight :(\n");
    else if (bmi < 24.9)
        printf("\nWell done! You're healthy :D\n");
    else if (bmi < 29.9)
        printf("\nOH NO! You're overweight :(\n");
    else
        printf("\nOH NO! You're obese :O\n");

    printf("\nNote: BMI is not a definitive measure of health for individuals because it doesn't distinguish between muscle, bone, and fat.\n");

}

//function 2.
void running (struct Activity *record)
{
    float distance;
    printf("\nEnter the distance covered in Km: \n"); //taking input from the user.
    scanf("%f", &distance);

    record->calories = distance * 60;
    strcpy(record->name, "Running");

    //suggestions
    printf("\nSome warm up tips:\n");
    printf("1. Dynamic stretches like leg swings, high knees, and arm circles.\n");
    printf("2. Light aerobic activity such as a slow jog or brisk walk.\n");

    printf("\nSome cool down tips:\n");
    printf("A 5-10 minute walk or slow jog to lower your heart rate, followed by static stretches that target the leg muscles.\n");
}

//function 3.
void swimming (struct Activity *record)
{
    float time;
    printf("\nEnter time spent swimming in minutes: \n"); //taking input from the user.
    scanf("%f", &time);

    record->calories = time * 8;
    strcpy(record->name, "Swimming");

    //suggestions
    printf("\nSome warm up tips:\n");
    printf("1. On land- Arm circles, shoulder rolls, and high knees.\n");
    printf("2. In water- Light swimming, kicking, and drills that build up to more powerful strokes. \n");

    printf("\nSome cool down tips:\n");
    printf("light-intensity swimming, gentle dryland stretches like arm and shoulder circles, calf and hamstring stretches. \n");
}

//function 4
void walking (struct Activity *record)
{
    float steps;
    printf("\nEnter the number of steps: \n"); //taking input from the user.
    scanf("%f", &steps);

    record->calories = steps * 0.04;
    strcpy(record->name, "Walking");

    //suggestions
    printf("\nSome warm up tips:\n");
    printf("1. Dynamic stretches like arm circles, leg swings, and ankle circles for 5-10 minutes.\n");
    printf("2. A slow-paced walk to gradually increase your heart rate.\n");

    printf("\nSome cool down tips:\n");
    printf("Gradually decrease your pace by walking slowly for 5 to 10 minutes, followed by gentle stretching to help your muscles relax and recover.\n");
}

//Function 5

void cycling (struct Activity *record)
{
    float distance;
    printf("\nEnter the distance covered in Km: \n"); //taking input from the user.
    scanf("%f", &distance);

    record->calories = distance * 35;
    strcpy(record->name, "Cycling");

    //suggestions
    printf("\nSome warm up tips:\n");
    printf("1. 5-10 minutes of light activity like walking or jogging.\n");
    printf("2. Dynamic stretches such as leg swings and hip circles to prepare the muscles and joints.\n");

    printf("\nSome cool down tips:\n");
    printf("Perform gentle stretches for your legs, hips, and back to prevent stiffness.\n");
}

//function 6
void hiking (struct Activity *record)
{
    float distance;
    printf("\nEnter the distance covered in Km: \n"); //taking input from the user.
    scanf("%f", &distance);

    record->calories = distance * 50;
    strcpy(record->name, "Hiking");

    //suggestions
    printf("\nSome warm up tips:\n");
    printf("1. Dynamic stretches like leg swings, arm circles, and high knees to get your muscles and joints moving.\n");
    printf("2. Incorporate strength and mobility exercises such as squats, lunges, and ankle tilts to prepare for the physical demands of the trail.\n");

    printf("\nSome cool down tips:\n");
    printf("Do a light cardio like a 3-5 minute walk or jog to bring your heart rate down, followed by static stretches to improve flexibility and reduce muscle stiffness.\n");
}
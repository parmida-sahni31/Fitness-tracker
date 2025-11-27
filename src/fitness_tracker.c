//start of the program.

//adding all the header files.
#include <stdio.h>
#include <string.h>
#include <math.h>

//declaring a structure for the activity log.
struct Activity 
{
    char name[30];
    float calories;
};

//assigning a variable to the structure.
struct Activity *record; 

//user defined functions for different activities.
void running(struct Activity *record);
void walking(struct Activity *record);
void hiking(struct Activity *record);
void cycling(struct Activity *record);
void swimming(struct Activity *record);
void bmi();

int main ()
{
    printf("~~~~Welcome to the fitness tracker~~~~\n");
    //calling the function for bmi.
    bmi(); 

    int choice;

    //infine loop for using the tracker multiple times.
    while (1)
    {
        printf("\n===============FITNESS TRACKER===============\n");

        printf("\n1. Running\n");
        printf("\n2. Walking\n");
        printf("\n3. Hiking\n");
        printf("\n4. cycling\n");
        printf("\n5. swimming\n");
        printf("\n6. Exit\n");

        printf("\nEnter the serial number of the activity you want to track: "); //the user inputs their choice.
        scanf("%d", &choice);

        //using switch case to track the user's choice.

        switch (choice)
        {
            //we call functions of the choice entered by the user.
            case 1: running(&record);
                    break;
            case 2: walking(&record);
                    break;
            case 3: hiking(&record);
                    break;
            case 4: cycling(&record);
                    break;
            case 5: swimmimg(&record);
                    break;
            case 6: printf("\nThank your using the fitness tracker.\n");
                    break;
            default: printf("\nInvalid choice! Enter again!\n");
            
        }

    } 

    return 0; 

}

//defining user defined functions.
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

    printf("\nNote: BMI is not a definitive measure of health for individuals because it doesn't distinguish between muscle, bone, and fat.");

}



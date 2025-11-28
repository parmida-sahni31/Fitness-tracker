//start of the program.

//adding all the header files.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "../include/functions.h"

//assigning a variable to the structure.
struct Activity record;

int main ()
{
    
    //assigning a variable to the structure.
    struct Activity record;


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
            case 1: running(&record); //call by reference
                    break;
            case 2: walking(&record);
                    break;
            case 3: hiking(&record);
                    break;
            case 4: cycling(&record);
                    break;
            case 5: swimming(&record);
                    break;
            case 6: 
                    printf("\nThank you for using the fitness tracker.\n");
                    return 0;
            default: 
                    printf("\nInvalid choice! Enter again!\n");
            
        }

    }

    return 0; 

}


//end of program.


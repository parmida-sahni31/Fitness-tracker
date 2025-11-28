//header guard
#ifndef FUNCTIONS_H //defines it if not already defines.
#define FUNCTIONS_H //defines it now.

//declaring a structure for the activity log.
struct Activity 
{
    char name[30];
    float calories;
};

//user defined functions for different activities.
void running(struct Activity *record);
void walking(struct Activity *record);
void hiking(struct Activity *record);
void cycling(struct Activity *record);
void swimming(struct Activity *record);
void bmi();


#endif 
//end of guard.
#include <stdio.h>
#include <string.h>

typedef enum {low, medium, high} priority;

typedef enum {
    min,
    hour,
    day,
    month,
    year
} date;


typedef struct{
    int value;
    date unit;
} duration;


typedef struct{
    int hour;
    int minute;
    int day;
    int month;
    int year;
    char description[25];
    duration timespend;
    priority prio;
} meeting;


meeting changeDate(meeting preDate, duration delay) {
    meeting postTermin = preDate;

    if (delay.value >= 0) {
        postTermin.timespend.value += delay.value;
    } else {
        if (postTermin.timespend.value + delay.value >= 0) {
            postTermin.timespend.value += delay.value;
        } else {
            postTermin.timespend.value = 0;
        }
    }


    switch (delay.unit) {
        case min:
            /*CASE 1*/
            if (delay.value >= 60 && delay.unit == min) {
                postTermin.hour += 1;
            } else {
                postTermin.minute += delay.value;
            }
            break;

        case hour:
            /*CASE 2*/
            if (delay.value >= 24 && delay.unit == hour) {
                postTermin.day += 1;
            } else {
                postTermin.hour += delay.value;
            }
            break;

        case day:
            /*CASE 3*/
            if (delay.value >= 361 && delay.unit == day) {
                postTermin.year += 1;
            } else {
                postTermin.day += delay.value;
            }

            /*Januar*/
            if(postTermin.month == 1 && delay.value >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }
            /*Februar*/
            else if(postTermin.month == 2 && delay.value + postTermin.day >= 28){
                postTermin.month += 1;
                postTermin.day = delay.value - 28;
            }
            /*Maerz*/
            else if(postTermin.month == 3 && delay.value + postTermin.day >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }
            /*April*/
            else if(postTermin.month == 4 && delay.value + postTermin.day >= 30){
                postTermin.month += 1;
                postTermin.day = delay.value - 30;
            }
            /*Mai*/
            else if(postTermin.month == 5 && delay.value + postTermin.day >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }
            /*Juni*/
            else if(postTermin.month == 6 && delay.value + postTermin.day >= 30){
                postTermin.month += 1;
                postTermin.day = delay.value - 30;
            }
            /*Juli*/
            else if(postTermin.month == 7 && delay.value + postTermin.day >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }
            /*August*/
            else if(postTermin.month == 9 && delay.value + postTermin.day >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }
            /*September*/
            else if(postTermin.month == 10 && delay.value + postTermin.day >= 30){
                postTermin.month += 1;
                postTermin.day = delay.value - 30;
            }
            /*Oktober*/
            else if(postTermin.month == 11 && delay.value + postTermin.day >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }
            /*November*/
            else if(postTermin.month == 11 && delay.value + postTermin.day>= 30){
                postTermin.month += 1;
                postTermin.day = delay.value - 30;
            }
            /*Dezember*/
            else if(postTermin.month == 11 && delay.value + postTermin.day >= 31){
                postTermin.month += 1;
                postTermin.day = delay.value - 31;
            }

            break;

        case month:

            postTermin.month += delay.value;
            break;

        case year:
            postTermin.year += delay.value;
            break;

    }

    return postTermin;
}




int main(){
/*Define first date*/
    meeting mymeeting;
    duration delay;
    mymeeting.year = 23;
    mymeeting.month = 4;
    mymeeting.day = 23;
    mymeeting.hour = 15;
    mymeeting.minute = 00;
    mymeeting.prio = medium;
    delay.value = 42;
    delay.unit = day;
    meeting newDate = changeDate(mymeeting, delay);
    strcpy(mymeeting.description, "birthday");
    printf("Meeting Description: %s\nYear: %d\nMonth: %d\nDay: %d\nHour: %d\nMinute: %d\n",
           mymeeting.description, mymeeting.year, mymeeting.month, mymeeting.day, mymeeting.hour, mymeeting.minute);



    printf("Priority: ");
    switch (mymeeting.prio) {
        case low:
            printf("Low\n");
            break;
        case medium:
            printf("Medium\n");
            break;
        case high:
            printf("High\n");
            break;
    }

    printf("Meeting Description: %s\nYear: %d\nMonth: %d\nDay: %d\nHour: %d\nMinute: %d\n",
           newDate.description, newDate.year, newDate.month, newDate.day, newDate.hour, newDate.minute);

    printf("Priority: ");
    switch (newDate.prio) {
        case low:
            printf("Low\n");
            break;
        case medium:
            printf("Medium\n");
            break;
        case high:
            printf("High\n");
            break;
    }


    return 0;
}
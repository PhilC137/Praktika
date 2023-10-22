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
    duration duration1;
    priority priority1;
} meeting;



meeting changeDate(meeting preDate, duration delay) {
    meeting postTermin = preDate;

    if (delay.value >= 0) {
        postTermin.duration1.value += delay.value;
    } else {
        if (postTermin.duration1.value + delay.value >= 0) {
            postTermin.duration1.value += delay.value;
        } else {
            postTermin.duration1.value = 0;
        }
    }

    if (delay.value >= 24 && delay.unit == hour) {
        postTermin.day += 1;
    }

    if (delay.value >= 361 && delay.unit == day) {
        postTermin.year += 1;
    }

    if (delay.value >= 60 && delay.unit == min) {
        postTermin.hour += 1;
    }

    return postTermin;
}




int main(){
//Define first date
    meeting mymeeting;
    strcpy(mymeeting.description, "birthday");
    mymeeting.year = 23;
    mymeeting.month = 4;
    mymeeting.day = 1;
    mymeeting.hour = 8;
    mymeeting.minute = 00;
    mymeeting.priority1 = medium;

    duration delay;
    delay.value = 42;
    delay.unit = day;

    meeting newDate = changeDate(mymeeting, delay);

    printf("Meeting Description: %s\nYear: %d\nMonth: %d\nDay: %d\nHour: %d\nMinute: %d\n",
           mymeeting.description, mymeeting.year, mymeeting.month, mymeeting.day, mymeeting.hour, mymeeting.minute);



    printf("Priority: ");
    switch (mymeeting.priority1) {
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

    return 0;
};
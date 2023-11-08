#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "header.h"

int main(){

    students holgar = {
            "Holgar",IFM,394};
    students beate = {
            "Beate",IFM,8};
    students heinz = {
            "Heinz",ENG,10};

    list mainlist = {NULL};
    list ifm_students = {NULL};
    list students_sorted_by_ects = {NULL};

    addStudents(&mainlist, &holgar);
    addStudents(&mainlist, &beate);
    addStudents(&mainlist, &heinz);

    //printList(&mainlist);

    traversieren(IFM,&mainlist,&ifm_students);

    /*printList(&ifm_students);*/

    printList(&mainlist);

    delete(&beate,&mainlist,2);

    printList(&mainlist);




}
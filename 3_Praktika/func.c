#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "header.h"


node *oldNode;

void addStudents(list *lst, students *st) {


    node *newNode = (node *)malloc(sizeof(node));

    newNode->stdnt = st;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (lst->firstNode == NULL) {
        oldNode = (node *)malloc(sizeof(node));
        lst->firstNode = newNode;
    } else {

        oldNode->next = newNode;
        newNode->prev = oldNode;

    }

   oldNode = newNode;

}

int count;


void print(list *lst){
    count = 0;
    node *tempNode = NULL;

    if(lst->firstNode != NULL){

        if (count == 0){
            tempNode = lst->firstNode;
            count++;
        }

        while (tempNode != NULL){

            printf("Name: %s enroled: %u CPS: %i \n",tempNode->stdnt->name ,tempNode->stdnt->modul, tempNode->stdnt->cps);
            tempNode = tempNode->next;
            count++;

        };

    } else {
        printf("List is empty");
        return;
    }

}



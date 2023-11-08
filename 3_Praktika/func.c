#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "header.h"


node *oldNode;

int count = 0;



void addStudents(list *lst, students *st) {

    printf("Vor dem Einfuegen befanden sich %i Knoten in der Liste\n", count);

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
    count ++;
    printf("Es befinden sich nun %i Knoten in der Liste\n"
           "#------------------------------#\n", count);
}


const char *enrolledStrings[] = {
        "IFM",
        "BIO",
        "MATHE",
        "ENG",
        "SOZIAL"
};


void printList(list *lst){
    count = 0;
    node *tempNode = NULL;

    if(lst->firstNode != NULL){

        if (count == 0){
            tempNode = lst->firstNode;
            count++;
        }

        while (tempNode != NULL){

            printf("Name: %s; enroled: %s; CPS: %i \n", tempNode->stdnt->name , enrolledStrings[tempNode->stdnt->modul], tempNode->stdnt->cps);
            tempNode = tempNode->next;
            count++;

        }

    } else {
        printf("List is empty");
        return;
    }
    printf("=======================================\n");
}
/*Sorted*/
void traversieren(enrolled modul, list *listForSort, list *newList) {


    node *rootNode = listForSort->firstNode;



    while (rootNode != NULL){

        node *newNode = (node *)malloc(sizeof(node));

        if(rootNode->stdnt->modul == modul) {



            newNode->stdnt = rootNode->stdnt;
            newNode->next = NULL;
            newNode->prev = NULL;

            if (newList->firstNode == NULL) {
                oldNode = (node *)malloc(sizeof(node));
                newList->firstNode = newNode;
            } else {

                oldNode->next = newNode;
                newNode->prev = oldNode;

            }

        }

        oldNode = newNode;
        rootNode = rootNode->next;

    }
}

void delete(students *st, list *lst, int chose){


    node *tempNode = lst->firstNode;

    while (st != tempNode->stdnt){
        tempNode = tempNode->next;
        if(tempNode == NULL){
            printf("The student ist not linked");
            break;
        }
    }

  if(tempNode->next != NULL){
      tempNode->prev->next = tempNode->next;
  } else {
      tempNode->prev->next = NULL;
  }

  if (tempNode->prev != NULL){
      tempNode->next->prev = tempNode->prev;
  } else {
      tempNode->next->prev = NULL;
  }


    if(chose == 2){
        tempNode->stdnt = NULL;
    }

    printf("Es befinden sich nun %i Knoten in der Liste\n");

}




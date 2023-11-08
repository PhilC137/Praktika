#ifndef HEADER_H
#define HEADER_H

typedef enum enrolled{
    IFM,
    BIO,
    MATHE,
    ENG,
    SOZIAL
}enrolled;



typedef struct {
    char name[10];
    enrolled modul;
    int cps;
} students;

typedef struct Node{
    students *stdnt;
    struct Node *next;
    struct Node *prev;
} node;

typedef struct list{
    node *firstNode;
} list;


void addStudents(list *list ,students *st);

void printList(list *lst);

void traversieren(enrolled modul, list *listForSort, list *newList);

void delete(students *st,list *lst,int chose);

#endif
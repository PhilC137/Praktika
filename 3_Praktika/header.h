#ifndef HEADER_H
#define HEADER_H

typedef enum {
    IFM,
    BIO,
    MATHE,
    ENG,
    SOZIAL
}enrolled;

typedef struct {
    char name[25];
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

void print(list *lst);

#endif
#include <stdio.h>
#include <string.h>
#include "header.h"
struct students{
    char name[25];
    char enrolled[3];
    int cps;
} students;

struct node{
 struct students student;
 struct node *next;
 struct node *prev;
}node;

struct students holgar = {
        "Holgar","IFM",394};
struct students beate = {
        "Beate","IFM",8};
struct students heinz = {
        "Heinz","ELM",10};

struct node main_list = {
        {}
};
struct node ifm_students;

struct node stuedents_sorted_by_ects;
#ifndef FORUM_2_H_INCLUDED
#define FORUM_2_H_INCLUDED
#include <iostream>

struct mahasiswa
{
    int NIM;
};

typedef mahasiswa infotype;

typedef struct elmList *adr;

struct elmList
{
    infotype info;
    adr next;
};

struct List
{
    adr First;
};

void createList(List &L);
adr createElement(infotype data);
bool isEmpty(List L);
void insertLast(List &L, adr P);
void showAll(List &L);

#endif // FORUM_2_H_INCLUDED

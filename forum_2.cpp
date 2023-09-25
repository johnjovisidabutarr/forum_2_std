#include <iostream>
#include "forum_2.h"

void createList(List &L)
{
    L.First = NULL;
}

adr createElement(infotype data)
{
    adr P = new elmList;
    P->info = data;
    P->next = NULL;
    return P;
}

bool isEmpty(List L)
{
    if (L.First == NULL)
    {
        return true;
    }
    return false;
}

void insertLast(List &L, adr P)
{
    if (isEmpty(L))
    {
        L.First = P;
    }
    else
    {
        adr curr = L.First;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = P;
    }
}

void showAll(List &L)
{
    adr P;
    if (isEmpty(L))
    {
        std::cout << "List kosong\n";
    }
    else
    {
        P = L.First;
        while(P != NULL)
        {
            std::cout << P->info.NIM;
            P = P->next;
        }
    }
}

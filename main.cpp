#include <iostream>
#include "forum_2.h"

int main()
{
    List L;
    createList(L);
    adr P;

    infotype data;

    int nim, i;
    std::cout << "Masukkan NIM Anda digit per digit!\n";
    for(i = 0; i < 10; i++)
    {
        std::cout << "Digit ke-" << i+1 << ": ";
        std::cin >> nim;
        data.NIM = nim;
        P = createElement(data);
        insertLast(L, P);
    }

    std::cout << "\nNIM Anda adalah: ";
    showAll(L);

    return 0;
}

#include "Reservoir.h"
#include <iostream>

void main()
{
    char name[30] = "Reserv";
    int n = 5;
    Reservoir* a = new Reservoir[n];
    a[2].Add(name);
    a[2].Show();

    a[2].Volume();
    a[2].Area();
    a[2].Srav();
    a[2].~Reservoir();
}
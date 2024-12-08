#include "Reservoir.h"
#include <iostream>
#include <cstring>

void Reservoir::Add(char* name)
{
    strcpy_s(this->name, sizeof(this->name), name);
    std::cout << "Enter width (m): ";
    std::cin >> width;
    std::cout << "Enter length (m): ";
    std::cin >> length;
    std::cout << "Enter max depth (m): ";
    std::cin >> depth;
}

void Reservoir::Show()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Width (m): " << width << std::endl;
    std::cout << "Length (m): " << length << std::endl;
    std::cout << "Depth (m): " << depth << std::endl;
}

void Reservoir::Volume()
{
    std::cout << "Volume: " << length * width * depth << " m3" << std::endl;
}

void Reservoir::Area()
{
    std::cout << "Area: " << length * width << " m2" << std::endl;
}

void Reservoir::Srav()
{
    if (length * width * depth < 10000)
    {
        std::cout << name << " - Pool" << std::endl;
    }
    else
    {
        std::cout << name << " - Sea" << std::endl;
    }
}

Reservoir::Reservoir(const Reservoir& obj)
{
    strcpy_s(name, sizeof(name), obj.name);
    length = obj.length;
    width = obj.width;
    depth = obj.depth;
}

Reservoir::Reservoir()
{
    strcpy_s(name, sizeof(name), "Test");
    length = 1;
    width = 1;
    depth = 1;
}

Reservoir::~Reservoir()
{
    delete[] name;
}

#pragma once

class Reservoir
{
    char* name = new char[50];
    int length;
    int width;
    int depth;
public:
    void Add(char*);
    void Show();
    void Volume();
    void Area();
    void Srav();

    Reservoir(const Reservoir& obj);

    Reservoir();
    ~Reservoir();
};
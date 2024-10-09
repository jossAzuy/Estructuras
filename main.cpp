#include <iostream>

struct Persona {
    int edad;
    float altura;
    float peso;
};

struct Estudiante{

    Persona Jose;

    bool tieneBeca;
    int semestre;
    int ID;
};

int main()
{
    Estudiante Alex = {26,75,60.5, true, 1, 887};

    return 0;
}
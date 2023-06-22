#include "Complejo.hpp"
#include <iostream>

using namespace std;

Complejo::Complejo()
{
    real = 0.0;
    imaginario = 0.0;
}

Complejo::Complejo(double real, double imaginario)
{
    this->real = real;
    this->imaginario = imaginario;
}

double Complejo::getReal() const
{
    return real;
}

void Complejo::setReal(double real)
{
    this->real = real;
}

double Complejo::getImaginario() const
{
    return imaginario;
}

void Complejo::setImaginario(double imaginario)
{
    this->imaginario = imaginario;
}

void Complejo::agregar(Complejo& otro)
{
    real += otro.getReal();
    imaginario += otro.getImaginario();
}

Complejo Complejo::conjugado()
{
    return Complejo(real, -imaginario);
}

Complejo Complejo::suma(Complejo& otro)
{
    double sumaReal = real + otro.getReal();
    double sumaImaginario = imaginario + otro.getImaginario();
    return Complejo(sumaReal, sumaImaginario);
}

Complejo Complejo::multiplicacion(Complejo& otro)
{
    double multiplicacionReal = (real * otro.getReal()) - (imaginario * otro.getImaginario());
    double multiplicacionImaginario = (real * otro.getImaginario()) + (imaginario * otro.getReal());
    return Complejo(multiplicacionReal, multiplicacionImaginario);
}

Complejo Complejo::multiEscalar(double escalar)
{
    double multiplicacionReal = real * escalar;
    double multiplicacionImaginario = imaginario * escalar;
    return Complejo(multiplicacionReal, multiplicacionImaginario);
}

void Complejo::imprime()
{
    if (imaginario >= 0)
    {
        cout << "(" << real << " + " << imaginario << "i)";
    }
    else
    {
        cout << "(" << real << " - " << -imaginario << "i)";
    }
}
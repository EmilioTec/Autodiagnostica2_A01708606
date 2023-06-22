#pragma once // previene múltiples definiciones como las guardas

class Complejo
{
    public:
        Complejo();
        Complejo(double, double);
        //~Complejo();
        double getReal() const;
        void setReal(double);
        double getImaginario() const;
        void setImaginario(double);
        void agregar(Complejo&);
        Complejo conjugado();
        Complejo suma(Complejo&);
        Complejo multiplicacion(Complejo&);
        Complejo multiEscalar(double);
        void imprime();    
    private:
        double real, imaginario;
};
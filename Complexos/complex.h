#ifndef __COMPLEX_
#define __COMPLEX_

class Complex{
private:
    double real, imag;
public:
    Complex(double r, double i){
        real = r;
        imag = i;
    }
    Complex(double r){
        real = r;
        imag = 0.0;
    }
    Complex(){
        real = 0.0;
        imag = 0.0;
    }

    inline
    double getImag(){
        return imag;
    }
    inline
    double getReal(){
        return real;
    }
    inline
    void setImag(double i){
        imag = i;
    }
    inline
    void setReal(double r){
        real= r;
    }

    void show();

    inline
    Complex operator+(const Complex &parcela){
        Complex aux;
        aux.real = real + parcela.real;
        aux.imag = imag + parcela.imag;

        return aux;
    }
    inline
    Complex operator-(const Complex &parcela){
        Complex aux;
        aux.real = real - parcela.real;
        aux.imag = imag - parcela.imag;

        return aux;
    }
    inline
    Complex operator*(const Complex &parcela){
        Complex aux;
        aux.real = real*parcela.real - imag*parcela.imag;
        aux.imag = real*parcela.imag + imag*parcela.real;

        return aux;
    }
    inline
    Complex operator/(const Complex &parcela){
        Complex aux;
        aux.real = (real*parcela.real + imag*parcela.imag)/(parcela.real*parcela.real + parcela.imag*parcela.imag);
        aux.imag = (imag*parcela.real - real*parcela.imag)/(parcela.real*parcela.real + parcela.imag*parcela.imag);

        return aux;
    }
};
#endif // __COMPLEX_

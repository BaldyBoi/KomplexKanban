/******************************************************** 
----Creater: Alex Yang
----Modified: Ethan Baldonado. December 5th, 2018
----Overview: Creates a CPP file containing function to
elegantly handle imaginary numbers using different 
operators.
********************************************************/
#include <math.h>
#include "complex.h"

#define PI 3.1415926538979323846

/*
returns absolute value of imaginary number
*/

double abs(const Complex me) {
    //the real part of the number (e.g 3 + 6i, returns 3)
    double re = real(me);
    //the imaginary part of the number
    double im = imag(me);
    return sqrt(re*re + im*im);
}
/*
returns the arctangent of complex number com in radians
*/
double arg(const Complex com) {
    double ret = atan(imag(com)/real(com));
    //Only case where the division is not in the domain. Division of objects in 2nd and 4th quadrant is the same. 
    if(imag(com) < 0 && real(com) < 0) {
        //arcTangent has a limited domain. adding pi will guarnteee that it is within the domain.
        ret -= PI;
    }
    return ret;
}

/*
returns conjugate
*/
Complex conj(const Complex com) {
    //only needs to change the imaginary part of com
    Complex ret(real(com), -1*imag(com));
    return ret;
}

/*
returns conjugate of &the
*/
double imag(const Complex &the) {
    return the.im;
}

/*
makes number non imaginary
*/
double norm(const Complex com) {
    double re(real(com)), im(imag(com));//Fancy initialization
    return re*re+im*im;
}

Complex polar(double mag, double ang=0.0) {
    double re = mag*cos(ang);
    double im = mag*sin(ang);
    //Sometimes re becomes 10e-10 instead of 0
    if(re < 10e-9 && re > -1*10e-9) {
        //If re is really small, it's probably supposed to be 0
        re = 0;
    }
    //same with imaginary
    if(im < 10e-9 && im > -1*10e-9) {
        im = 0;
    }
    Complex ret(re, im);
    return ret;
}

double real(const Complex& com) {
    return com.re;
}

bool Complex::operator==(const Complex &rhs) const {
    return re == rhs.re &&
           im == rhs.im;
}

bool Complex::operator!=(const Complex &rhs) const {
    return !(rhs == *this);
}

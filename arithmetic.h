//Ignore this. These are called "include guards" to make sure the file is only declared once.
#ifndef KOMPLEXKANBAN_ARITHMETIC_H
#define KOMPLEXKANBAN_ARITHMETIC_H

#include <complex>
#include "arithmetic.h"

/**
 * Returns the absolute value (sqrt(a^2+b^2)) of com
 * @param com the complex number to find the absolute value of
 * @return the absolute value of com
 * @author Alex Yang
 */
double abs(Complex com);

/**
 * Returns the angle (arctangent(a/b)) of com IN RADIANS
 * @param com the complex number to find the angle of
 * @return the angle of com IN RADIANS
 * @author Alex Yang
 */
double arg(Complex com);

/**
 * Returns the conjugate of com (a-bi)
 * @param com the Complex number to find the conjugate of
 * @return the conjugate of com
 * @author Alex Yang
 */
Complex conj(Complex com);

/**
 * Returns the imaginary part of the parameter
 * @param com the Complex number to find the imaginary part of
 * @return the imaginary part of com
 * @author Alex Yang
 */
double imag(const Complex& com);

/**
 * Returns a^2+b^2
 * @param com The complex number to find the normal of
 * @return the normal a^2+b^2
 */
double norm(Complex com);

/**
 * Creates a complex number with magnitude mag and angle ang (IN RADIANS)
 * @param mag The magnitude of the resulting complex number
 * @param ang The angle of the resulting complex number IN RADIANS
 * @return The complex number formed by mag and ang
 */
Complex polar(double mag, double ang=0.0);

/**
 * Returns the real part of the parameter
 * @param com the Complex number to find the real part of
 * @return the real part of com
 * @author Alex Yang
 */
double real(const Complex& com);

#endif //KOMPLEXKANBAN_ARITHMETIC_H
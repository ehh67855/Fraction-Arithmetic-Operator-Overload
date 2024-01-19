#include <iostream>
#include <cstdlib>
#include "Fraction.h"
using namespace std;
/*
  Description: Constructs a fraction objec
  Inputs: n: numerator, d=denominator
 */
Fraction::Fraction(int n, int d) {
    numer = n;
    denom = d;
}
/*
  Description: Outputs a fraction to standard output
  Inputs: The Fraction to output
 */
void Fraction::operator! (void) const{
    cout << this->numer << "/" << this-> denom << endl;
}
/*
  Description:Return whether two fractions are the same
  Inputs: The fraction to compare to
  Outputs: The respective bolean
 */
bool Fraction::operator== (const Fraction& f) const{
    if (this-> numer == f.numer && this->denom == f.denom) {
        return true;
    }
    return false;
}
/*
  Description: Returns whether two fractions are not the same
  Inputs: The fraction to compare
  Outputs: The respective boolean
 */
bool Fraction::operator!= (const Fraction& f) const{
    if (this-> numer != f.numer && this->denom != f.denom) {
        return true;
    }
    return false;
}
/*
  Description: Returns the sum of a fraction and a constant
  Inputs: The fraction to add to
  Outputs: The respective fraction
 */
Fraction Fraction::operator+ (const Fraction& f) const {
    Fraction temp;
    if (this->denom == f.denom) {
        temp.numer = this->numer + f.numer;
        temp.denom = this-> denom;
    } else {
        temp.numer = this->numer*f.denom + f.numer*this->denom;
        temp.denom = this->denom * f.denom;
    }
    return temp;
}
/*
  Description: Returns the difference between a fraction and a fraction
  Inputs: The fraction to subtract by
  Outputs: The respective fraction
 */
Fraction Fraction::operator- (const Fraction& f) const {
    Fraction temp;
    if (this->denom == f.denom) {
        temp.numer = this->numer - f.numer;
        temp.denom = this-> denom;
    } else {
        temp.numer = this->numer*f.denom - f.numer*this->denom;
        temp.denom = this->denom * f.denom;
    }
    return temp;
}
/*
  Description: Returns the product of a fraction with a fraction
  Inputs: The fraction to find the product of
  Outputs: The respective fraction
 */
Fraction Fraction::operator* (const Fraction& f) const {
    Fraction temp;
    temp.numer = this->numer*f.numer;
    temp.denom = this->denom*f.denom;
    return temp;
}
/*
  Description: Return a fraction divided by another fraction
  Inputs: The fraction to divide by
  Outputs: The respective fraction
 */
Fraction Fraction::operator/ (const Fraction& f) const {
    Fraction temp;
    temp.numer = this->numer*f.denom;
    temp.denom = this->denom*f.numer;
    return temp;
}
/*
  Description: Returns the sum between a fraction and a cosntant
  Inputs: the constant
  Outputs: The respective fraction
 */
Fraction Fraction::operator+ (int i) const {
    Fraction temp;
    temp.numer = this->denom*i + this->numer;
    temp.denom = this->denom;
    return temp;
}
/*
  Description: Returns the difference between a fraction and a constatn
  Inputs: The constant
  Outputs: The respective fraction
 */
Fraction Fraction::operator- (int i) const {
    Fraction temp;
    temp.numer = this->numer - this->denom*i;
    temp.denom = this->denom;
    return temp;
}
/*
  Description: Returns the product between a fraction and a constant
  Inputs: The cosntant
  Outputs: The respective fraction
 */
Fraction Fraction::operator* (int i) const {
    Fraction temp;
    temp.numer = this->numer*i;
    temp.denom = this->denom;
    return temp;
}
/*
  Description: Divides a fraction by a cosntant
  Inputs: The constant
  Outputs: The respective fraction
 */
Fraction Fraction::operator/ (int i) const {
    Fraction temp;
    temp.numer = this->numer;
    temp.denom = this->denom*i;
    return temp;
}

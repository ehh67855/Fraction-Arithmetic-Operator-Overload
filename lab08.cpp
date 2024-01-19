#include <iostream>
#include "Fraction.h"
using namespace std;

/* A breif function that tests whether the boolean overloads function properly
   Inputs: two fractions to be evaluated
*/
void testBool(Fraction f, Fraction g);

/* A breif function that tests whether the binary operator overloads function properly
   againts variable numbers.
   Inputs: two fractions to be evaluated
*/
void testVariantBinaryOperator(Fraction f, Fraction g);

/* A breif function that tests whether the binary opertor overloads function properly with constants
   Inputs: two fractions to be evaluated
*/
void testConstantBinaryOperator(Fraction f, Fraction g);


//Test the functions and operators in the Fraction class
int main(void){
  Fraction f(3, 4);
  Fraction g(2, 5);

  cout << "f is ";  !f;  //!f prints the Fraction f to standard output
  cout << "g is ";  !g;  //!g prints the Fraction g to standard output
  cout << endl;
  cout << "f == g is " << (f == g) << endl;
  cout << "f != g is " << (f != g) << endl;
  cout << endl;
  cout << "f + g is ";  !(f + g);
  cout << "f - g is ";  !(f - g);
  cout << "f * g is ";  !(f * g);
  cout << "f / g is ";  !(f / g);
  cout << endl;
  cout << "f + 5 is ";  !(f + 5);
  cout << "f - 5 is ";  !(f - 5);
  cout << "f * 5 is ";  !(f * 5);
  cout << "f / 5 is ";  !(f / 5);
  cout << endl;
  Fraction testF(1,4);
  Fraction testG(2,6);
  testBool(testF,testG);
  testVariantBinaryOperator(testF,testG);
  testConstantBinaryOperator(testF, testG);

  return 0;
}

void testBool(Fraction f, Fraction g) {
    cout << "TESTING BOOLS" << endl;
    cout << "F: "; !f ;
    cout << "G: "; !g;
    cout << "f == g is: " << (f==g) << endl;
    cout << "f != g is: " << (f!=g) << endl;
    cout << endl;
}


void testVariantBinaryOperator(Fraction f, Fraction g) {
    cout << "TESTING VARIANT BINARY OPERATORS" << endl;
    cout << "f + g is: "; !(f+g);
    cout << "f - g is: "; !(f-g);
    cout << "f * g is: "; !(f*g);
    cout << "f / g is: "; !(f/g);
    cout << endl;
}


void testConstantBinaryOperator(Fraction f, Fraction g) {
    cout << "TESTING VARIANT BINARY OPERATORS" << endl;
    cout << "f + 5 is: "; !(f+5);
    cout << "f - 6 is: "; !(f-6);
    cout << "f * 7 is: "; !(f*7);
    cout << "f / 8 is: "; !(f/8);
    cout << endl;
}

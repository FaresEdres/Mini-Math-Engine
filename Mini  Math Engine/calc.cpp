#include "calc.hpp"
double Calculator::calculate(double num1, char calc_operator, double num2) {
  switch (calc_operator) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      if (num2 == 0) {
        
        return -1.0; // Indicate error (replace with appropriate handling)
      }
      return num1 / num2;
    case '>':
    return (num1 > num2) ? 1.0:0.0;
    case '<':
    return (num1 < num2) ? 1.0:0.0;
    case '=':  
    return (num1 == num2) ? 1.0:0.0;
    default:
      return -1.0; // Indicate error
  }
}

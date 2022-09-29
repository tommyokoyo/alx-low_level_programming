#include "main.h"

/**
 * 
 * factorial - returns the factorial of given number
 * 
 * @i - input int
 * 
 * Return - an integer
 * 
 */
 
 int factorial(int n){

    if(n < 0){

        return (-1);

    } else if(n == 0){

        return (1);

    }

    return (n * factorial(n - 1));
 }
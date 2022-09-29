#include "main.h"

/**
 * _strlen_recursion - function that returns length of string
 * 
 * @s - input string
 * 
 * Return -Length of string
 * 
 */

int _strlen_recursion(char *s){

    if (*s != '\0')
    {
        return (_strlen_recursion(s + 1));
    }
    
}
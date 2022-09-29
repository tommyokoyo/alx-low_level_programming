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
        return (1 + _strlen_recursion(s + 1));
    }
    
}
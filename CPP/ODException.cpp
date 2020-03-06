#include "ODException.h"


char* string;

ODException::ODException(char* str) {
    string = str;
}

const char* ODException::what() const throw()
{
    return string;
}
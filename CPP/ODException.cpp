#include "ODException.h"
#include "string.h"

char* generic;
char* invalidimage;

const char* convert(char* x, char* y) {
    char* z;
    strcpy(z, x); strcat(z, y);
    return const_cast<char*>(z);
}

ODException::ODException(char* str) {
    generic = str;
}

const char* ODException::what() const throw()
{
    return generic;
}

ODInvalidImage::ODInvalidImage(char* str) {
    invalidimage = str;
}

const char* ODInvalidImage::what() const throw() {
    return convert("No Valid Image : ", invalidimage);
}
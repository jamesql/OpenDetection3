#include <exception>

class ODInvalidImage: std::exception{
    public:
        ODInvalidImage(char*);
        const char* what() const throw();
};

class ODException: std::exception{
    public:
        ODException(char*);
        const char* what() const throw();
};
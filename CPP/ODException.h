#include <exception>

class ODException: public std::exception{
    public:
        ODException(char*);
        const char* what() const throw();
};
#ifndef FORMA_H_
#define FORMA_H_
#include <string>
class Forma
{
public:
    virtual std::string get_cor() = 0;
    virtual std::string get_nome() = 0;
};


#endif
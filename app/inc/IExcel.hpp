#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

class IExcel
{
public:
    IExcel() = default;
    virtual void Excel_open() = 0;
    virtual void Excel_Write(std::string message) = 0;
    virtual void Excel_close() = 0;
};
#include "IExcel.hpp"
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
class ExcelManger : public IExcel
{
protected:
    ExcelManger() = default;
    ExcelManger(std::string filename);
    void Excel_open() override;
    void Excel_Write(std::string message) override;
    void Excel_close() override;
    // friend std::ostream &operator<<(std::ostream &out, std::string);

private:
    void InsertFirstRow();
    std::string m_filename;
    std::ofstream m_excelfile;
};
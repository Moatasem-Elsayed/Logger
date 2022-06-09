#include <iostream>
#include "inc/Logger.hpp"
int main()
{
    Logger log("log.csv");
    log.write(log.INFO, "Temperature value is 25ْ ");
    log.write(log.DEBUG, "[+] temp is less than critical value");
    log.write(log.ERROR, "Temperature is off due to power");
    return 0;
}
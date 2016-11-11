#ifndef LOGGER_LIB_H
#define LOGEER_LIB_H

#include <fstream>


class Logger
{
private:
    //std::string m_textName;
    std::ofstream m_fileName;
public:
    Logger(std::string textName);

    //print debug message
    void debug(std::string message);

    //print warn message
    void warn(std::string message);

    //print error message
    void error(std::string message);


};


#endif // !LOGGER_LIB_H


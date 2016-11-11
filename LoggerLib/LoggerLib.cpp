
#include "stdafx.h"
#include <iostream>
#include <string>
#include "LoggerLib.hpp"


Logger::Logger(std::string textName)
//: m_textName{ textName }
{
    m_fileName.open(textName);
}

//print debug message
void Logger::debug(std::string message)
{
    m_fileName << message << std::endl;

}

//print warn message
void Logger::warn(std::string message)
{
    m_fileName << message << std::endl;
}
//print error message
void Logger::error(std::string message)
{
    m_fileName << message << std::endl;
}

//test gitlabeee

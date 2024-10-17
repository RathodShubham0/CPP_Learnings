#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

// Define macros for different log levels
#define ERROR_LOG_LEVEL 1
#define WARNING_LOG_LEVEL 2
#define DEBUG_LOG_LEVEL 3

// Uncomment the following line to enable DEBUG logging
// #define DEBUG_MODE

// Function declarations for logging
void logError(const std::string& message);
void logWarning(const std::string& message);

#ifdef DEBUG_MODE
void logDebug(const std::string& message);
#endif

#endif // LOGGER_H

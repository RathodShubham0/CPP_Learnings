#include "logger.h"

// Function to log error messages
void logError(const std::string& message) {
    std::cout << "[ERROR]: " << message << std::endl;
}

// Function to log warning messages
void logWarning(const std::string& message) {
    std::cout << "[WARNING]: " << message << std::endl;
}

// Function to log debug messages (only if DEBUG_MODE is defined)
#ifdef DEBUG_MODE
void logDebug(const std::string& message) {
    std::cout << "[DEBUG]: " << message << std::endl;
}
#endif

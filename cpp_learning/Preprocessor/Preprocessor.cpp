#include "logger.h"

int main() {
    // Example log messages
    logError("This is an error message.");
    logWarning("This is a warning message.");

#ifdef DEBUG_MODE
    logDebug("This is a debug message.");
#endif

    return 0;
}

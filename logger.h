#ifndef __LOGGER_H__
#define __LOGGER_H__

extern void loggerInit(int mode, char *logName, int setLevel);

extern void logError(const char* message, ...);

extern void logInfo(const char* message, ...);

extern void logDebug(const char* message, ...); 

extern void loggerExit();


#endif
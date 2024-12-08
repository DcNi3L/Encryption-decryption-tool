#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <string>

// Save a message to a file
bool saveToFile(const std::string& filename, const std::string& content);

// Load a message from a file
std::string loadFromFile(const std::string& filename);

#endif // FILE_HANDLER_H

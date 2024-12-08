#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>

// Encrypts a text using a simple Caesar Cipher
std::string encryptCaesar(const std::string& text, int shift);

// Encrypts a text using XOR Cipher
std::string encryptXOR(const std::string& text, char key);

#endif // ENCRYPTION_H

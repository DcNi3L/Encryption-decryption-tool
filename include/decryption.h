#ifndef DECRYPTION_H
#define DECRYPTION_H

#include <string>

// Decrypts a text encrypted using Caesar Cipher
std::string decryptCaesar(const std::string& text, int shift);

// Decrypts a text encrypted using XOR Cipher
std::string decryptXOR(const std::string& text, char key);

#endif // DECRYPTION_H

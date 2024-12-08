#include "decryption.h"
#include "encryption.h" // Include the encryption header for access to encryptCaesar and encryptXOR

std::string decryptCaesar(const std::string& text, int shift) {
    return encryptCaesar(text, 26 - shift); // Reverse shift for decryption
}

std::string decryptXOR(const std::string& text, char key) {
    return encryptXOR(text, key); // XOR is symmetric
}
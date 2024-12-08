#include "encryption.h"

std::string encryptCaesar(const std::string& text, int shift) {
    std::string encrypted;
    for (char c : text) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + shift) % 26 + base;
        }
        encrypted += c;
    }
    return encrypted;
}

std::string encryptXOR(const std::string& text, char key) {
    std::string encrypted;
    for (char c : text) {
        encrypted += c ^ key;
    }
    return encrypted;
}

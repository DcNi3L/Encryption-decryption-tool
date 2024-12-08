#include <iostream>
#include "encryption.h"
#include "decryption.h"
#include "file_handler.h"
using namespace std;

int main() {
    string input, result;
    int choice;
    char key;
    int shift;

    while (true) {
        cout << "1. Encrypt\n2. Decrypt\n3. Save to File\n4. Load from File\n5. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 5) break;

        switch (choice) {
        case 1:
            cout << "Enter text to encrypt: ";
            cin.ignore();
            getline(cin, input);
            cout << "Choose encryption method:\n1. Caesar Cipher\n2. XOR Cipher\nChoice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter shift value: ";
                cin >> shift;
                result = encryptCaesar(input, shift);
            } else if (choice == 2) {
                cout << "Enter XOR key: ";
                cin >> key;
                result = encryptXOR(input, key);
            }

            cout << "Encrypted Text: " << result << "\n";
            break;

        case 2:
            cout << "Enter text to decrypt: ";
            cin.ignore();
            getline(cin, input);
            cout << "Choose decryption method:\n1. Caesar Cipher\n2. XOR Cipher\nChoice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter shift value: ";
                cin >> shift;
                result = decryptCaesar(input, shift);
            } else if (choice == 2) {
                cout << "Enter XOR key: ";
                cin >> key;
                result = decryptXOR(input, key);
            }

            cout << "Decrypted Text: " << result << "\n";
            break;

        case 3:
            cout << "Enter filename to save: ";
            cin >> input;
            if (saveToFile(input, result)) {
                cout << "Saved successfully!\n";
            } else {
                cout << "Error saving file.\n";
            }
            break;

        case 4:
            cout << "Enter filename to load: ";
            cin >> input;
            result = loadFromFile(input);
            if (result.empty()) {
                cout << "Error loading file.\n";
            } else {
                cout << "Loaded content: " << result << "\n";
            }
            break;

        default:
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}

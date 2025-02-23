#include <iostream>
#include <string>

using namespace std;

// Функция для проверки, является ли символ буквой 
bool isLetter(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// Функция для проверки, является ли символ цифрой 
bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    setlocale(LC_ALL, "Ru");
    string str;
    string letters;
    string digits;

    cout << "Введите строку состоящую из символов английского языка или арабских цифр: ";
    getline(cin, str);

    // Проходим по строке и разделяем буквы и цифры
    for (char c : str) {
        if (isLetter(c)) {
            letters += c;
        }
        else if (isDigit(c)) {
            digits += c;
        }
    }

    // Выводим сначала буквы, потом цифры
    cout << "Результат: " << letters << digits << endl;

    return 0;
}


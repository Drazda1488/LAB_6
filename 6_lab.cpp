#include <iostream>
#include <string>

using namespace std;

// ������� ��� ��������, �������� �� ������ ������ 
bool isLetter(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// ������� ��� ��������, �������� �� ������ ������ 
bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    setlocale(LC_ALL, "Ru");
    string str;
    string letters;
    string digits;

    cout << "������� ������ ��������� �� �������� ����������� ����� ��� �������� ����: ";
    getline(cin, str);

    // �������� �� ������ � ��������� ����� � �����
    for (char c : str) {
        if (isLetter(c)) {
            letters += c;
        }
        else if (isDigit(c)) {
            digits += c;
        }
    }

    // ������� ������� �����, ����� �����
    cout << "���������: " << letters << digits << endl;

    return 0;
}


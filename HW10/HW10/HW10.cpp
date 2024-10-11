
#include <iostream>
using namespace std;

void task1();
void task2();
void task3();

void task3()
{
    int later = 0;
    int word = 0;
    int index = 0;
    
    char predlogenia[256];
    cout << "Predlogenia: " << "\n";
    cin.getline(predlogenia, 255);

    while (predlogenia[index] != '\0')
    {
        if (predlogenia[index] != ' ')
        {
            later += 1;
            if (index == 0 || predlogenia[index - 1] == ' ')
            {
                word += 1;
            }
        }
        index += 1;
    }

    cout << later / word << "\n";
}

void task2()
{
    char predlogenia[256];
    cout << "Predlogenia: " << "\n";
    cin.getline(predlogenia, 255);

    int word = 0;
    int glasni = 0;
    int soglacni = 0;
    int numbers = 0;
    int rasdeliteli = 0;
    int index = 0;

    while (predlogenia[index] != '\0')
    {
        if (predlogenia[index] == 'a' || predlogenia[index] == 'A' ||
            predlogenia[index] == 'e' || predlogenia[index] == 'E' ||
            predlogenia[index] == 'i' || predlogenia[index] == 'I' ||
            predlogenia[index] == 'o' || predlogenia[index] == 'O' ||
            predlogenia[index] == 'u' || predlogenia[index] == 'U' ||
            predlogenia[index] == 'y' || predlogenia[index] == 'Y')
        {
            glasni += 1;
        }
        else if (predlogenia[index] == 'b' || predlogenia[index] == 'B' ||
            predlogenia[index] == 'c' || predlogenia[index] == 'C' ||
            predlogenia[index] == 'd' || predlogenia[index] == 'D' ||
            predlogenia[index] == 'f' || predlogenia[index] == 'F' ||
            predlogenia[index] == 'g' || predlogenia[index] == 'G' ||
            predlogenia[index] == 'h' || predlogenia[index] == 'H' ||
            predlogenia[index] == 'j' || predlogenia[index] == 'J' ||
            predlogenia[index] == 'k' || predlogenia[index] == 'K' ||
            predlogenia[index] == 'l' || predlogenia[index] == 'L' ||
            predlogenia[index] == 'm' || predlogenia[index] == 'M' ||
            predlogenia[index] == 'n' || predlogenia[index] == 'N' ||
            predlogenia[index] == 'p' || predlogenia[index] == 'P' ||
            predlogenia[index] == 'q' || predlogenia[index] == 'Q' ||
            predlogenia[index] == 'r' || predlogenia[index] == 'R' ||
            predlogenia[index] == 's' || predlogenia[index] == 'S' ||
            predlogenia[index] == 't' || predlogenia[index] == 'T' ||
            predlogenia[index] == 'v' || predlogenia[index] == 'V' ||
            predlogenia[index] == 'w' || predlogenia[index] == 'W' ||
            predlogenia[index] == 'x' || predlogenia[index] == 'X' ||
            predlogenia[index] == 'z' || predlogenia[index] == 'Z')
        {
            soglacni += 1;
        }
        else if (predlogenia[index] >= '0' && predlogenia[index] <= '9')
        {
            numbers += 1;
        }
        else if (predlogenia[index] == '-' || predlogenia[index] == '_' ||
            predlogenia[index] == '=' || predlogenia[index] == '+' ||
            predlogenia[index] == '/' || predlogenia[index] == '|' ||
            predlogenia[index] == '?' || predlogenia[index] == ',' ||
            predlogenia[index] == '.' || predlogenia[index] == '<' ||
            predlogenia[index] == '`' || predlogenia[index] == '>' || 
            predlogenia[index] == '(' || predlogenia[index] == ')' || 
            predlogenia[index] == '{' || predlogenia[index] == '}' || 
            predlogenia[index] == '[' || predlogenia[index] == ']')
        {
            rasdeliteli += 1;
        }
        else if (predlogenia[index] == ' ')
        {
            word += 1;
        }

        index += 1;
    }

    cout << word << "\n";
    cout << glasni << "\n";
    cout << soglacni << "\n";
    cout << numbers << "\n";
    cout << rasdeliteli << "\n";

}

void task1()
{
    char later;
    cout << "Bycvy: " << "\n";
    cin >> later;

    cin.ignore();

    char predlogenia[256];
    cout << "Predlogenia: " << "\n";
    cin.getline(predlogenia, 255);

    int countLeter = 0;
    int index = 0;
    while (predlogenia[index] != '\0')
    {
        if (predlogenia[index] == later)
        {
            countLeter += 1;
        }
        index += 1;
    }

    cout << countLeter;
}

int main()
{
   //task1();
   //task2();
   //task3();
}

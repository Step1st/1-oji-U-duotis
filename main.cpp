#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool validateName(string);
int getBorderSize();
string setGreeting(string);
void print(string*, int);

int main(){

    string name;
    cout << "Enter your name: ";
    do {
        cin >> name;
        cout << endl;
    }
    while(!validateName(name));

    int borderSize = getBorderSize();

    string line[3];
    const string greeting = setGreeting(name);
    const string borderChar = "*";
    name.append("!");
    line[2] = borderChar;
    for (int i=0; i<borderSize; i++)
    {
        name.append(" ");
        line[2].append(" ");
    }
    line[2].append(greeting).append(name).append(borderChar);

    line[0] = string (line[2].length(),*borderChar.c_str());

    string blankLine (line[2].length()-2,' ');
    line[1] = borderChar;
    line[1].append(blankLine).append(borderChar);

    print(line, borderSize);
}

bool validateName(string name){
    for (char i : name)
    {
        if (!isalpha(i))
        {
            cout << "Error! Please use only letters" << endl;
            cout << "Try to enter your name again: ";
            return false;
        }
    }
    return true;
}

int getBorderSize(){
    bool valid;
    string number;
    cout << "Enter border size: ";
    do {
        cin >> number;
        cout << endl;
        for (char i : number)
        {
            if (!isdigit(i))
            {
                cout << "Error! Please enter only digits" << endl;
                cout << "Try to enter border size again: ";
                valid = false;
                break;
            }
            else
            {
                valid = true;
            }
        }
    }
    while(!valid);

    return std::stoi(number);
}

string setGreeting(string name){
    if (name.back() == 's')
    {
        return "Sveikas, ";
    }
    return "Sveika, ";
}

void print(string* line, int borderSize){
    cout << line[0] << endl;

    for(int i=0; i<borderSize; i++)
    {
        cout << line[1] << endl;
    }

    cout << line[2] << endl;

    for(int i=0; i<borderSize; i++)
    {
        cout << line[1] << endl;
    }

    cout << line[0] << endl;
}

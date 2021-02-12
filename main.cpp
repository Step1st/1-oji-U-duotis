#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool validateName(string);
string setGreeting(string);

int main(){

    string name;
    cout << "Enter your name: ";
    do {
        cin >> name;
        cout << endl;
    }
    while(!validateName(name));

    const string greeting = setGreeting(name);
    const string borderChar = "*";
    name.append("! ");
    string nameLine = borderChar;
    nameLine.append(greeting).append(name).append(borderChar);

    string borderLine (nameLine.length(),*borderChar.c_str());

    string blank (nameLine.length()-2,' ');
    string spaceLine = borderChar;
    spaceLine.append(blank).append(borderChar);

    cout << borderLine << endl;
    cout << spaceLine << endl;
    cout << nameLine << endl;
    cout << spaceLine << endl;
    cout << borderLine << endl;
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

string setGreeting(string name){
    if (name.back() == 's')
    {
        return " Sveikas, ";
    }
    return " Sveika, ";
}

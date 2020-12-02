#ifndef INPUT_HPP
#define INPUT_HPP

using namespace std;

string getInput()
{
    char str[2048];
    string input;
    getline(cin, input);
    strcpy(str, input.c_str());
    return input;
}

#endif
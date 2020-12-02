#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
char str[2048];
string input;

cout << "Entre com uma expressão: ";
getline(cin, input);
strcpy(str, input.c_str());
cout << endl;
}

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <sstream>

#include "input.hpp"
#include "expression.hpp"

using namespace std;

int main(int argc, char *argv[])
{
cout << "Entre com uma expressão: ";
string input = getInput();
Expression exp(input);
}

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <sstream>
#define tam 20

#include "input.hpp"
#include "expression.hpp"

using namespace std;

typedef struct{
 	int top;
 	char pos[tam];
 }PILHA;
 
 void iniciaPilha (PILHA &p){
 	p.top = -1;
 }
 
 bool pilhaVazia(PILHA p){
 	if(p.top == -1)
 	return true;
 	else
 	return false;
 }
 
 bool pilhaCheia(PILHA p){
 	if(p.top == tam-1)
 	return true;
 }
 
 void push(char oper, PILHA &p){
 	p.pos[++p.top]= oper;
 }
 
 char pop(PILHA &p){
 	char ch;
 	ch = p.pos[p.top];
 	p.pos[p.top] = '\0';
 	p.top--;
 	return(ch);
 }

 int prioridade (char op){
 	if(op == '+' || op == '-') return(1);
 	if(op == '*' || op == '/') return(2);
 	
 	return 0;
 }

int main(int argc, char *argv[])
{
	string postfix;
cout << "Entre com uma expressão: ";
string input = getInput();
Expression exp(input);

//postfix = convert(input)

}

#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

using namespace std;

enum Type
{
    NUMBER,
    ARITHMETIC,
    DELIMITER,
    SPECIAL,
};

class Expression
{
    private:
        string input;

        void classify()
        {
            char c;
            Type t;

            for(int index=0; index <= input.size()-1; index++)
            {
                c = input[index];

                switch(c)
                {
                    case '%':
                    case '+':
                    case '-':
                    case '/':
                    case '*':
                        t = ARITHMETIC;
                        break;
                    case ';':
                    case ',':
                        t = DELIMITER;
                        break;
                    case '{':
                    case '}':
                    case '[':
                    case ']':
                    case '(':
                    case ')':
                    case '"':
                        t = SPECIAL;
                        break;
                    default:
                        if (isdigit(c))
                        {
                            t = NUMBER;
                        }
                        break;
                }
            }
        }

    public:
        Expression(string userInput)
        {
            input = userInput;
        };
};

#endif

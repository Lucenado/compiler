#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

using namespace std;

enum Type
{
    NUMBER
};

class Expression
{
    private:
        string input;

        void classify()
        {
            char c;
            Type t;

            for(int index=0; index <= input.size()-1; index++) {
                c = input[index];

                switch(c)
                {
                    default:
                        if (isdigit(c))
                        {
                            t = NUMBER;
                        }
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

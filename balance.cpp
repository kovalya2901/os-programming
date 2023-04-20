#include <iostream>
#include <fstream>
#include <stack>
int chekBrackets(const char* file)
{
    std::ifstream fin;
    std::ofstream fout;
    fout.open("out.txt");
    fin.open(file);
    if (!fin.good())
    {
        std::cout << "error open file \"" << file << "\" file must be existen\n";
        fout << "error open file \"" << file << "\" file must be existen\n";
        return 1;
    }
    std::stack<char> lBrackets;
    char symbol;
    while (fin.get(symbol))
    {
        if (symbol == '{')
            lBrackets.push(symbol);
        else if (symbol == '}')
        {
            if (lBrackets.empty())
            {

                std::cout << "error: unbalanced brackets in file \"" << file << "\" - not found { for }\n";
                fout << "error: unbalanced brackets in file \"" << file << "\" - not found { for }\n";
                fout.close();
                return 0;
            }
            else
                lBrackets.pop();
        }
    }

    if (lBrackets.empty())
    {
        std::cout << "Ok! Brackets { } is balanced in file \"" << file << "\"\n";
        fout << "Ok! Brackets { } is balanced in file \"" << file << "\"\n";
    }
    else
    {
        std::cout << "error: unbalanced brackets in file \"" << file << "\" - not found } for {\n";
        fout << "error: unbalanced brackets in file \"" << file << "\" - not found } for {\n";
    }
    fout.close();
    fin.close();
    return 0;
}

int main() {
    chekBrackets("C:\\Users\\VRLab\\source\\repos\\Queue\\Queue\\in.txt");
}

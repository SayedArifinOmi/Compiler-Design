#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;

bool isValidIdentifier(const string &variable, const unordered_set<string> &keywords)
{
    if (keywords.find(variable) != keywords.end())
    {
        cout << "Variable name can't be same as a C++ keyword.\n";
        return false;
    }

    if (variable.empty())
    {
        cout << "Variable name is empty.\n";
        return false;
    }

    if (!(variable[0] == '_' || isalpha(variable[0])))
    {
        cout << "Variable name starts with '" << variable[0] << "' which is invalid.\n";
        return false;
    }

    for (char c : variable)
    {
        if (!(c == '_' || isalnum(c)))
        {
            cout << "'" << c << "' should not be included in the variable name.\n";
            return false;
        }
    }

    return true;
}

int main()
{
    string var;
    cout << "Enter a variable name: ";
    getline(cin, var);

    ifstream file("cpp_keywords.txt");
    if (!file)
    {
        cerr << "Error: Could not open file.\n";
        return 1;
    }

    unordered_set<string> keywords;
    string keyword;
    while (file >> keyword)
    {
        keywords.insert(keyword);
    }

    cout << isValidIdentifier(var, keywords)<<" Valid Idenrifier" << endl;

    return 0;
}

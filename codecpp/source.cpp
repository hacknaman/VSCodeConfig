#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"This", "is", "amazing", "AF, ", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    
    cout << endl;

    return 0;
} 
#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

const unordered_set<string> key({"int", "float", "char", "for", "if", "else", "long", "short", "double"});
inline bool isKey(string s)
{
    return key.count(s);
}

int main()
{
    string line1, line2, word;
    getline(cin, line1);
    getline(cin, line2);

    set<string> ele1;
    unordered_set<string> ele2;

    int c = 'a';
    cout<<c;

    for (int i = 0; i < line1.size(); i++)
    {
        while (isalnum(line1[i]) || line1[i]=='_')
            word.push_back(line1[i++]);
        if (!isKey(word) && (isalpha(word[0]) || word[0]=='_'))
            ele1.insert(word);
        word.clear();

        if (line1[i] == 39 || line1[i] == 34)
        {
            char c = line1[i];
            while (line1[++i] != c)
                if (line1[i] == 92)
                    i++;
        }
    }

    for (int i = 0; i < line2.size(); i++)
    {
        while (isalnum(line2[i]) || line2[i]=='_')
            word.push_back(line2[i++]);
        if (!isKey(word) && (isalpha(word[0]) || word[0]=='_'))
            ele2.insert(word);
        word.clear();

        if (line2[i] == 39 || line2[i] == 34)
        {
            char c = line2[i];
            while (line2[++i] != 39)
                if (line2[i] == 92)
                    i++;
        }
    }
    auto end = ele1.end();
    end--;

    for (auto v = ele1.begin(); v != ele1.end(); v++)
    {
        if (ele2.count(*v))
        {
            cout << *v;
            if (v != end)
                cout << ',';
        }
    }
}
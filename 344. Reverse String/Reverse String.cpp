#include "vector"

using namespace std;

void reverseString(vector<char>& s) {
        if(s.empty())
            return;
        char Elem = s[0];
        s.erase(s.begin());
        reverseString(s);
        s.push_back(Elem);
    }
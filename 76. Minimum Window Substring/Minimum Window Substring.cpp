#include "iostream"
#include "string"
#include "set"

using namespace std;

string minWindow(string s, string t) {
    int L = 0;
    int R = 0;
    int Array[255];
    set<char> Unique;
    for (int i = 0; i < 255; ++i) {
        Array[i]=0;
    }
    for(auto Chr:t){
        Array[Chr]++;
        Unique.insert(Chr);
    }
    int Perfect = Unique.size();
    int Min = INT_MAX;
    int OL = 0;
    int OR = 0;
    while (R != s.size()+1){
        if(Perfect == 0){
            if(Min > R-L){
                Min = R-L;
                OL = L;
                OR = R;
            }
            Array[s[L]]++;
            if(Array[s[L]]>0)
                Perfect++;
            L++;
        } else{
            Array[s[R]]--;
            if(Array[s[R]] == 0){
                Perfect--;
            }
            R++;
        }
    }
    return s.substr(OL,OR-OL);
}
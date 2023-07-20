#include "iostream"
#include "algorithm"

vector<int> findAnagrams(string s, string p)
{
        vector<int> Out;
        int L = 0;
        int R =0;
        vector<int> Array(255,0);
        vector<int> Src(255,0);

        if(p.size() > s.size())
            return {};
        for(auto Chr:p){
            Src[Chr]++;
        }
        while (R < p.size()){
            Array[s[R]]++;
            R++;
        }
        while (R <= s.size()){
            if(Array == Src){
                Out.push_back(R - p.size());
            }
            Array[s[R]]++;
            Array[s[L]]--;
            R++;
            L++;
        return Out;
}
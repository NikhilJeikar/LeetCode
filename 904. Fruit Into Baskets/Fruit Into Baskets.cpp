#include "unordered_map"
#include "iostream"
#include "algorithm"
#include "set"
int totalFruit(vector<int>& fruits) {
    unordered_map<int,int> Set;
    set<int> Elements;
    int L = 0;
    int R = 0;
    int Out = 0;
        
    while (Elements.size() != 2){
        if(R < fruits.size()){
            Elements.insert(fruits[R]);
            Set[fruits[R]]++;
        }
        R++;
        Out++;
        if(R > fruits.size()){
            return --Out;
        }
    }
    Out--;
    while (R != fruits.size()+1){
        if(Elements.size()>2){
            Set[fruits[L]]--;
            if(Set[fruits[L]] == 0){
                Elements.erase(fruits[L]);
            }
            L++;
        }else{
            Out = max(Out,R-L);
            if(R < fruits.size()){
                Elements.insert(fruits[R]);
                Set[fruits[R]]++;
            }
            R++;
    }
    }

    return Out;
}
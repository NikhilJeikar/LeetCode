#include<bits/stdc++.h>
using namespace std;
unordered_map<int,vector<vector<int>>>maps;

void fun(int index, int steps, vector<vector<int>>&vec, vector<vector<int>>&arr){
    if(index<=0){
        maps[steps]=arr;
        return ;
    }

    for(auto&iter:vec){
        if(iter[1]==index)
        {
            arr.push_back(iter);
            if(iter[0]!=iter[1])fun(iter[0],steps+1,vec,arr);
                arr.pop_back();
        }
    }
}
int main(){
    int TestCase;
    int edg1,edg2,n,m;
    cin>>TestCase;
    while(TestCase--){
        vector<vector<int>>vec;
        cin>>n>>m;
        int maximum=INT_MIN;
        while(m--)
        {
            cin>>edg1>>edg2;
            maximum = max(maximum,edg2);
            vector<int>arr={edg1, edg2};
            vec.push_back(arr);
        }

        maps.clear();
        for(int j=n;j<=maximum;j++){
            vector<vector<int>>arr;
            fun(j,0,vec,arr);
        }

        if(maps.empty())
            cout<<"0"<<endl;
        else{
            auto iter=maps.begin();
            cout<<iter->first<<endl;
            vector<vector<int>>b;
            for(auto&x:iter->second)
                b.push_back(x);

            reverse(b.begin(),b.end());

            for(auto & i : b)
                cout<<i[0]<<" "<<i[1]<<endl;
        }
    }


}
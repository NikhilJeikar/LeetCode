#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Node
{
    char Elem;
    int Count;
    Node *Left,*Right;

    Node(char Elem,int Count)
    {
        this->Left = nullptr;
        this->Right = nullptr;
        this->Elem = Elem;
        this->Count = Count;
    }
    Node()
    {
        this->Left = nullptr;
        this->Right = nullptr;
        this->Elem = '$';
        this->Count = 0;
    }
};


struct Compare
{
    bool operator()(Node *node1,Node *node2)
    {
        return node1->Count > node2->Count;
    }
};

void printCodes(struct Node* root, const string& str)
{
    if (!root)
        return;

    if (root->Elem != '$')
        cout<<root->Elem<<": "<<str<<" - "<<root->Count<<endl;

    printCodes(root->Left, str + "0");
    printCodes(root->Right, str + "1");
}

void HuffmanCoding(string& Str)
{
    struct Node *Left,*Right,*Top;

    unordered_map<char,int> FrequencyTable;
    for(char i:Str)
    {
        if(FrequencyTable.find(i) == FrequencyTable.end())
            FrequencyTable[i] = 1;
        else
            FrequencyTable[i]++;
    }
    FrequencyTable['A'] = 45;
    FrequencyTable['B'] = 13;
    FrequencyTable['C'] = 12;
    FrequencyTable['D'] = 16;
    FrequencyTable['E'] = 9;
    FrequencyTable['F'] = 5;
    FrequencyTable['G'] = 15;
    FrequencyTable['H'] = 21;


    priority_queue<Node*,vector<Node*>,Compare> MinHeap;

    for(auto i:FrequencyTable)
        MinHeap.push(new Node(i.first,i.second));

    while (MinHeap.size() > 1)
    {
        Left = MinHeap.top();
        MinHeap.pop();

        Right = MinHeap.top();
        MinHeap.pop();

        Top = new Node('$',Left->Count + Right->Count);
        Top->Left = Left;
        Top->Right = Right;

        MinHeap.push(Top);
    }
    printCodes(MinHeap.top(),"");
}

int main()
{
    string Input = "";
    HuffmanCoding(Input);
}

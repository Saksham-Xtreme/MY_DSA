#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Node {
public:
    unordered_map<char, Node*> child;  
    bool endofword;  
    int freq;

    Node() {
        endofword = false;
    }
};


class Trie {
    Node* root; 

public:
    Trie() {
        root = new Node();  
        root->freq=-1;
    }

   
    void insert(string key) {
        Node* temp = root;

        for (int i = 0; i < key.size(); i++) {
            // if character is not present, create a new node
            if (temp->child.count(key[i]) == 0) {
                temp->child[key[i]] = new Node();
                temp->child[key[i]]->freq=1;

            } else{
                temp->child[key[i]]->freq++;
            }
            // move to the child node
            temp = temp->child[key[i]];
        }
        // mark end of word
        temp->endofword = true;
    }

    // Search a word in the Trie
    bool search(string key) {
        Node* temp = root;
        for (int i = 0; i < key.size(); i++) {
            // if character is present, move ahead
            if (temp->child.count(key[i])) {
                temp = temp->child[key[i]];
            } else {
                // if character not found → word not present
                return false;
            }
        }
        // return true only if it's the end of a valid word
        return temp->endofword;
    }


    bool startswith(string prefix){
        Node* temp= root;

        for(int i=0;i<prefix.size();i++){
            if(temp->child[prefix[i]]){
                temp=temp->child[prefix[i]];

            } else{
                return false;
            }

        }

        return true;
    }
    void longestHelp(Node* root, string &ans, string temp){
        for(pair<char,Node*> children : root->child){
            if(children.second->endofword){
                temp+= children.first;

                if((temp.size()==ans.size() && temp < ans)|| (temp.size() > ans.size())){
                    ans=temp;
                }

                longestHelp(children.second, ans, temp);
                temp=temp.substr(0,temp.size()-1);
            }
        }
    }
    string longesSubWith(){
        string ans="";
        longestHelp(root,ans,"");
        return ans;
    }
};


string longestString(vector<string> dict){
    Trie trie;

    for(int i=0;i<dict.size();i++){
        trie.insert(dict[i]);
    }

    return trie.longesSubWith();
}


int main(){
    vector<string> dict ={"apple", "app","appl","a","apply","banana","ap"};
    
    cout<< longestString(dict)<<endl;
    return 0;
}
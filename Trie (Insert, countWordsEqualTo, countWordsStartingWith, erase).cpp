#include <bits/stdc++.h>
struct Node{
    Node *link[26];
    int end=0;
    int prefix=0;

    bool containsKey(char c){
        return (link[c-97]!=NULL);
    }

    void createTrie(char c){
        link[c-97]=new Node();
    }

    Node *getKey(char c){
        return link[c-97];
    }
};

class Trie{
private:
    Node *root;

public:
    Trie(){
        root=new Node();
    }

    void insert(string &word){
        Node *node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                node->createTrie(word[i]);
            }
            node=node->getKey(word[i]);
            node->prefix++;
        }
        node->end++;
    }

    int countWordsEqualTo(string &word){
        Node *node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])) return 0;
            node=node->getKey(word[i]);
        }
        return node->end;
    }

    int countWordsStartingWith(string &word){
        Node *node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])) return 0;
            node=node->getKey(word[i]);
        }
        return node->prefix;
    }

    void erase(string &word){
        Node *node=root;
        for(int i=0; i<word.size(); i++){
            node=node->getKey(word[i]);
            node->prefix--;
        }  
        node->end--;      
    }
};

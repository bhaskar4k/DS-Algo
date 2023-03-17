struct Node{
    Node *link[26];
    bool flag=false;

    bool containsKey(char c){
        return (link[c-97]!=NULL);
    }

    void createTrie(char c){
        link[c-97]=new Node();
    }

    Node *getKey(char c){
        return link[c-97];
    }

    void setEnd(){
        flag=true;
    }
};

class Trie {
private:
    Node *root;

public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node *node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])){
                node->createTrie(word[i]);
            }
            node=node->getKey(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node *node=root;
        for(int i=0; i<word.size(); i++){
            if(!node->containsKey(word[i])) return false;
            node=node->getKey(word[i]);
        }
        return node->flag;
    }
    
    bool startsWith(string prefix) {
        Node *node=root;
        for(int i=0; i<prefix.size(); i++){
            if(!node->containsKey(prefix[i])) return false;
            node=node->getKey(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

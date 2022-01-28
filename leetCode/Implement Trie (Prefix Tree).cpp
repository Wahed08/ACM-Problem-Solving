struct TrieNode{
    
    TrieNode *children[26];
    bool endOfWord = false;
    
    bool containsKey(char ch){
        return (children[ch - 'a'] != NULL);
    }
    
    //putting the word[i] in the node
    void put(char ch, TrieNode* node){
        children[ch - 'a'] = node;
    }
    
    //getting the word[i]
    TrieNode *get(char ch){
        return children[ch - 'a'];
    }
    
    //setting end of word false
    void setEndOfWord(){
        endOfWord = true;
    }
    
    bool isEnd(){
        return endOfWord;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
       root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for(int i=0; i<word.length(); i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new TrieNode());
            }
            //reference to the next trieNode
            node = node->get(word[i]);
        }
        node->setEndOfWord();
    }
    
    bool search(string word) {
        TrieNode* node =  root;
        for(int i=0; i<word.length(); i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
       return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        TrieNode* node =  root;
        for(int i=0; i<prefix.length(); i++){
            if(!node->containsKey(prefix[i])){
                return false;
            }
            node = node->get(prefix[i]);
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

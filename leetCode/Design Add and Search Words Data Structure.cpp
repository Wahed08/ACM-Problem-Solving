struct TrieNode{
    
    TrieNode *children[551];
    bool endOfWord = false;
    
    bool containsKey(char ch){
        return (children[ch - '.'] != NULL);
    }
    
    //putting the word[i] in the node
    void put(char ch, TrieNode* node){
        children[ch - '.'] = node;
    }
    
    //getting the word[i]
    TrieNode *get(char ch){
        return children[ch - '.'];
    }
    
    //setting end of word false
    void setEndOfWord(){
        endOfWord = true;
    }
    
    bool isEnd(){
        return endOfWord;
    }
};

class WordDictionary {
public:
    TrieNode* root;
    
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
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
    
bool dotCheck(TrieNode* node, string word){
     for(int i=0; i<word.length(); i++){
        if(word[i] == '.'){
             for(char c = 'a'; c <= 'z'; c++){
                 if(node->containsKey(c) && dotCheck(node->get(c),word.substr(i+1)))
                     return true;
             }
            return false;
         }
        else{
             if(!node->containsKey(word[i]))
                return false;
            node = node->get(word[i]);
            }
        }
       return node->isEnd();
    }
    
    bool search(string word) {
        TrieNode* node =  root;
        return dotCheck(node, word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

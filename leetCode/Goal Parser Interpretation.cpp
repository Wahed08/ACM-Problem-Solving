class Solution {
public:
    string interpret(string command) {
        string str = "";
        
        for(int i=0; i<command.length(); i++){
            if(command[i] == 'G')
                str += 'G';
            if(command[i] == '(' && command[i+1] == ')')
                str += 'o';
            if(command[i] == '(' && command[i+1] == 'a'){
                str += 'a';
                str += 'l'; 
            }
        }
        
        return str;
    }
};

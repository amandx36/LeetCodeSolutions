class Trie {
private:
    struct Node {
        char data;
        unordered_map<char, Node*> children;
        bool isTerminal;

        Node(char ch) {
            data = ch;
            isTerminal = false;
        }
    };

    Node* root;

public:
    Trie() {
        root = new Node('\0');
    }

    void insert(string word) {
        Node* curr = root;
        for (char ch : word) {
            if (curr->children.count(ch) == 0) {
                curr->children[ch] = new Node(ch);
            }
            curr = curr->children[ch];
        }
        curr->isTerminal = true;
    }

    bool search(string word) {
        Node* curr = root;
        for (char ch : word) {
            if (curr->children.count(ch) == 0) {
                return false;
            }
            curr = curr->children[ch];
        }
        return curr->isTerminal;
    }

    bool startsWith(string prefix) {  
        Node* curr = root;
        for (char ch : prefix) {
            if (curr->children.count(ch) == 0) {
                return false;
            }
            curr = curr->children[ch];
        }
        return true;
    }
};

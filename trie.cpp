#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Trie {
private:
    struct TrieNode {
    bool isword;
    vector<TrieNode*> children;
    TrieNode(): isword(false), children(256,nullptr){}
    };

    TrieNode* root;

public:
    void add_word(string);
    bool search_word(const string&);
    Trie();
    Trie(const vector<string>&);
};

void Trie::add_word(string word) {
    TrieNode* node = root;
    for (auto & c : word) {
        if (!node->children[c])
            node->children[c] = new TrieNode();
        node = node->children[c];
    }
    node->isword = true;
}

bool Trie::search_word(const string& word) {
    TrieNode* node = root;
    for (auto & c : word) {
        if (!node->children[c])
            return false;
        else
            node = node->children[c];
    }
    return node->isword;
}
 
Trie::Trie(const vector<string>& words) {
    root = new TrieNode();
    for (auto & w: words) {
        this->add_word(w);
    }
}

int main() {
    vector<string> words = {"apple","applecider","applebee","orange","name","Thursday","best"};
    Trie* t = new Trie(words);
    t->add_word("Li");

    string w1 = "applebees";
    if (t->search_word(w1))
        cout << "Found " << w1 << endl;
    else
        cout << "Not found " << w1 << endl;

    string w2 = "Li";
    if (t->search_word(w2))
        cout << "Found " << w2 << endl;
    else
        cout << "Not found " << w2 << endl;

}
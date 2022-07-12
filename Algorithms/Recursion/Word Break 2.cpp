#include<bits/stdc++.h>
void cal(string &s, unordered_set<string> &words, vector<string> &res, int i, string word, string sentence){
    if(i == s.size()){
        res.push_back(sentence);
        return;
    }
    if(i>s.size())
        return;
    for(;i<s.size();++i){
        word += s[i];
        if(words.count(word)){
            string newSentence = sentence + word;
            newSentence += " ";
            cal(s,words,res,i+1,"",newSentence);
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    vector<string> res;
    unordered_set<string> words;
    for(int i=0;i<dictionary.size();++i)
        words.insert(dictionary[i]);
    cal(s,words,res,0,"","");
    return res;
}

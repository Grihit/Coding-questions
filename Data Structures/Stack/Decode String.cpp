class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<int> countStack;
        stack<string> wordStack;

        int number = 0;
        string word = "";

        for (int i = 0; i < n; i++)
        {
            char c = s.at(i);

            if (isdigit(c))
            {
                number = number * 10 + c - '0';
            }
            else if (isalpha(c))
            {
                word += c;
            }
            else if (c == '[')
            {
                countStack.push(number);
                wordStack.push(word);
                number = 0;
                word = "";
            }
            else
            {
                int count = countStack.top();
                countStack.pop();
                string duplicatedWord = wordStack.top();
                //cout<<duplicatedWord<<" ";
                wordStack.pop();

                for (int j = 1; j <= count; j++)
                {
                    duplicatedWord += word;
                }

                word = duplicatedWord;
                
            }
        }
        return (word);
    }
};

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string output;
    int cols;
    int size = s.size();
    int rows = sqrt(size);
    if(rows * rows == size)
        cols = rows;
    else
        cols = rows + 1;
    for(int i=0;i<cols;++i)
    {
        for(int j=i;j<size;j=j+cols)
        {
            cout<<s[j];
        }
        cout<<' ';
    }
    return 0;
}


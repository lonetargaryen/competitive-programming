// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<string> solve(vector<string>& book, int page, int page_size) {
    vector<string> ans;
    if (book.size() <= (page*page_size)) return ans;
    int ptr = (page*page_size);
    for (int i=ptr;i<(ptr+page_size) && i<book.size();i++) {
        ans.push_back(book[i]);
    }
    return ans;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}
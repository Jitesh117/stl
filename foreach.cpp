#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "xqcpog";
    for(auto it: s)
        cout << it << " ";
    cout << endl << s.at(0);
    cout << endl << s.front();
    cout << endl << s.back();
    cout << endl << s.at(s.size()-1);
    return 0;
}
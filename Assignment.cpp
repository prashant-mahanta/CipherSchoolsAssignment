#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define mi map<int,int>
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()



const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;

typedef long long int ll;

bool balanced(string bracket) {
    stack<char> st;
    for (int i = 0; i < bracket.length(); i++) {
        // If opening braces then add it to stack
        if (bracket[i] == '[' || bracket[i] == '{' || bracket[i] == '(') {
            st.push(bracket[i]);
        }
        else {
            // If stack is empty return false
            if (st.empty())
                return false;
            // If not balanced return false
            if ((bracket[i] == '}' && st.top()!='{') || (bracket[i] == ']' && st.top()!='[') || (bracket[i] == ')' && st.top()!='('))
                return false;
            // If balanced remove the opening brace
            else 
                st.pop();
        }
    }
    if (st.empty())
        return true;
    
    return false;
}

int main(){

    // ios_base:: sync_with_stdio(false);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string bracket;
        cin >> bracket;
        bool ans = balanced(bracket);
        if (ans) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
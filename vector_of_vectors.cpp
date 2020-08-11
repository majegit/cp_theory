#include <bits/stdc++.h>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, a, b;
    //vector<vector<int>> vecs      THIS DOES NOT WORK!\
    How many vectors is stored inside the outer vector must\
    be known at compile time for this to work.
    cin >> n >> q;
    vector<vector<int>> vecs(n);

    for(int i=0; i<n; i++)
    {
        cin >> a;
        while(a--)
        {
            cin >> b;
            cout << "b is: " << b << "\n";
            vecs[i].push_back(b);
        }
    }
    while(q--)
    {
        cin >> a >> b;
        cout << vecs[a][b] << "\n";
    }
    return 0;
}

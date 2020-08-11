#include <bits/stdc++.h>

using namespace std;
class Matrix
{
    public:
    vector<vector<int>> a;
    Matrix operator+(Matrix other){
        Matrix c;
        int rows = this->a.size();
        for(int j=0; j<rows; j++)
        {
            int columns = this->a[j].size();
            vector<int> row;
            for(int i=0; i<columns; i++)
                row.push_back(this->a[j][i]+other.a[j][i]);
            c.a.push_back(row);
        }
        return c;
    }
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}

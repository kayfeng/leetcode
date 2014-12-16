#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        if (numRows==0){return res;}
        vector<int> r;
        r.push_back(1);
        res.push_back(r);
        if (numRows==1){return res;}
        r.push_back(1);
        res.push_back(r);
        if (numRows==2){return res;}
         
        for (int i=2;i<numRows;i++){
            vector<int> c(i+1,1);
            for (int j=1;j<i;j++){
                c[j]= res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(c);
        }
        return res;
    }
};

int main(){
    Solution s1;
    vector<vector<int> > res;
    
    res = s1.generate(3);
    for (vector< vector<int> >::size_type u = 0; u < res.size(); u++) {
    for (vector<int>::size_type v = 0; v < res[u].size(); v++) {
            cout << res[u][v] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
    
    }

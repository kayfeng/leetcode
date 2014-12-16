#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r, last_r;
        r.push_back(1);
        if(rowIndex==0){return r;}
        r.push_back(1);        
        if(rowIndex==1){return r;}
        last_r=r;
        for(int i=2;i<=rowIndex;i++)
        {
            r.clear();
            r.push_back(1);
            for (int j=1;j<i;j++){
                r.push_back(last_r[j-1]+last_r[j]);
            }
            r.push_back(1);
            last_r=r;
        }
        return r;
        }
};
int main(){
    vector<int> r(5,1);
    Solution s1;
    r=s1.getRow(3);
    for (vector<int>::size_type u = 0; u < r.size(); u++)
    cout<<r[u]<<" ";
    system("pause");
    return 0;
    
    }

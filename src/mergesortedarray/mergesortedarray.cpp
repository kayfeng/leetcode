#include<iostream>
#include<cstdlib>
using namespace std;
class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int count=m+n-1;
        m--; n--;
        while (m>=0 && n>=0){
            A[count--] = A[m]>B[n]? A[m--]:B[n--];
        }
        while (n>=0){ A[count--] = B[n--];}
    }
};
void printArray(int A[], int n) {
    printf("{");
    for(int i=0; i<n; i++) {
        printf("%d, ", A[i]);
    }
    printf("}\n");
}
int main(){
    Solution s1;
    int a[]={2,4,6,8,10,0,0,0};
    int b[]={1,3,5};
    s1.merge(a, 5, b, 3 );
    printArray(a,  sizeof(a)/sizeof(int));
    
    system("pause");
    return 0;
    
    }
    

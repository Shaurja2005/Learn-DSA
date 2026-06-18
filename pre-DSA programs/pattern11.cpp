/* Pattern ->

1
10
101
1010
10101
for value of n=5 */
#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern2(int n) {
                for(int i=0 ; i<n ; i++){
                        for(int j=0 ; j<=i ; j++){
                            if(j%2==0)
                            cout << 1;
                            else
                            cout << 0;
                        }
                            cout << endl;
                }
        }
};

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    Solution s;
    s.pattern2(n);
    return 0;
}
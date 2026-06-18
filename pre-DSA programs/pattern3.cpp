/* Pattern ->
*
**
***
****
for value of n=4 */
#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern2(int n) {
                for(int i=1 ; i<=n ; i++){
                        for(int j=1 ; j<=i ; j++){
                                cout << j;
                        }
                            cout << endl;
                }
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern2(n);
    return 0;
}
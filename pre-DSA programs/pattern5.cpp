/* Pattern ->
*****
****
***
**
*
for value of n=5 */
#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern5(int n) {
                for(int i=1 ; i<=n ; i++){
                        for(int j=i ; j<=n ; j++){
                                cout << "*";
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
    s.pattern5(n);
    return 0;
}
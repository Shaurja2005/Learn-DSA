/* Pattern ->

*
**
***
****
*****
****
***
**
*
for value of n=4 */
#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern2(int n) {
                for(int i=0 ; i<n ; i++){
                        for(int j=0 ; j<=i ; j++){
                                cout << "*";
                        }
                            cout << endl;
                }
        }
        void pattern5(int n) {
                for(int i=1 ; i<=n ; i++){
                        for(int j=i ; j<=n-1 ; j++){
                                cout << "*";
                        }
                            cout << endl;
                }
        }
        void pattern10(int n){
            pattern2(n);
            pattern5(n);
        }
};

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    Solution s;
    s.pattern10(n);
    return 0;
}
/* Pattern ->
****
****
****
**** 
for value of n=4 */
#include <iostream>
using namespace std;
class Solution {
public:
    void pattern1(int n) {
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
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
    Solution sol;
    sol.pattern1(n);
    return 0;
}
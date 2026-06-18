/* Pattern ->
12345
1234
123
12
1
for value of n=5 */
#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern6(int n) {
                for(int i=n ; i>0 ; i--){
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
    s.pattern6(n);
    return 0;
}
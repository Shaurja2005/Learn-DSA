/* Pattern:-
ABCDEF
ABCDE
ABCD
ABC
AB
A
for value of n=5*/
#include <iostream>
using namespace std;
class Solution{
    public:
    void pattern14(int n){
        for(int i=n; i>=0;i--){
            for(char j= 'A'; j<='A'+i;j++){
                cout << j;
            }
            cout << endl;
        }
    }
};
int main(){
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    Solution s;
    s.pattern14(n);
}
/* Pattern:-
A 
B B 
C C C 
D D D D 
E E E E E 
for value of n=5*/
#include <iostream>
using namespace std;
class Solution{
    public:
    void pattern14(int n){
        char c= 'A';
        for(int i=0; i<n;i++){
            for(int j=0; j<=i;j++){
                cout << c << " ";
            }
            c=c+1;
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
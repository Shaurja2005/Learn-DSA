/* Pattern 17 :
   A
  ABA
 ABCBA
ABCDCBA
for n=4
*/
#include <iostream>
using namespace std;
class Solution{
    public:
    void pattern17(int n){
        for(int i = 0; i< n; i++){
            for(int k = n-i-1; k>0; k--){
                cout << " ";
            }
            char ch = 'A' -1;
            for(int j = 0; j < (2*i)+1;j++){
                if(j<=i){
                    ch++;
                    cout << ch;
                }
                else{
                    ch--;
                    cout << ch;
                }
            }
            cout << endl;
        }
    }
};
    int main(){
        int n;
        cout << "Enter the value of n : "<<endl;
        cin >> n;
        Solution s;
        s.pattern17(n);
        return 0;
    }
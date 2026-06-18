/* Pattern ->

    *
   ***
  *****
 *******
*********

for value of n=5 */
#include <iostream>
using namespace std;
class Solution{
    public:
        void pattern7(int n){
                for(int i=1 ; i<=n ; i++){
                    // this one is for rows
                    for(int k = n-i; k>0;k--){
                        // this one is for spaces
                        cout << " ";
                    }
                    for(int j=1 ; j<=(2*i)-1 ; j++){
                         // this one is for the stars which are to be printed
                        cout << "*" ;
                    }
                        cout << endl;
                    }
    }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern7(n);
    return 0;
}
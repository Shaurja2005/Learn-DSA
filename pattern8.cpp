/* Pattern ->

*********
 *******
  *****
   ***
    *

for value of n=5 */
#include <iostream>
using namespace std;
class Solution{
    public:
        void pattern8(int n){
                for(int i=n ; i>0 ; i--){
                    // this one is for rows
                    for(int k = i; k<n;k++){
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
    s.pattern8(n);
    return 0;
}
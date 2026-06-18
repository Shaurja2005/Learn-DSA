/* Pattern ->

    *
   ***
  *****
 *******
*********
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
    void pattern9(int n){
    pattern7(n);
    pattern8(n);
}
};
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    Solution s;
    s.pattern9(n);
    return 0;
}
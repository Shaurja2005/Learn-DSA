/* Pattern ->

1       
12     
123   
1234 
1
21
321
4321

for value of n=4 */
#include <iostream>
using namespace std;
class Solution{
    public:
        void pattern_nepal(int n){
                for(int i=1 ; i<=n ; i++){
                    // this one is for rows
                    for(int k = 1; k<=i;k++){
                        // this one is for the 1 st pattern
                        cout << k;
                    }
                    for(int j = 1; j <= 2*(n-i) + 1; j++){
                        cout << " ";
                        }
                        cout << endl;
                    }
                    for(int i=n ; i>0 ; i--){
                        for(int j =n-i+1 ; j>0 ; j--){
                            cout << j;
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
    s.pattern_nepal(n);
    return 0;
}
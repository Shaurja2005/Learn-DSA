/* Pattern ->
Enter n: 4
1            1
12        21
123    321
12344321
*/
#include <iostream>
using namespace std;
class Solution{
    public:
        void pattern12(int n){
                for(int i=1 ; i<=n ; i++){
                    // this one is for rows
                    for(int k = 1; k<=i;k++){
                        // this one is for the 1 st pattern
                        cout << k;
                    }
                    for(int j = 1; j <= 2*(n-i) ; j++){
                        cout << " ";
                        }
                        for(int q =i ; q>0 ; q--){
                            cout << q;
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
    s.pattern12(n);
    return 0;
}
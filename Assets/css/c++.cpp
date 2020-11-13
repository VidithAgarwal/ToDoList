#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--) {
        long long a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        int c = 0;
        if (y <= x) {
            while (b > y) {
                if (n == c) {
                    break;
                }
                c++;
                b -= 1;
            }
            while (a > x) {
                if (c == n) {
                    break;
                }
                c++;
                a -= 1;
            }
            cout << a * b;
        } else {
            while (a > x) {
                if (n == c) {
                    break;
                }
                c++;
                a -= 1;
            }
            while (b > y) {
                if (c == n) {
                    break;
                }
                c++;
                b -= 1;
            }
            cout << a * b;
        }
    }
    return 0;
}
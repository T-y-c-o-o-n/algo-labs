#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[70009];
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;
    for (int i = 0; i < n; ++i)
        swap(a[i], a[i/2]);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}

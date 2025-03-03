#include<iostream>
#include<fstream>
using namespace std;

int toHop (int n, int k);
int kiemTra(int k, int n);
void nhapKN(int k[], int n[], int soPhanTu);

int main () {
    freopen("INPUT.INP", "r", stdin);
    freopen ("OUTPUT.OUT", "w", stdout);
    int soPhanTu;
    cin >> soPhanTu;
    int k[soPhanTu], n[soPhanTu];
    nhapKN (k, n, soPhanTu);
    for (int i = 0; i <= soPhanTu; i++){
        cout << toHop(n[i], k[i]) << endl;
    }

}
int toHop(int n, int k){
    if (k >= 1){
        return toHop(n-1, k-1) + toHop(n-1, k);
    }
    return 1;
}
int kiemTra(int k, int n){
    if (0 <= k && k <= n && 1 <= n && n <= 20){
        return 1;
    }
    return 0;
}
void nhapKN (int k[], int n[], int soPhanTu){
    for (int i = 0; i <= soPhanTu; i++){
        cin >> k[i] >> n[i];
    }
}

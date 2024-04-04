#include <iostream>
#include <vector>
using namespace std;

class mang{
    public:
    int n;
	vector<int> v;
    void nhapMang() {
	cout << "Kich thuoc mang ban muon nhap vao: " << endl;
    cin >> n;
    cout << "Nhap cac phan tu trong mang: " << endl;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Mang gom cac phan tu: " << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    }
};

int main(){
    mang m;
    m.nhapMang();
 	return 0;
    
}
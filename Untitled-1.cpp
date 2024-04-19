#include <iostream>
#include <vector>
using namespace std;

class mang{
    private:
    int n;
    vector<int> v;
    public:
    int getKichThuoc()
    {
        return this->n;
    }
    vector<int> getPhanTu()
    {
        return this->v;
    }
    void nhapMang()
    {
        cout << "Input size of array: " << endl;
        cin >> n;
        cout << "Input elements in array: " << endl;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << "Elemnts in array: ";
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    void sapxepMang()
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = v[i];
            int j;
            for (j = i; j >= gap && v[j - gap] > temp; j -= gap)
            {
                cout << "Comparing elements: ";
                cout << v[j - gap] << " and " << temp << endl;
                v[j] = v[j - gap];
            }
            if (temp != v[j]) {
            cout << "Swapping " << v[j] << " and " << temp << endl;
            v[j] = temp;
            }
            else {
                cout << "Element of index " << i << " and index " << j-gap << " = "<< temp << " are same so no swawp \n";
            }
        }
    }
}

    void xuatMang()
    {
        cout << "Result: ";
        for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    }
};
int main(){
    mang m;
    m.nhapMang();
    m.sapxepMang();
    m.xuatMang();
    return 0;
}


#include <iostream>
using namespace std;
class Chai {
protected:
    float h;
    float S, V;
public:
    virtual void Input() {
        cin >> h;
    }
    virtual float GetDienTich() = 0;
    virtual float GetTheTich() = 0;
};
class HCN : public Chai {
    float a, b;
public:
    void Input() {
        Chai::Input();
        cin >> a >> b;
        S = 2 * h * (a + b) + 2 * (a * b);
        V = h * a * b;
    }
    float GetDienTich() {
        return S;
    }
    float GetTheTich() {
        return V;
    }
};
class HinhTru : public Chai {
    float r;
public:
    void Input() {
        Chai::Input();
        cin >> r;
        S = 2 * 3.14 * r * h;
        V = h * 3.14 * r * r;
    }
    float GetDienTich() {
        return S;
    }
    float GetTheTich() {
        return V;
    }
};
class LapPhuong : public Chai {
public:
    void Input() {
        Chai::Input();
        S = 6 * h * h;
        V = h * h * h;
    }
    float GetDienTich() {
        return S;
    }
    float GetTheTich() {
        return V;
    }
};
int main() {
    int n; int type;
    cin >> n;
    Chai** ChaiList = new Chai * [n];
    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 1) ChaiList[i] = new HinhTru;
        else if (type == 2) ChaiList[i] = new HCN;
        else if (type == 3) ChaiList[i] = new LapPhuong;
        ChaiList[i]->Input();
    }
    float tongS = 0, tongV = 0;
    for (int i = 0; i < n; i++) {
        tongS += ChaiList[i]->GetDienTich();
        tongV += ChaiList[i]->GetTheTich();
    }
    cout << "Dien tich chai vo: " << tongS << endl;
    cout << "Luong nuoc tren mat dat: " << tongV * 0.1;
}

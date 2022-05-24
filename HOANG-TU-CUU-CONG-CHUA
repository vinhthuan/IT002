#include <iostream>
using namespace std;
class Cong {
protected:
    int Loai;
public:
    int GetLoai() {
        return Loai;
    }
    virtual void Input() = 0;
    virtual int TraVe() = 0;
};
class GiaoThuong : public Cong {
    int DonGia, SoHang;
public:
    void Input() {
        cin >> DonGia >> SoHang;
        Loai = 1;
    }
    int TraVe() {
        return DonGia * SoHang;
    }
};
class HocThuat : public Cong {
    int ChiSoTM;
public:
    void Input() {
        Loai = 2;
        cin >> ChiSoTM;
    }
    int TraVe() {
        return ChiSoTM;
    }
};
class SucManh : public Cong {
    int ChiSoSM;
public:
    void Input() {
        Loai = 3;
        cin >> ChiSoSM;
    }
    int TraVe() {
        return ChiSoSM;
    }
};
int main() {
    int n; int type;
    cin >> n;
    Cong** CongList = new Cong * [n];
    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 1) CongList[i] = new GiaoThuong;
        else if (type == 2) CongList[i] = new HocThuat;
        else if (type == 3) CongList[i] = new SucManh;
        CongList[i]->Input();
    }
    int Tien, ThongMinh, SucManh;
    cin >> Tien >> ThongMinh >> SucManh;
    int i = 0;
    for (i; i < n; i++) {
        if (CongList[i]->GetLoai() == 1) {
            Tien -= CongList[i]->TraVe();
        }
        if (Tien < 0) break;
        else if (CongList[i]->GetLoai() == 2) {
            if (ThongMinh < CongList[i]->TraVe()) break;
        }
        else if (CongList[i]->GetLoai() == 3) {
            SucManh -= CongList[i]->TraVe();
        }
        if (SucManh < 0) break;
    }
    if (i < n) cout << -1;
    else cout << Tien << " " << ThongMinh << " " << SucManh;
    
}

#include <iostream>
#include <string>
using namespace std;
class Thuyen {
protected:
    string LoaiThuyen;
    string SoHieu;
    int SL;
public:
    virtual void Input() {
        cin >> SoHieu;
        cin >> SL;
    }
    virtual void Output() {
        cout << SoHieu << " - " << LoaiThuyen << " - " << SL << " thuyen vien";
    }
};
class Ghe : public Thuyen {
    bool DongCo;
public:
    void Input() {
        Thuyen::Input();
        cin >> DongCo;
        LoaiThuyen = "Ghe";
    }
    void Output() {
        Thuyen::Output();
        if (DongCo == 1) cout << " - Co Dong Co" << endl;
    }
};
class ThuyenThuong : public Thuyen {
    string HangDong;
public:
    void Input() {
        Thuyen::Input();
        cin >> HangDong;
        LoaiThuyen = "Thuyen thuong";
    }
    void Output() {
        Thuyen::Output();
        cout << " - " << HangDong << endl;
    }
};
class ThuyenLon : public Thuyen {
    string HangDong;
    int PhamVi;
public:
    void Input() {
        Thuyen::Input();
        cin >> HangDong;
        cin >> PhamVi;
        LoaiThuyen = "Thuyen lon";
    }
    void Output() {
        Thuyen::Output();
        cout << " - " << HangDong << " - " << PhamVi << "m" << endl;
    }
};
int main() {
    int n; int type;
    cin >> n;
    Thuyen** ThuyenList = new Thuyen * [n];
    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 1) ThuyenList[i] = new Ghe;
        else if (type == 2) ThuyenList[i] = new ThuyenThuong;
        else if (type == 3) ThuyenList[i] = new ThuyenLon;
        ThuyenList[i]->Input();
    }
    for (int i = 0; i < n; i++) {
        ThuyenList[i]->Output();
    }
}

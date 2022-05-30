#include <iostream>
using namespace std;
class CPU {
protected:
    string code;
    string hang;
    int core;
    float xungnhip;
    int giaCPU;
    string loaiCPU;
public:
    virtual void set() {
        cin >> code;
    }
    virtual void out() {
        cout << "CPU: " << code << " " << loaiCPU << " " << hang << " " << core << " " << xungnhip << " " << giaCPU << endl;
    }
    virtual int tienCPU() = 0;
};
class Alpha : public CPU {
public:
    void set() {
    CPU::set();
        giaCPU = 200;
        core = 2;
        xungnhip = 1.8;
        hang = "Black";
        loaiCPU = "Alpha";
    }
    void out() {
        CPU::out();
    }
    int tienCPU() {
        return giaCPU;
    }
};
class Beta : public CPU {
public:
    void set() {
        CPU::set();
        giaCPU = 400;
        core = 4;
        xungnhip = 2.46;
        hang = "Black";
        loaiCPU = "Beta";
    }
    void out() {
        CPU::out();
    }
    int tienCPU() {
        return giaCPU;
    }
}; 
class Gamma : public CPU {
public:
    void set() {
        CPU::set();
        giaCPU = 600;
        core = 4;
        xungnhip = 2.6;
        hang = "White";
        loaiCPU = "Gamma";
    }
    void out() {
        CPU::out();
    }
    int tienCPU() {
        return giaCPU;
    }
};
class ManHinh {
protected:
    int gianhap;
    string code;
    string hangSX;
    float kichthuoc;
    string phangiai;
public:
    virtual void set(string _code, string _hangSX) {
        code = _code;
        hangSX = _hangSX;
        kichthuoc = 4.7;
    }
    virtual void out() {
        cout << "Man hinh: " << code << " " << hangSX << " " << phangiai << " " << gianhap << endl;
    }
    virtual int tienManHinh() = 0;
};
class HD : public ManHinh {
public:
    void set(string _code, string _hangSX) {
        ManHinh::set(_code, _hangSX);
        gianhap = 200;
        phangiai = "HD";
    }
    void out() {
        ManHinh::out();
    } 
    int tienManHinh() {
        return gianhap;
    }
};
class FullHD : public ManHinh {
    void set(string _code, string _hangSX) {
        ManHinh::set(_code, _hangSX);
        phangiai = "FullHD";
        bool chongloa;
        cin >> chongloa;
        if (chongloa == 1) gianhap = 500;
        else gianhap = 300;
    }
    void out() {
        ManHinh::out();
    }
    int tienManHinh() {
        return gianhap;
    }
};
class VoSmartphone {
protected:
    int gia;
    string hangnhap;
    string mau;
    string loaivo;
    string code;
public:
    virtual void set() {
        cin >> code;
    }
    virtual void out() {
        cout << "Vo smartphone: " << code << " " << loaivo << " " << hangnhap << " " << mau << " " << gia << endl;
    }
    virtual int tienVo() = 0;
};
class VoNhom : public VoSmartphone {
public:
    void set() {
        VoSmartphone::set();
        loaivo = "Nhom";
        gia = 400;
        hangnhap = "Black";
        int loaimau;
        cin >> loaimau;
        if (loaimau == 1) mau = "Do";
        else if (loaimau == 2) mau = "Den";
    }
    void out() {
        VoSmartphone::out();
    }
    int tienVo() {
        return gia;
    }
};
class VoNhua : public VoSmartphone {
public:
    void set() {
        VoSmartphone::set();
        loaivo = "Nhua";
        gia = 200;
        hangnhap = "White";
        int loaimau;
        cin >> loaimau;
        if (loaimau == 1) mau = "Do";
        else if (loaimau == 2) mau = "Den";
        else if (loaimau == 3) mau = "Xanh";
    }
    void out() {
        VoSmartphone::out();
    }
    int tienVo() {
        return gia;
    }
};
class SmartPhone {
protected:
    int giaban = 0;
    CPU* CPUlist;
    ManHinh* ManHinhList;
    VoSmartphone* VoSmartphoneList;
    string dongSP;
    string maso;
public:
    virtual void LoaiCPU() {
        int type;
        cin >> type;
        if (type == 1) CPUlist = new Alpha;
        else if (type == 2) CPUlist = new Beta;
        else if (type == 3) CPUlist = new Gamma;
        CPUlist->set();
        giaban += CPUlist->tienCPU();
    }
    virtual void LoaiManHinh() {
        string code, hangSX;
        cin >> code;
        cin >> hangSX;
        int type;
        cin >> type;
        if (type == 1) ManHinhList = new HD;
        else if (type == 2) ManHinhList = new FullHD;
        ManHinhList->set(code, hangSX);
        giaban += ManHinhList->tienManHinh();
    }
    virtual void LoaiVo() {
        
        int type;
        cin >> type;
        if (type == 1) VoSmartphoneList = new VoNhom;
        else if (type == 2) VoSmartphoneList = new VoNhua;
        VoSmartphoneList->set();
        giaban += VoSmartphoneList->tienVo();
    }
    virtual void input() {
        cin >> maso;
    }
    virtual void output() {
        cout << "Smartphone: " << maso << " " << dongSP << " ";
    }
};
class Venus : public SmartPhone {
public:
    void LoaiCPU() {
        SmartPhone::LoaiCPU();
    }
    void LoaiManHinh() {
        SmartPhone::LoaiManHinh();
    }
    void LoaiVo() {
        SmartPhone::LoaiVo();
    }
    void input() {
        SmartPhone::input();
        dongSP = "Venus";
    }
    void output() {
        SmartPhone::output();
        cout << giaban * 1.3 << endl;
        CPUlist->out();
        ManHinhList->out();
        VoSmartphoneList->out();
    }
};
class Mars : public SmartPhone {
public:
    void LoaiCPU() {
        SmartPhone::LoaiCPU();
    }
    void LoaiManHinh() {
        SmartPhone::LoaiManHinh();
    }
    void LoaiVo() {
        SmartPhone::LoaiVo();
    }
    void input() {
        SmartPhone::input();
        dongSP = "Mars";
    }
    void output() {
        SmartPhone::output();
        cout << giaban * 1.5 << endl;
        CPUlist->out();
        ManHinhList->out();
        VoSmartphoneList->out();
    }
}; 
class Jupiter : public SmartPhone {
public:
    void LoaiCPU() {
        SmartPhone::LoaiCPU();
    }
    void LoaiManHinh() {
        SmartPhone::LoaiManHinh();
    }
    void LoaiVo() {
        SmartPhone::LoaiVo();
    }
    void input() {
        SmartPhone::input();
        dongSP = "Jupiter";
    }
    void output() {
        SmartPhone::output();
        cout << giaban * 1.8 << endl;
        CPUlist->out();
        ManHinhList->out();
        VoSmartphoneList->out();
    }
};
int main() {
    int n; int dong;
    cin >> n;
    SmartPhone** SmartphoneList =  new SmartPhone * [n];

    for (int i = 0; i < n; i++) {
        cin >> dong;
        if (dong == 1) SmartphoneList[i] = new Venus;
        else if (dong == 2) SmartphoneList[i] = new Mars;
        else if (dong == 3) SmartphoneList[i] = new Jupiter;
        SmartphoneList[i]->input();
        SmartphoneList[i]->LoaiCPU();
        SmartphoneList[i]->LoaiManHinh();
        SmartphoneList[i]->LoaiVo();
    }
    for (int i = 0; i < n; i++) {
        SmartphoneList[i]->output();
    }
    return 0;
}

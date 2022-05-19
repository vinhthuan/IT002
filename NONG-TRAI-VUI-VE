#include <iostream>
using namespace std;
class Animal {
protected:
    int count;
public:
    virtual void input() {
        cin >> count;
    }
    virtual void Sound(int times) = 0;
    virtual void output(int times) = 0;
};
class Cow : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound(int times) {
        for (int i = 0; i < times; i++) {
            cout << "Booo,";
        }
    }
    void output(int times) {
        cout << "Bo: " << count * 10 * times << endl;
    }
};
class Sheep : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound(int times) {
        for (int i = 0; i < times; i++) {
            cout << "Beee,";
        }
    }
    void output(int times) {
        cout << "Cuu: " << count * 5 * times << endl;
    }
};
class Goat : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound(int times) {
        for (int i = 0; i < times - 1; i++) {
            cout << "Eeee,";
        }
        cout << "Eeee" << endl;
    }
    void output(int times) {
        cout << "De: " << count * 8 * times << endl;
    }
};
int main() {
    Animal** AnimalList = new Animal * [3];
    AnimalList[0] = new Cow;
    AnimalList[1] = new Sheep;
    AnimalList[2] = new Goat;
    for (int i = 0; i < 3; i++) {
        AnimalList[i]->input();
    }
    int times;
    cin >> times;
    for (int i = 0; i < 3; i++) {
        AnimalList[i]->Sound(times);
    }
    for (int i = 0; i < 3; i++) {
        AnimalList[i]->output(times);
    }
    return 0;
}

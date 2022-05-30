#include <iostream>
#include <deque>
using namespace std;
class Animal {
protected:
    int count;
    int litter = 0;
public:
    virtual void input() {
        cin >> count;
    }
    virtual void Sound() = 0;
    virtual void SumCount(int times) = 0;
};
class Cow : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound() {
        for (int i = 0; i < count; i++) {
            cout << "Booo,";
        }
    }
    void SumCount(int times) {
        deque<int> mydeque;
        for (int i = 1; i <= times; i++) {
            
            if (mydeque.size() == 4)
            {
                count += mydeque.front();
                mydeque.pop_front();
            }
            mydeque.push_back(count / 2);
            litter += count * 10;
        }
        int sumcount = count;
        while (!mydeque.empty()) {
            sumcount += mydeque.front();
            mydeque.pop_front();
        }
        cout << "Bo: " << sumcount << "," << litter << endl;
    }
};
class Sheep : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound() {
        for (int i = 0; i < count; i++) {
            cout << "Beee,";
        }
    }
    void SumCount(int times) {
        deque<int> mydeque;
        for (int i = 1; i <= times; i++) {

            if (mydeque.size() == 4)
            {
                count += mydeque.front();
                mydeque.pop_front();
            }
            mydeque.push_back(count / 2);
            litter += count * 5;
        }
        int sumcount = count;
        while (!mydeque.empty()) {
            sumcount += mydeque.front();
            mydeque.pop_front();
        }
        cout << "Cuu: " << sumcount << "," << litter << endl;
    }
};
class Goat : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound() {
        for (int i = 0; i < count; i++) {
            cout << "Eeee,";
        }
    }
    void SumCount(int times) {
        deque<int> mydeque;
        for (int i = 1; i <= times; i++) {

            if (mydeque.size() == 4)
            {
                count += mydeque.front();
                mydeque.pop_front();
            }
            mydeque.push_back(count / 2);
            litter += count * 8;
        }
        int sumcount = count;
        while (!mydeque.empty()) {
            sumcount += mydeque.front();
            mydeque.pop_front();
        }
        cout << "De: " << sumcount << "," << litter << endl;
    }
};
class Rabbit : public Animal {
public:
    void input() {
        Animal::input();
    }
    void Sound() {
        for (int i = 0; i < count - 1; i++) {
            cout << ",";
        }
        cout << endl;
    }
    void SumCount(int times) {
        deque<int> mydeque;
        for (int i = 1; i <= times; i++) {

            if (mydeque.size() == 2)
            {
                count += mydeque.front();
                mydeque.pop_front();
            }
            mydeque.push_back(count / 2);
        }
        int sumcount = count;
        while (!mydeque.empty()) {
            sumcount += mydeque.front();
            mydeque.pop_front();
        }
        cout << "Tho: " << sumcount << "," << litter << endl;
    }
};
int main() {
    Animal** AnimalList = new Animal * [4];
    AnimalList[0] = new Cow;
    AnimalList[1] = new Sheep;
    AnimalList[2] = new Goat;
    AnimalList[3] = new Rabbit;
    for (int i = 0; i < 4; i++) {
        AnimalList[i]->input();
    }
    int times;
    cin >> times;
    for (int i = 0; i < 4; i++) {
        AnimalList[i]->Sound();
    }
    for (int i = 0; i < 4; i++) {
        AnimalList[i]->SumCount(times);
    }
    return 0;
}

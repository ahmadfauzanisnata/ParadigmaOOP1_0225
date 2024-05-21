#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
    public:
    stirng name;
    jantung varJantung;

    manusia(stirng pName) : name(pName) {
            cout << name << " hidup\n";
        }
        ~manusia() {
            cout << name << " mati\n";
        }
};
#endif
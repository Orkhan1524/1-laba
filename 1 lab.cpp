#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 

using namespace std;

class proga {
    string name;
    int chi;

public:
    proga() : name(""), chi(0) {}

    proga(const string& n, int c) : name(n), chi(c) {}

    string get_name() const {
        return name;
    }

    int get_chi() const {
        return chi;
    }

    void print() const {
        cout << "antivirus is " << name << " and its vredonost program is " << chi << endl;
    }

    void printp(const vector<proga>& po, int index) {
        if (index >= 0 && index < po.size()) {
            cout << "Element at index " << index << ": ";
            po[index].print();
        }
    }
};

int main() {
    int c;
    vector<proga> po = {
        proga("orkhan", 20),
        proga("maksim", 3000),
        proga("canchela", 100)
    };

    for (const auto& pg : po) {
        pg.print();
    }
    proga p;
    cout << endl;
    for (int i = 0;i < po.size();++i) {
        c++;
    }
    p.printp(po, c);

    return 0;
}

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {

    int grade;
    std::string surname;

    typedef multimap<int, string> IntStringMMap;
    IntStringMMap coll;
    while (std::cin >> grade >> surname){
        if ((grade == 9|| grade ==10 || grade == 11) && sizeof surname <=50) {
            coll.insert(std::pair<int, std::string>(grade, surname));
        }
    }

    IntStringMMap::iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << pos->first << " " << pos->second << endl;
    }
    return 0;
}
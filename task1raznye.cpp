#include <iostream>
#include <set>


int main() {
    int kolvo = 0;
    int chislo = 0;
    std::cin >> kolvo;
    std::set<int> st;
    for(int i = 0; i < kolvo; i++){
        std::cin >> chislo;
        st.insert(chislo);
    }
    std::cout << st.size();    return 0;
}

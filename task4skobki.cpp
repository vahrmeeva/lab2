#include <iostream>
#include <stack>

int main() {
    std::stack<char> st;
    std::string line;
    std::cin >> line;
    int size = line.size();
    std::string no = " ";


if ( !line.empty()) {
    for (int i = 0; i <= size; ++i) {
        if (line[i] == '(' || line[i] == '[' || line[i] == '{') {
            st.push(line[i]);

        } else if ((line[i] == ')' || line[i] == ']' || line[i] == '}') && !st.empty()) {
            if (st.top() == '(' && line[i] == ')') {
                //if (!st.empty())
                st.pop();
            } else if (st.top() == '[' && line[i] == ']') {
                //if (!st.empty())
                st.pop();
            } else if (st.top() == '{' && line[i] == '}') {
                //if (!st.empty())
                st.pop();
            }
        } else if (st.empty() && (line[i] == ')' || line[i] == ']' || line[i] == '}')) {
            no = "no";
            std::cout << no;
            break;
        }
    }
}


    if (st.empty() &&  no == " ")
        std::cout << "yes" << std::endl;
    else if (!st.empty() &&  no == " ")
        std::cout << "no" << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <deque>
    using namespace std;

    int main() {
        int dequeSize = 5;

        deque<int> deque1(dequeSize);
        deque<int> deque2(dequeSize);

        for (int i = 0; i < 5; i++)
            cin >> deque1[i];

        for (int i = 0; i < 5; i++)
            cin >> deque2[i];

        int maxSteps = 1000000;
        int stepCount = 0;
        int cardOne = 0;
        int cardTwo = 0;
        while (!deque1.empty() && !deque2.empty() && ++stepCount < maxSteps) {
            cardOne = deque1.front(); //первый элемент 1го игрока
            deque1.pop_front(); // удаляем первый элемент
            cardTwo = deque2.front();
            deque2.pop_front();
            if (cardOne == 9 && cardTwo == 0) {
                deque2.push_back(cardOne);
                deque2.push_back(cardTwo);
            }
            else if (cardTwo == 9 && cardOne == 0) {
                deque1.push_back(cardOne);
                deque1.push_back(cardTwo);
            }
            else if (cardOne < cardTwo) {
                deque2.push_back(cardOne);
                deque2.push_back(cardTwo);
            }
            else if (cardTwo < cardOne) {
                deque1.push_back(cardOne);
                deque1.push_back(cardTwo);
            }
        }

        if (stepCount > maxSteps)
            std::cout << "botva";
        if (deque1.empty())
            std::cout << "second " << stepCount;
        if (deque2.empty())
            std::cout << "first " << stepCount;



    return(0);
}
// Meghan Satterley
// Fall 2022
// Assignment 03 (1)

#include <iostream>
#include <queue>
using namespace std;

void print_queue(queue<int> A)
{
    while (!A.empty()) 
    {
        cout << '\t' << A.front();
        A.pop();
    }
    cout << '\n';
}

void move_to_rear(queue<int> A)
{
    while (!A.empty())
    {
        const int first = A.front();
         A.pop();
         A.push(first);

         cout << '\t' << A.front();
         A.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> A;
    A.push(10);
    A.push(20);
    A.push(30);
    A.push(40);

    cout << "The current queue is: ";
    print_queue(A);

    cout << "\nUpdated queue values:";
    move_to_rear(A);

    return 0;
}
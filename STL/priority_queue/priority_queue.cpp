#include<bits/stdc++.h>
using namespace std;

void printpq(priority_queue<int> pq1)
{
    priority_queue<int> pq2 = pq1;

    while(!pq2.empty())   // iterate while priority queue is not empty
    {
        cout << pq2.top() << "\n";
        pq2.pop();
    }
}

int main()
{
    priority_queue<int> pq;

    for(int i=1;i<=5;i++)
        pq.push(i);   // push elements in the priority queue

    cout<<"The elements of the priority queue are:"<<endl;
    printpq(pq);

    cout<<"The size of the priority queue: "<<pq.size()<<endl;
    cout<<"The top element of the priority queue: "<<pq.top()<<endl;

    cout<<"Pop the top element:"<<endl;
    pq.pop();

    printpq(pq);
}
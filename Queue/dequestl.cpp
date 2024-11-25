#include <iostream>
#include <deque>
/*Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. */
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(7);
    dq.push_back(67);
    dq.push_back(54);
    dq.push_back(9);
    cout << "size" << dq.size() << endl;
    dq.pop_front();
    cout << "size" << dq.size() << endl;
    dq.pop_back();
    if (dq.empty())
    {
        cout << "dq is empty" << endl;
    }
    else{
        cout<<"deque is not empty"<<endl;
    }

    return 0;
}
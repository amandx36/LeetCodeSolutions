#include <bits/stdc++.h>
using namespace std;
void display(deque<int> q) {
  for (auto el : q) {
    cout << el << " ";
  }
  cout << endl;
}
class FrontMiddleBackQueue {
public:
  deque<int> dq;
  FrontMiddleBackQueue() {}

  void pushFront(int val) {
    dq.push_front(val);
    display(dq);
  }
  int popFront() {
    if (dq.empty())
      return -1;

    int d = dq.front();
    dq.pop_front();
    return d;
  }

  int popMiddle() {
    if (dq.empty())
      return -1;

    int mid = (dq.size() - 1) / 2;
    int d = dq[mid];

    dq.erase(dq.begin() + mid);
    return d;
  }

  int popBack() {
    if (dq.empty())
      return -1;

    int d = dq.back();
    dq.pop_back();
    return d;
  }

  void pushMiddle(int val) {
    int s = dq.size() / 2;
    dq.insert(dq.begin() + s, val);
    display(dq);
  }

  void pushBack(int val) {
    dq.push_back(val);
    display(dq);
  }
};

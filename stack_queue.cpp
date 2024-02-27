#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
  // create a stack of integers
  stack<int> s;
  // push some elements
  s.push(10);
  s.push(20);
  s.push(30);
  // print the size and the top element
  cout << "Stack size: " << s.size() << endl;
  cout << "Stack top: " << s.top() << endl;
  // pop some elements
  s.pop();
  s.pop();
  // check if the stack is empty
  cout << "Stack empty: " << s.empty() << endl;

  // create a queue of strings
  queue<string> q;
  // push some elements
  q.push("Hello");
  q.push("World");
  q.push("!");
  // print the size and the front and back elements
  cout << "Queue size: " << q.size() << endl;
  cout << "Queue front: " << q.front() << endl;
  cout << "Queue back: " << q.back() << endl;
  // pop some elements
  q.pop();
  q.pop();
  // check if the queue is empty
  cout << "Queue empty: " << q.empty() << endl;

  return 0;
}

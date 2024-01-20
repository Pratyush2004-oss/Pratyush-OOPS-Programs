#include <iostream>
#include <vector>
#include <queue>
#include <stdexcept>
using namespace std;

template <typename T> class Stack { 
    vector<T> e; 
    public: 
        void push(const T& v) { 
                e.push_back(v); 
            } 
            void pop() { 
                if (isEmpty()) 
                    throw out_of_range("Empty Stack"); 
                e.pop_back(); 
            } 
            T top() const { 
                if (isEmpty()) 
                    throw out_of_range("Empty Stack"); 
                return e.back(); 
            }
            bool isEmpty() const { 
                return e.empty(); 
            } 
            size_t size() const { 
                return e.size(); 
            }
    };

template <typename T> class Queue { 
    queue<T> e; 
    public: 
        void enqueue(const T& v) { 
            e.push(v); 
        } 
        void dequeue() { 
            if (isEmpty()) 
                throw out_of_range("Empty Queue"); 
            e.pop(); 
        }
        T front() const { 
            if (isEmpty()) 
                throw out_of_range("Empty Queue"); 
            return e.front(); 
        }
        bool isEmpty() const {
            return e.empty();
        }
        size_t size() const {
            return e.size(); 
        }
};

int main() {
    try { 
        Stack<int> s; 
        s.push(1); s.push(2); 
        cout << "Stack Top: " << s.top() << ", Size: " << s.size() << endl; 
        s.pop(); 
        cout << "Stack Size: " << s.size() << endl; 
        s.pop(); 
    } 
    catch (const exception& e) { 
        cerr << "Exception: " << e.what() << endl; 
    }

    try { 
        Queue<int> q; 
        q.enqueue(1);
        q.enqueue(2); 
        cout << "Queue Front: " << q.front() << ", Size: " << q.size() << endl; 
        q.dequeue(); 
        cout << "Queue Size: " << q.size() << endl; q.dequeue();
    }
    catch (const exception& e) { 
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
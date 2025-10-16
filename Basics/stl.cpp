#include<bits/stdc++.h>
using namespace std;

void print() {
    cout<<"rishab";
}

int sum(int a, int b) {
    return a+b;
}

int main()
{
    print();
    int s = sum(1,5);
    cout<<s;
    return 0;
}



//pairs
void pairs() {

    pair<int, int> p = {1, 3};
    cout<<p.first<<" "<<p.second;

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout<<arr[1].second;
}

//vectors
void vectors() {
    vector<int> v; //declaration
    v.push_back(1); //insertion at end
    v.emplace_back(2); //insertion at end (faster than push_back)

    vector<pair<int, int>> vec; //vector of pairs
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); //declaration and initialization (5 elements with value 100)
    vector<int> v2(5); //declaration and initialization (5 elements with value 0)

    vector<int> v1(5,20);
    vector<int> v2(v1); //copy v1 to v2

    vector<int>::iterator it = v.begin(); //iterator to the first element

    it++;
    cout<<*(it)<<" "; //printing the second element
    
    it = it + 2;
    cout<<*(it)<<" "; //printing the fourth element

    vector<int>::iterator it = v.end(); //iterator to the last element
    vector<int>::iterator it = v.rbegin(); //reverse iterator to the last element
    vector<int>::iterator it = v.rend(); //reverse iterator to the first element

    cout<<v[0]<<" "<<v.at(0); //both are used to access the first element
    cout<<v.back(); //returns the last element

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<<*(it)<<" ";
    }
    for(auto it : v) {
        cout<<it<<" ";
    }

    v.erase(v.begin()+1); //erases the second element
    v.erase(v.begin()+2, v.begin()+4); //erases from 3rd to 4th element

    vector<int>v(2,100);
    v.insert(v.begin(), 300); //inserts 300 at the beginning
    v.insert(v.begin()+1, 2, 10); //inserts two

    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end()); //inserts copy vector at the

    cout<<v.size(); //size of the vector

    v.pop_back(); //removes the last element
    v1.swap(v2); //swaps v1 and v2
    v.clear(); //clears the vector
    cout<<v.empty(); //returns true if vector is empty
}

//List

void lists(){
    list<int> ls;
    ls.push_back(1); //insertion at end
    ls.emplace_back(2); //insertion at end (faster than push_back)
    ls.push_front(3); //insertion at beginning
    ls.emplace_front(4); //insertion at beginning (faster than push_front)
}

//deque
void deques() {
    deque<int> dq;
    dq.push_back(1); //insertion at end
    dq.emplace_back(2); //insertion at end (faster than push_back)
    dq.push_front(3); //insertion at beginning
    dq.emplace_front(4); //insertion at beginning (faster than push_front)

    dq.pop_back(); //removes the last element
    dq.pop_front(); //removes the first element

    cout<<dq.back(); //returns the last element
    cout<<dq.front(); //returns the first element
}
//stack
void stacks() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4); //faster than push

    cout<<st.top(); //returns the top element

    st.pop(); //removes the top element
    cout<<st.size(); //returns the size of the stack
    cout<<st.empty(); //returns true if stack is empty

    stack<int> st1, st2;
    st1.swap(st2); //swaps st1 and st2
}

//queue
void queues() {
queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4); //faster than push

    cout<<q.back(); //returns the last element
    cout<<q.front(); //returns the first element

    q.pop(); //removes the first element
    cout<<q.size(); //returns the size of the queue
    cout<<q.empty(); //returns true if queue is empty

    queue<int> q1, q2;
    q1.swap(q2); //swaps q1 and q2
}

//priority_queue
void priority_queues()
{
    priority_queue<int> pq; 
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //faster than push
    cout<<pq.top(); //returns the largest element
    pq.pop(); //removes the largest element

    priority_queue<int, vector<int>, greater<int>> minheap; //min heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //faster than push

    cout<<pq.top(); //returns the smallest element
}

//set

void sets() {
    set<int> s; //stores in sorted order and unique elements
    s.insert(1);
    s.emplace(2); //faster than insert
    s.insert(2);
    s.insert(4);
    s.insert(3);

   auto it = s.find(3); //returns iterator to the element if found, else returns s.end()
   auto it = s.find(6); //returns s.end() if not found

   s.erase(2); //erases the element 2

    int cnt = s.count(1); //returns 1 if present, else 0
    auto it = s.find(3);
    s.erase(it); //erases the element at iterator it

    auto it1 = s.find(3);
    auto it2 = s.find(5);
    s.erase(it1, it2); //erases elements from it1 to it2 (it2 not included)

    auto it = s.lower_bound(2); //returns iterator to the first element >= 2
    auto it = s.upper_bound(3); //returns iterator to the first element > 3


}

//multiset
void multisets() {
    multiset<int> ms; //stores in sorted order and allows duplicate elements
    ms.insert(1);
    ms.emplace(1); //faster than insert
    ms.insert(1);

    ms.erase(1); //erases all occurrences of 2

    int cnt = ms.count(1); //returns the count of 2
    ms.erase(ms.find(1)); //erases only one occurrence of 1

    ms.erase(ms.find(1), ms.find(1)+2); //erases elements from first 2 to second 2 (second 2 not included)  

}

//unordered_set
void unordered_sets() {
    unordered_set<int> s; //stores in random order and unique elements
    s.insert(1);
    s.emplace(2); //faster than insert
    s.insert(2);
    s.insert(4);
    s.insert(3);

   auto it = s.find(3); //returns iterator to the element if found, else returns s.end()
   auto it = s.find(6); //returns s.end() if not found

   s.erase(2); //erases the element 2

    int cnt = s.count(1); //returns 1 if present, else 0
    auto it = s.find(3);
    s.erase(it); //erases the element at iterator it

    //auto it1 = s.find(3);
    //auto it2 = s.find(5);
    //s.erase(it1, it2); //erases elements from it1 to it2 (it2 not included) - not possible in unordered_set

    //auto it = s.lower_bound(2); //not possible in unordered_set
    //auto it = s.upper_bound(3); //not possible in unordered_set
}

//map
void maps() {
    map<int, int> m; //stores in sorted order and unique keys
    map<int, pair<int, int>> m1; //map of pairs
    map<pair<int, int>, int> m2; //map with pair as key

    m[1] = 2; //insertion
    m.emplace({3, 4}); //insertion (faster than insert)
    m.insert({4, 5}); //insertion using initializer list

    m[{2, 3}] = 10; //insertion in m2   

    for(auto it : m) {
        cout<<it.first<<" "<<it.second<<endl; //printing key and value
    }

    cout<<m[1]; //returns the value corresponding to key 1
    cout<<m.at(1); //returns the value corresponding to key 1
    cout<<m[5]; //inserts key 5 with value 0 if not present

    auto it = m.find(3); //returns iterator to the element if found, else returns m.end()
    cout<<*(it).second;
    auto it = m.find(6); //returns m.end() if not found

    auto it = m.lower_bound(2); //returns iterator to the first key >= 2
    auto it = m.upper_bound(3); //returns iterator to the first key >

}

//multimap
void multimaps() {
    //everything is same as map except it allows duplicate keys
    //only m[key] cannot be used for insertion
}
void unordered_maps() {
    //same as map but stores in random order
}

//extra

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) {
        return true;
    }
    else if(p1.second > p2.second) {
        return false;
    }
    else {
        if(p1.first > p2.first) {
            return true;
        }
        return false;
    }

}

void extra() {
    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4); //sorts from index 2 to 3
    sort(a,a+n, greater<int>()); //sorts in descending order
    pair<int, int> arr[] = {{1,2}, {3,1}, {4,5}};

    //sorts according to second element of pair
    //if second element is same, then according to first element in descending order
    
    sort(a, a+n, comp); //custom comparator function

    int num=7;
    int cnt = __builtin_popcount(num); //returns the count of set bits in num
    
    long long num=1223323434;
    int cnt = __builtin_popcountll(); //returns the count of set bits in num

    string s = "1234";
    sort(s.begin(), s.end()); //sorts the string in lexicographical order
    do {
        cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end())); //generates next permutation in lexicographical order    
    
    int maxi = *max_element(a, a+n); //returns the maximum element in the array
}
int main()
{
    return 0;
     
}


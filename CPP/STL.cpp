#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int, int> p ={1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[0].first << " " << arr[0].second << endl;
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(2, 3);

    vector<int> v2(5, 10);
    vector<int> v3(5);
    vector<int> v4(v2);

    vector<int>::iterator it = v2.begin();
    it++;
    cout<<*(it)<<endl;

    vector<int>::iterator it1 = v2.end();
    it1--;
    cout<<*(it1)<<endl;

    cout<<v[0]<<endl;
    cout<<v.back()<<endl;

    for(vector<int>::iterator it2 = v2.begin(); it2!=v2.end(); it2++){
        cout<<*(it2)<<" ";
    }

    for(auto it3 = v2.begin(); it3!=v2.end(); it3++){
        cout<<*(it3)<<" ";
    }

    for(int it4:v2){
        cout<<it4<<" ";
    }

    v.erase(v.begin());
    v.erase(v.begin()+2, v.begin()+5);
    v.insert(v.begin()+1, 2);
    v.insert(v.begin()+5, 5, 100);
    v.insert(v.begin(), v2.begin(), v2.end());

    cout<<v.size()<<endl;
    v.pop_back();
    v.swap(v2);
    v.clear();
    cout<<v.empty()<<endl;

}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(1);
    ls.emplace_front(0);
    // rest functions same as vector
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(1);
    dq.emplace_front(0);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    // rest functions same as vector
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.emplace(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    // rest functions same as vector
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.emplace(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    // rest functions same as vector
}

void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(1);
    pq.emplace(2);
    pq.push(3);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;
    // rest functions same as vector
}

void explainSet(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    auto it = st.find(2);
    st.erase(2);
    st.erase(3, 4);
    int i = st.count(3);
    auto it1 = st.lower_bound(2);
    auto it2 = st.upper_bound(2);
    // rest functions same as vector
}

void explainMultiSet(){
    multiset<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    auto it = st.find(2);
    st.erase(2);
    st.erase(3, 4);
    int i = st.count(3);
    auto it1 = st.lower_bound(2);
    auto it2 = st.upper_bound(2);
    // rest functions same as vector
}

void explainUnorderedSet(){
    unordered_set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    auto it = st.find(2);
    st.erase(2);
    st.erase(3, 4);
    int i = st.count(3);
    auto it1 = st.lower_bound(2);
    auto it2 = st.upper_bound(2);
    // rest functions same as vector
}

void explainMap(){
    map<int, int> m;
    m[1] = 2;
    m.emplace(2, 3);
    m.insert({3, 4});
    auto it = m.find(2);
    m.erase(2);
    m.erase(3, 4);
    int i = m.count(3);
    auto it1 = m.lower_bound(2);
    auto it2 = m.upper_bound(2);
    cout << m[2] << " " << m[3] << endl;
    for(auto it3 = m.begin(); it3!=m.end(); it3++){
        cout<<it3->first<<" "<<it3->second<<endl;
    }

    for (auto it4 : m)
    {
        cout << it4.first << " " << it4.second << endl;
    }
    // rest functions same as vector
}
void explainMultiMap(){
    multimap<int, int> m;
    m.insert({1, 2});
    m.emplace(2, 3);
    m.insert({3, 4});
    auto it = m.find(2);
    m.erase(2);
    m.erase(3, 4);
    int i = m.count(3);
    auto it1 = m.lower_bound(2);
    auto it2 = m.upper_bound(2);
    cout << m[2] << " " << m[3] << endl;
    for(auto it3 = m.begin(); it3!=m.end(); it3++){
        cout<<it3->first<<" "<<it3->second<<endl;
    }

    for (auto it4 : m)
    {
        cout << it4.first << " " << it4.second << endl;
    }
    // rest functions same as vector
}

void explainUnorderedMap(){
    unordered_map<int, int> m;
    m[1] = 2;
    m.emplace(2, 3);
    m.insert({3, 4});
    auto it = m.find(2);
    m.erase(2);
    m.erase(3, 4);
    int i = m.count(3);
    auto it1 = m.lower_bound(2);
    auto it2 = m.upper_bound(2);
    cout << m[2] << " " << m[3] << endl;
    for(auto it3 = m.begin(); it3!=m.end(); it3++){
        cout<<it3->first<<" "<<it3->second<<endl;
    }

    for (auto it4 : m)
    {
        cout << it4.first << " " << it4.second << endl;
    }
    // rest functions same as vector
}

bool compare(pair<int, int> p1, pair<int, int> p2){
    if (p1.first == p2.first)
    {
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}

void explainExtra(){
    sort(arr+2, arr+5);
    sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), greater<int>());
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    sort(arr.begin(), arr.end(), compare);
    reverse(arr.begin(), arr.end());

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long int num1 = 10;
    int cnt1 = __builtin_popcountll(num1);

    string s = "12345";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(arr, arr+n);
}
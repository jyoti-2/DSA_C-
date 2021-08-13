#include<bits/stdc++.h>
using namespace std;

// vector, set, map, stack, queue, priority_queue, list
int main()
{
    vector<int> v(5); // size- 5 initial value =  0
    for(auto x : v)
    cout << x << " ";
    cout << "\n";

    vector <int> v1 = {1, 2, 5, 4, 6};
    vector<int> v2(4,3); // size = 4 initial value = 3

    v1.push_back(43);
    v1.push_back(12);
    v1.pop_back(); // 1, 2, 5, 4, 6, 43, 

    cout << v1.back() << "\n"; // 43
    for(int i=0; i<v1.size(); i++)
    cout << v1[i] << " ";
    cout << "\n";

/*
0 0 0 0 0
43
1 2 5 4 6 43
*/

string s = "jyoit";
string name = s+s;
cout << name << " \n";
cout << name.substr(2, 5); // begins at 2, length = 5

// set structure - duplicates element are not allowed
set<int> os = {2, 4, 6, 7, 8}; // balanced binary tree = O(logn)
unordered_set<int> us = {9, 4, 2 ,1}; // hashing = O(1) on average

os.insert(21);
os.insert(1);

cout << os.count(7) << "\n"; // return 0 or 1 based on occurence of ele in set
os.erase(1); // removes an ele

// can't be accessed using [] notation
for(auto x : os)
cout << x << " ";
cout << "\n";

for(auto it = us.begin(); it != us.end(); it++)
{
    cout << *it << " ";
}
cout << "\n";
/*
jyoitjyoit
oitjy

1
2 4 6 7 8 21
1 2 4 9 
*/

// Map Structure - keys in a map can be of any data type and they do not have to be consecutive values.
// key - subjects, value = no of student who passed the exam out of 100

map<string, int> m;
m.insert(make_pair("Maths" , 55));
m["Science"] = 89;
m["English"] = 90;
m["Hindi"] = 45; // m[key] = value
cout << m["Science"] << "\n"; // 89 ( return value)
cout << m["Morals"] << "\n"; // 0 (key is automatically added to the map with a default value.)

if(m.count("Hindi"))
cout << " Key is there in the set" << "\n";
else
cout << "key doesn't exist" << "\n";

for(auto x : m)
cout << x.first << " " << x.second << "\n";


/*
89
0
Key is there in the set
English 90
Hindi 45
Maths 55
Morals 0
Science 89
science 0
*/





return 0;

}

/*
An iterator is a variable that points to an element in a data structure.

interator begin = points to the first ele
iterator end = points to the position after the last ele

sort(v.begin(), v.end());
reverse(v.begin(), v.end());
random_shuffle(v.begin(), v.end());

// for arrays
sort(a, a+n);
reverse(a, a+n);
random_shuffle(a, a+n);

Iterators are often used to access element of the set

*/







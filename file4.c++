#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
// empty multiset container
    multiset<int > gquiz1;
 // insert elements in random order
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
// 50 will be added again to
    // the multiset unlike set
    gquiz1.insert(50);
    gquiz1.insert(10);

    // printing multiset gquiz1
    multiset<int>::iterator itr;
    cout << "\nThe multiset gquiz1 is : \n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << *itr << " ";
    }
    return 0;
}
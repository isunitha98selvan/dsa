#include <iostream>
using namespace std;

// Move disk from A to B using C as intermediary
// Move disks from B to C using A as intermediary
void tower_of_hanoi(int disks, char source, char dest, char intermediate) {
    if(disks==1)
    {
        cout<<"Move disk 1 from"<<source<<"to"<<dest<<endl;
        return;
    }
    tower_of_hanoi(disks-1,source,intermediate,dest);
    cout<<"Move disk"<<disks<<"from"<<source<<"to"<<dest<<endl;
    tower_of_hanoi(disks-1,intermediate,dest,source);
}
int main() {
    int n=4;
    tower_of_hanoi(n,'A','C','B');
    return 0;
}
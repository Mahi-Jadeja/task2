#include <iostream>
#include <string>
using namespace std;

int main() {

    for (int i=1; i<=20; i++) {
       if (i%2==0){
            if (i==10){
                continue;
            }
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

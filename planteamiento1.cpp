#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
      srand(time(0));

    int vector1[10];
    int  vector2[10];
     int  suma[10];

     for(int i = 0; i < 10; i++) {
        vector1[i] = rand() % 9 + 1;
          vector2[i] = rand() % 9 + 1;
    }


    for(int i = 0; i < 10; i++) {
         suma[i] = vector1[i] + vector2[i];
    }

      cout << "PrimerVector: ";
    for(int i = 0; i < 10; i++) {
        cout << vector1[i] << " ";
    }
     cout << endl;

    cout << "segundovector: ";
      for(int i = 0; i < 10; i++) {
        cout << vector2[i] << " ";
    }
    cout << endl;

       cout << "La suma es: ";
     for(int i = 0; i < 10; i++) {
        cout << suma[i] << " ";
    }
    cout << endl;

    return 0;
}
//Abir Seth
//PRN-24070123003
//ENTC A1

#include <iostream>
using namespace std;

int getLength(char word[]) {
    int count = 0;
    for (int i = 0; word[i]; i++) {
        count++;
    }
    return count;
}

void reversePrint(char word[], int index, int size) {
    if (index == size) {
        return;
    }
    reversePrint(word, index + 1, size);
    cout << word[index];
}

int main() {
    char word[50];
    cout << "Enter a string:";
    cin >> word;

    int size = getLength(word);
    cout << "Reversed string:";
    reversePrint(word, 0, size);

    return 0;
}

Enter a string:Spiderman
Reversed string:namredipS

=== Code Execution Successful ===

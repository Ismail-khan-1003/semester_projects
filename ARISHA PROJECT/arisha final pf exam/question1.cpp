#include <iostream>
using namespace std;

int main() {

    int n;

    do {
        cout<<"Enter odd num: ";
        cin>>n;
    } while(n%2==0);

    int array1[100];

    cout << "Enter "<<n<<" elements:\n";
    for (int i =0; i < n; i++) {
        cin >> array1[i];
    }

    int evenind =n-1;
    int tableValue = array1[evenind];

    cout <<"table of "<<tableValue<<":\n";

    int counter = 1;
    while (counter <= 10) {
        cout <<tableValue<<"x"<<counter<<" = "<<tableValue * counter << endl;
        counter++;
    }

    return 0;
}


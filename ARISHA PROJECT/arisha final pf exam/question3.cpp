#include <iostream>
using namespace std;

void inputMatrix(int A[10][10], int x, int y) {
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> A[i][j];
        }
    }
}

void display(int A[10][10],int b,int c) {
    cout << "Matrix is:\n";
    for (int i=0;i<b;i++) {
        for (int j=0;j<c;j++) {
            cout<<A[i][j]<<"\t";
        }
        cout << endl;
    }
}

void totalSum(int A[10][10],int g,int h) {
    int sum = 0;
    for (int i=0;i<g;i++) {
        for (int j=0;j< h;j++) {
            sum += A[i][j];
        }
    }
    cout <<"Sum of all elements = "<<sum<<endl;
}


void rowWiseSum(int A[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        cout << "Sum of row " << i+1 << " = " << rowSum << endl;
    }
}

// Function to display column-wise sum
void colWiseSum(int A[10][10], int m, int n) {
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        cout << "Sum of column " << j+1 << " = " << colSum << endl;
    }
}

int main() {
    int A[10][10], x, r, choice;

    cout << "Enter number of rows: ";
    cin >> x;
    cout << "Enter number of columns: ";
    cin >> r;

    do {
        cout << "****menu****\n";
        cout << "1. Input elements in array\n";
        cout << "2. Display matrix\n";
        cout << "3. Sum of all elements\n";
        cout << "4. Row wise sum\n";
        cout << "5. Col wise sum\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                inputMatrix(A,x,r);
                break;
            case 2:
                display(A,x,r);
                break;
            case 3:
                totalSum(A,x,r);
                break;
            case 4:
                rowWiseSum(A,x,r);
                break;
            case 5:
                colWiseSum(A, x, r);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 6);

    return 0;
}



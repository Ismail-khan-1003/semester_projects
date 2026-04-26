#include <iostream>
using namespace std;

int MAX = 50;   // ye max hum total keliya liya huwa ke total hum itne bando ko rakhte sakhte hai arrays mein 

int id[50];   // ye ids ke arrays hai tu student ke ids store karta hai 

string name[50]; // ye student name ke arrays hai tu student ke names store karta hai

string fatherName[50]; // our ye arrays student ke father name store karta hai

float cgpa[50]; // our ye har individual  student ke cgpa store karta hai 

string contact[50]; // ye student ka contact number store karta hai 

//ye int total hum array ke index ko chalane keliya liya huwa hai
int total = 0;



// Add Student

void addStudent(){
	char choice; 
	
	do{
	    if (total >= MAX) {
        cout << "Student limit reached!\n";
        return;
    }

    cout << "Enter Student ID: ";
    cin >> id[total];

    cout << "Enter Student Name (single word): ";
    cin >> name[total];

    cout << "Enter Father Name (single word): ";
    cin >> fatherName[total];

    cout << "Enter CGPA: ";
    cin >> cgpa[total];

    cout << "Enter Contact: ";
    cin >> contact[total];

    total++;

	
	cout<<"\nDO YOU WANT TO ADD ANOTHER STUDENT (y/Y for yes and n for no): ";
	cin>>choice;
	cout<<endl;
		
	}while(choice=='y' || choice=='Y');
	
    cout << "Student added successfully!\n";
}


// Display Students
void displayStudents() {
    if (total == 0) {
        cout << "No records found.\n";
        return;
    }

    // Table Header
    cout << "\n---------------------------------------------------------\n";
    cout << "ID\tName\tFather Name\tCGPA\tContact\n";
    cout << "---------------------------------------------------------\n";

    // Table Rows
    for (int i = 0; i < total; i++) {
        cout << id[i] << "\t" 
             << name[i] << "\t" 
             << fatherName[i] << "\t" 
             << cgpa[i] << "\t" 
             << contact[i] << "\n";
    }
    cout << "---------------------------------------------------------\n";
}


// Search Student
void searchStudent() {
    char choice;

    do {
        int searchId;
        cout << "Enter ID to search: ";
        cin >> searchId;

        bool found = false;

        for (int i = 0; i < total; i++) {
            if (id[i] == searchId) {
                cout << "\nRecord Found!\n";
                cout << "ID: " << id[i] << "\n";
                cout << "Name: " << name[i] << "\n";
                cout << "Father Name: " << fatherName[i] << "\n";
                cout << "CGPA: " << cgpa[i] << "\n";
                cout << "Contact: " << contact[i] << "\n";
                found = true;
                break;  // record mil gaya, loop se bahar
            }
        }

        if (!found) {
            cout << "Student not found.\n";
        }

        cout << "\nDo you want to search another student? (y for yes / n for no): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}


// Update Student
void updateStudent() {
    char choice;

    do {
        int searchId;
        cout << "Enter ID to update: ";
        cin >> searchId;

        bool found = false;

        for (int i = 0; i < total; i++) {
            if (id[i] == searchId) {
                cout << "Enter New Name (single word): ";
                cin >> name[i];

                cout << "Enter New Father Name (single word): ";
                cin >> fatherName[i];

                cout << "Enter New CGPA: ";
                cin >> cgpa[i];

                cout << "Enter New Contact: ";
                cin >> contact[i];

                cout << "Record updated successfully!\n";
                found = true;
                break;  // record mil gaya, loop se bahar
            }
        }

        if (!found) {
            cout << "Student not found.\n";
        }

        cout << "\nDo you want to update another student? (y for yes / n for no): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}


// Delete Student

void deleteStudent() {
    char choice;

    do {
        int searchId;
        cout << "Enter ID to delete: ";
        cin >> searchId;

        bool found = false;

        for (int i = 0; i < total; i++) {
            if (id[i] == searchId) {
                // Shift all elements left
                for (int j = i; j < total - 1; j++) {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    fatherName[j] = fatherName[j + 1];
                    cgpa[j] = cgpa[j + 1];
                    contact[j] = contact[j + 1];
                }
                total--;
                cout << "Record deleted successfully!\n";
                found = true;
                break; // record mil gaya, loop se bahar
            }
        }

        if (!found) {
            cout << "Student not found.\n";
        }

        cout << "\nDo you want to delete another student? (y for yes / n for no): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}







// Main Menu
int main() {
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 6);

    return 0;
}


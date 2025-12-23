#include <iostream>
using namespace std;



// ---------------- DOCTOR DETAILS MODULE ----------------

void doctor_details_function() {
    int choice;
    do {
        cout << "\n--- Doctor Details ---\n";
        cout << "1. Dr. Muhammad Ismail Khan\n";
        cout << "2. Dr. Ahmad Javid Khattak\n";
        cout << "3. Dr. Shameer Durrani\n";
        cout << "4. Dr. Taha Khattak\n";
        cout << "5. Dr. Hira Afridi\n";
        cout << "6. Dr. Talha Ashraf\n";
        cout << "7. Dr. Alyan Wazir\n";
        cout << "8. Dr. baji Qamar Zaman\n";
        cout << "9. Dr. Laiba\n";
        cout << "10. Dr. Amna Durrani\n";
        cout << "11. Exit\n";

        cout << "Enter your choice (1-11): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nName: Dr. Muhannad Ismail Khan\n";
                cout << "Specialization: Cardiologist\n";
                cout << "University: Aga Khan University\n";
                cout << "Batch: 2015 - 2020\n";
                cout << "Contact: 0301-1111111\n";
                cout << "Experience: 5 Years\n";
                break;

            case 2:
                cout << "\nName: Dr. Ahmad Javid Khattak\n";
                cout << "Specialization: Neurologist\n";
                cout << "University: Dow University of Health Sciences\n";
                cout << "Batch: 2012 - 2017\n";
                cout << "Contact: 0302-2222222\n";
                cout << "Experience: 8 Years\n";
                break;

            case 3:
                cout << "\nName: Dr. Shameer Durrani\n";
                cout << "Specialization: Orthopedic\n";
                cout << "University: KMU Peshawar\n";
                cout << "Batch: 2016 - 2020\n";
                cout << "Contact: 0303-3333333\n";
                cout << "Experience: 4 Years\n";
                break;

            case 4:
                cout << "\nName: Dr. Taha Khattak\n";
                cout << "Specialization: General Physician\n";
                cout << "University: Khyber Medical College\n";
                cout << "Batch: 2014 - 2019\n";
                cout << "Contact: 0304-4444444\n";
                cout << "Experience: 6 Years\n";
                break;

            case 5:
                cout << "\nName: Dr. Hira Afridi\n";
                cout << "Specialization: Pediatrician\n";
                cout << "University: Rehman Medical College\n";
                cout << "Batch: 2013 - 2018\n";
                cout << "Contact: 0305-5555555\n";
                cout << "Experience: 7 Years\n";
                break;

            case 6:
                cout << "\nName: Dr. Talha Ashraf\n";
                cout << "Specialization: Dermatologist\n";
                cout << "University: Liaquat Medical University\n";
                cout << "Batch: 2015 - 2020\n";
                cout << "Contact: 0306-6666666\n";
                cout << "Experience: 5 Years\n";
                break;

            case 7:
                cout << "\nName: Dr. Alyan Wazir\n";
                cout << "Specialization: Gynecologist\n";
                cout << "University: Ayub Medical College\n";
                cout << "Batch: 2011 - 2016\n";
                cout << "Contact: 0307-7777777\n";
                cout << "Experience: 9 Years\n";
                break;

            case 8:
                cout << "\nName: Dr. baji Qamar zaman\n";
                cout << "Specialization: Dentist\n";
                cout << "University: University of Lahore\n";
                cout << "Batch: 2017 - 2021\n";
                cout << "Contact: 0308-8888888\n";
                cout << "Experience: 3 Years\n";
                break;

            case 9:
                cout << "\nName: Dr. Laiba\n";
                cout << "Specialization: ENT Specialist\n";
                cout << "University: Rawalpindi Medical University\n";
                cout << "Batch: 2014 - 2019\n";
                cout << "Contact: 0309-9999999\n";
                cout << "Experience: 6 Years\n";
                break;

            case 10:
                cout << "\nName: Dr. Amna Durrani\n";
                cout << "Specialization: Psychiatrist\n";
                cout << "University: King Edward Medical University\n";
                cout << "Batch: 2009 - 2014\n";
                cout << "Contact: 0310-1010101\n";
                cout << "Experience: 10 Years\n";
                break;

            case 11:
                cout << "Returning to previous menu...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 11);
}



// ---------------- Nurse Details Module  ----------------



string nurse_name[10] = {
    "arsalan",
    "Hina",
    "mohsin",
    "Maryam",
    "safwan",
    "jannat",
    "atik",
    "maleha",
    "huzaifa",
    "Eman"
};

string nurse_shift[10] = {
    "Day",
    "Night",
    "Day",
    "Night",
    "Day",
    "Night",
    "Day",
    "Night",
    "Day",
    "Night"
};

string nurse_ward[10] = {
    "ICU",
    "Emergency",
    "General",
    "ICU",
    "Maternity",
    "Emergency",
    "General",
    "ICU",
    "Maternity",
    "General"
};

void nurse_details_function(){

    cout << "\n--- Nurse Details ---\n";
    cout << "Name\t\tShift\t\tWard\n";
    cout << "------------------------------------------\n";

    for (int i = 0; i < 10; i++) {
        cout << nurse_name[i] << "\t\t"
             << nurse_shift[i] << "\t\t"
             << nurse_ward[i] << endl;
    }
}



// ---------------- other Staff Details Module  ----------------


string staff[12] = {
    "ibrahim",
    "Muhammad",
    "saeed",
    "Bilal",
    "zeerak",
    "qaswa",
    "hareem",
    "haya",
    "jibran",
    "hassan",
    "soha",
    "battery-g"};

string roles[12] = {
    "Kitchen",
    "Cleaning",
    "Assistant",
    "Kitchen",
    "Officeboy",
    "Officegirl",
    "Assistant",
    "Kitchen",
    "Kitchen",
    "Cleaning",
    "Assistant",
    "Cleaning"};

void other_staff_details_function() {

    cout << "\n--- Other Staff Details ---\n";
    cout << "Name\t\tRole\n";
    cout << "-----------------------------\n";

    for (int i = 0; i < 12; i++) {
        cout << staff[i] << "\t\t" << roles[i] << endl;
    }
}




// ---------------- Book Appointment Module ----------------

int app_id[50];
string app_patient_name[50];
string app_doctor_name[50];
string app_date[50];
string app_time[50];
int appCount = 0;

void book_appointment_function(){
	    cout << "\n--- Doctors in our hospital ---\n";
        cout << "1. Dr. Muhammad Ismail Khan -> Cardiologist \n";
        cout << "2. Dr. Ahmad Javid Khattak -> Neurologist \n";
        cout << "3. Dr. Shameer Durrani -> Orthopedic\n";
        cout << "4. Dr. Taha Khattak -> General Physician\n";
        cout << "5. Dr. Hira Afridi -> Pediatrician\n";
        cout << "6. Dr. Talha Ashraf -> Dermatologist\n";
        cout << "7. Dr. Alyan Wazir -> Gynecologist \n";
        cout << "8. Dr. Baji Qamar Zaman -> Dentist \n";
        cout << "9. Dr. Laiba -> ENT Specialist\n";
        cout << "10. Dr. Amna Durrani -> Psychiatrist \n";
        int choice;
        char repeat;
    do{
        cout << "\n===== Appointment Module =====\n";
        cout << "1. Book Appointment\n";
        cout << "2. View Appointments\n";
        cout << "3. Exit\n";
        cout << "Choose (1-3): ";
        cin >> choice;	
    	
    	switch(choice){
    		
    	// -------- BOOK APPOINTMENT --------
		
		case 1:
			
       	do{
        cout << "\nEnter Appointment ID: ";
        cin >> app_id[appCount];

        cout << "Enter Patient Name: ";
        cin >> app_patient_name[appCount];

        cout << "Enter Doctor Name: ";
        cin >> app_doctor_name[appCount];

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> app_date[appCount];

        cout << "Enter Time: ";
        cin >> app_time[appCount];

        appCount++;

        cout << "Do you want to book another appointment? (y/n): ";
        cin >> repeat;	
			
		}while((repeat == 'y'||repeat == 'Y' )&& appCount < 50);
	    cout << "\nAppointment booked successfully!\n";
        break;
        
        
        // -------- VIEW APPOINTMENTS --------
       
	   case 2: 
	   
	    if (appCount == 0) {
        cout << "\nNo appointments found.\n";
        } else {
        cout << "\nID\tPatient\tDoctor\tDate\t\tTime\n";
        for (int i = 0; i < appCount; i++) {
        cout << app_id[i] << "\t"
        << app_patient_name[i] << "\t"
        << app_doctor_name[i] << "\t"
        << app_date[i] << "\t\t"
        << app_time[i] << endl;
                }
            }
            break;
           
		    
        case 3: 
            cout << "\nExiting Appointment Module...\n";
            break;
        default:
			cout << "Invalid choice!\n";	    
        }
    	
	}while(choice !=3);
    
}



// ---------------- Patient Management Module ----------------


string patient_name[50];
int patient_age[50];
string patient_disease[50];
int patient_id[50];
int patientCount=0;
char repeat1;

void patient_management_function() {
    int choice;
    do {
    	
        cout << "\n===== Patient Management Module =====\n";
        cout << "1. Add patient \n";
        cout << "2. Update Patient\n";
        cout << "3. Delete Patient\n";
        cout << "4. View Patient \n";
        cout << "5. Exit (Back to main function)\n ";
        cout << "Pick your choice (1 - 5): ";
        cin >> choice;

        switch (choice) {
        	
        	// -------- ADD PATIENT --------
        	
            case 1:
            	do{
            		
            		if (patientCount >= 50) {
                     cout << "Patient limit reached!\n";
                    break;
                }
            		
                  cout<< "\n Enter Patient ID: ";
                  cin>>patient_id[patientCount];
				  
				  cout<< "Enter Patient Name: ";
				  cin>>patient_name[patientCount];
				  
				  cout<< "Enter Patient Age: ";
				  cin>>patient_age[patientCount];
				  
				  cout<< "Enter Disease: ";
				  cin>>patient_disease[patientCount];
				  
				  patientCount++;
				  
				  cout<<"want to add more patient (y/n): ";
				  cin>>repeat1;
				            		
				}while((repeat1=='y' || repeat1=='Y') && patientCount < 50 );
				
				cout << "\nPatient added successfully!\n";
				break;
				

           // -------- UPDATE PATIENT --------
           
             case 2:{
                 int id, found=0;
                  cout<< "Enter Patient ID To Update: ";
                  cin>>id;
                  
                  for(int i=0;i<patientCount;i++){
                  	if(patient_id[i]==id){
                  		
                  		cout<<"Enter New Name: ";
                        cin>>patient_name[i];                  		
                  		cout<<"Enter New Age: ";
                  		cin>>patient_age[i];
                  		
                  		cout<<"Enter New Disease: ";
                  		cin>>patient_disease[i];
                  		
                  		cout<<"\nPatient updated successfully!\n";
                  		found=1;
                  		
                  		break;
                  		

					  }
					 }  
				 if (!found)cout << "Patient not found.\n";
				  break;
			 }
    
                  
            
        // -------- DELETE PATIENT --------
        
            case 3: {
                 int id, found = 0;
                cout << "Enter Patient ID to Delete: ";
                cin >> id;

               for (int i = 0; i < patientCount; i++) {
               if (patient_id[i] == id) {
               for (int j = i; j < patientCount - 1; j++) {
                patient_id[j] = patient_id[j + 1];
                patient_name[j] = patient_name[j + 1];
                patient_age[j] = patient_age[j + 1];
                patient_disease[j] = patient_disease[j + 1];
            }
            patientCount--;
            cout << "Patient deleted successfully!\n";
            found = 1;
            break;
        }
    }
          if (!found)
          cout << "Patient not found.\n";
        break;
}

                
                
        // -------- VIEW PATIENTS -------- 
		       
            case 4:     
                if (patientCount == 0) {
                	cout<<endl;
                    cout << "No patients found.\n";
                } else {
                    cout << "\nID\tName\tAge\tDisease\n";
                    for (int i = 0; i < patientCount; i++) {
                        cout << patient_id[i] << "\t"
                             << patient_name[i] << "\t"
                             << patient_age[i] << "\t"
                             << patient_disease[i] << endl;
                    }
                }
                break;
                
             case 5:
			      cout<<"\nBack to main function\n";
			      break;
			    
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);
}



// ---------------- Medicine Shop MODULE ----------------

 string medicine_name[50];
 int price[50];
 int quantity[50];
 int totalBill=0;
 int medicineCount=0;
 char repeat;
 
void medicine_shop_function(){
    int choice;
    do {
        cout << "\n--- Pharmacist Shop Module ---\n";
        cout << "1. Medicine Bill (Add)\n";
        cout << "2. Update Medicine Bill\n";
        cout << "3. Delete Medicine Bill\n";
        cout << "4. View Total Bill And Receipt\n";
        cout << "5. Exit (Return to Main Menu)\n";
        cout << "Pick your choice (1 - 5): ";
        cin >> choice;

        switch (choice) {
        	
        	// -------- ADD MEDICINE --------
        	
            case 1:
              totalBill=0;
              medicineCount=0;	
            do{
            	cout<<endl;
            	cout<<"Medicine Name: ";
            	cin>>medicine_name[medicineCount];
            	
            	cout<<"Medicine Price: ";
            	cin>>price[medicineCount];
            	
            	cout<<"Medicine Quantity: ";
            	cin>>quantity[medicineCount];
            	
            	totalBill+=price[medicineCount]*quantity[medicineCount];
            	medicineCount++;
            	
            	
            	cout<<" Add More Medicine (y/n): ";
            	cin>>repeat;
              
				cout<<endl;
            }while(repeat == 'y' && medicineCount < 50);
              break;
              
              // -------- UPDATE MEDICINE --------
              
            case 2:
            	totalBill=0;
            	
            	for(int i=0;i<medicineCount;i++){
            		
            	cout<<endl;
            	
            	cout<<"Update Medicine Name: ";
            	cin>>medicine_name[i];
            	
            	cout<<" Update Medicine Price: ";
            	cin>>price[i];
            	
            	cout<<"Update Medicine Quantity: ";
            	cin>>quantity[i];
            	
            	totalBill+=price[i]*quantity[i];

				cout<<endl;
            	
			}
			cout<<endl;
			cout << "Medicine bill updated successfully.\n";
              break;
              
            // -------- DELETE BILL --------
            
            case 3:
                cout<<endl;
                medicineCount = 0;
                totalBill = 0;
                cout << "Medicine bill deleted successfully.\n";
                break;
                
                
               // -------- VIEW RECEIPT -------- 
                
            case 4: 
             if (medicineCount == 0) {
             	cout<<endl;
              cout << "No medicine bill found.\n";
            } else {
                cout << "\n-------- MEDICINE RECEIPT --------\n";
                cout << "Name\tQty\tPrice\tTotal\n";

                for (int i = 0; i < medicineCount; i++) {
                    cout << medicine_name[i] << "\t"
                         << quantity[i] << "\t"
                         << price[i] << "\t"
                         << price[i] * quantity[i] << endl;
                }

                cout << "---------------------------------\n";
                cout << "TOTAL BILL: Rs " << totalBill << endl;
                cout << "---------------------------------\n";
            }			  	
			  break;
            
            case 5:
            cout<<endl;
            cout << "Returning to previous menu...\n";
            break;
						 
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);
}



// ---------------- MAIN FUNCTION ----------------


int main() {

    string email;
    int pin;
    bool loginSuccess = false;

    for (int i = 3; i > 0; i--) {

        cout << "Enter Your Email: ";
        cin >> email;

        cout << "Enter Your Pin: ";
        cin >> pin;

        if (email == "ismailkhan" && pin == 1234) {
            loginSuccess = true;
            break;   // ? login successful ? stop loop
        } 
        else {
            cout << "Invalid login. Attempts left: " << i - 1 << endl;
        }
    }

    if (!loginSuccess) {
        cout << "\nToo many failed attempts. Program terminated.\n";
        return 0;
    }

    // -------- MAIN MENU --------
    int choice;
    do {
        cout << "\n======== Welcome to H-M-S ========\n";
        cout << "1. Doctor Details Module\n";
        cout << "2. Nurse Details Module\n";
        cout << "3. Other Staff Details Module\n";
        cout << "4. Book Appointment Module\n";
        cout << "5. Patient Management Module\n";
        cout << "6. Medicine Shop Module\n";
        cout << "7. Exit\n";
        cout << "Pick your choice (1 - 7): ";
        cin >> choice;

        switch (choice) {
            case 1:
			 doctor_details_function();
			  break;
			  
            case 2:
			 nurse_details_function();
			  break;
			  
            case 3: 
			other_staff_details_function();
			 break;
			 
            case 4:
			 book_appointment_function();
			  break;
			  
            case 5:
			 patient_management_function();
			  break;
			  
            case 6:
			 medicine_shop_function(); 
			 break;
			 
            case 7:
			cout<<endl;
			cout << "Thank you for your visit.\n";
			 break;
			 
            default:
             cout<<endl;
			 cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}



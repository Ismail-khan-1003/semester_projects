#include<iostream>
#include<string>
using namespace std;

//base class

class Vehicle{
	protected:
		string vehicleNum;
	public:
		Vehicle(string vehicleNum=""){
			this->vehicleNum=vehicleNum;
		}
//	setter functions
       void setVehicleNum(string num){vehicleNum=num;}
//    getter function
    string getvehicleNum(){return vehicleNum;}
    
//    virtual function
    virtual void display()=0;
    virtual ~Vehicle(){}

};

//  Car class

class Car:public Vehicle{
	private:
	string carBrand;
	static int carCount;
	
	public:
		Car(string vehicleNum="",string carBrand="")
		:Vehicle(vehicleNum){
			this->carBrand=carBrand;
			carCount++;
		}
//		setter functions 
      void setCarBrand(string brand){ carBrand=brand;}
//       getter functions
	 string getCarBrand(){return carBrand;}
	 static int getcarCount(){return carCount;}
	 
	 void display(){
	 	cout<<"Car Number: "<<vehicleNum<<endl;
	 	cout<<"Car Brand: "<<carBrand<<endl;
	 }
	 ~Car(){
	 	cout<<"Car obj Destroyed---"<<endl;
	 }
};
//    count for car
       int Car::carCount=0;
    
//	Bike class
   
class Bike:public Vehicle{
	private:
		int engineCapacity;
		static int bikeCount;
	public:
		Bike(string vehicleNum="",int engineCapacity=0)
		:Vehicle(vehicleNum){
			this->engineCapacity=engineCapacity;
			bikeCount++;
		}
//	setter functions
	  void setEngineCapacity(int capacity){engineCapacity=capacity;}
//	  getter functions
	  int getEngineCapacity(){return engineCapacity;}
	  static int getBikeCount(){return bikeCount;}
	  
	  void display(){
	  	cout<<"Bike Number: "<<vehicleNum<<endl;
	 	cout<<"Bike Engine Capacity: "<<engineCapacity<<endl;
	  }
     ~Bike(){
     	cout<<"Bike obj Destroyed--- "<<endl;
	 }	  
};
//count for bikes
      int Bike::bikeCount=0;
      
//   class Truck

class Truck:public Vehicle{
	private:
	int loadCapacity;
	int axleCount;
	static int TruckCount;
	
    public:
    	Truck(string vehicleNum="",int loadCapacity=0,
		int axleCount=0):Vehicle(vehicleNum){
			this->loadCapacity=loadCapacity;
			this->axleCount=axleCount;
			TruckCount++;
		}
//		setter functions
     void  setLoadCapacity(int load){loadCapacity=load;}
     void  setAxleCount(int axle){axleCount=axle;}
//     getter functions
     int getLoadCapacity(){return loadCapacity;}
     int getAxleCount(){return axleCount;}
     static int getTruckCount(){return TruckCount;}
	 
	void display(){
	    cout<<"Truck Number: "<<vehicleNum<<endl;
	 	cout<<"Truck load Capacity: "<<loadCapacity<<endl;
	 	cout<<"Truck Axle Count: "<<axleCount<<endl; 
	}
	~Truck(){
		cout<<"Truck obj Destroyed--- "<<endl;
	}		
};
  //count for truck
     int  Truck:: TruckCount=0; 
	 

//parking slot class

class  ParkingSlot{
private:
    int slotId;
    string slotType;
    bool isOccupied;
public:
    ParkingSlot(int slotId=0,string slotType="",bool isOccupied=false){
        this->slotId=slotId;
        this->slotType=slotType;
        this->isOccupied=isOccupied;
    }
	
    // Setter functions
    void setSlotId(int id){slotId=id;}
    void setSlotType(string type){slotType=type;}
    void setIsOccupied(bool status){isOccupied = status;}
	
    // Getter functions
    int getSlotId(){return slotId;}
    string getSlotType(){return slotType;}
    bool getIsOccupied(){return isOccupied;}
	
    void display(){
        cout << "Slot ID: " << slotId << endl;
        cout << "Slot Type: " << slotType << endl;
        cout << "Occupied: " << (isOccupied ? "Yes" : "No") << endl;
    }			
};

class Ticket{
private:
    int ticketId;
    int entryTime;
    int exitTime;
    double bill;

public:
    Ticket(int ticketId=0, int entryTime=0){
        this->ticketId = ticketId;
        this->entryTime = entryTime;
        this->exitTime = 0;
        this->bill = 0;
    }

    // Setter functions
    void setExitTime(int exitTime){
        this->exitTime=exitTime;
    }

    // Getter functions
    int getTicketId(){return ticketId;}
    int getEntryTime(){return entryTime;}
    int getExitTime(){return exitTime;}
    double getBill(){return bill;}

    // Bill calculation function
    void calculateBill(string vehicleType){
        int duration=exitTime-entryTime;

        if(duration<0){
            duration=0;
        }
        if(vehicleType=="Car"){
            bill=duration*50;
        }
        else if(vehicleType=="Bike"){
            bill=duration*20;
        }
        else if(vehicleType=="Truck"){
            bill = duration * 100;
        }
    }

    // Display function
    void display(){
        cout<<"Ticket ID: "<<ticketId<<endl;
        cout<< "Entry Time: "<<entryTime<<endl;
        cout<< "Exit Time: "<<exitTime<<endl;
        cout<<"Total Bill: "<<bill<<endl;
    }
};



//main controller class

class ParkingSystem{
private:
    ParkingSlot slots[100];
    Ticket tickets[100];

    int slotCount=0;
    int ticketCount=0;

public:
    // ADD SLOT
    void addSlot(ParkingSlot s){
        slots[slotCount++] = s;
    }
    
    // FIND SLOT
    int findSlot(string type){
        for(int i=0;i<slotCount;i++){
            if(slots[i].getSlotType()==type && !slots[i].getIsOccupied()){
                return i;
            }
        }
        return -1;
    }

    // PARK VEHICLE
    
    void parkVehicle(Vehicle* v,string type,int entryTime){
        int index =findSlot(type);
        if(index==-1){
            cout << "No slot available for " << type << endl;
            return;
        }
        slots[index].setIsOccupied(true);
        
        
//         generate ticket 
        Ticket t(ticketCount + 1, entryTime);
        tickets[ticketCount++] = t;
        cout << "\nVehicle Parked Successfully!";
        cout << "\nSlot ID: " << slots[index].getSlotId();
        cout << "\nTicket ID: " << t.getTicketId() << endl;
    }
    

    // EXIT VEHICLE
    void exitVehicle(int ticketId, string type, int exitTime){
        for(int i=0;i<ticketCount;i++){
            if(tickets[i].getTicketId()==ticketId){
                tickets[i].setExitTime(exitTime);
                tickets[i].calculateBill(type);
                cout << "\n=== VEHICLE EXIT ===" << endl;
                tickets[i].display();
                

                // free slot
                for(int j= 0;j<slotCount;j++){
                    if(slots[j].getSlotType()==type && slots[j].getIsOccupied()){
                        slots[j].setIsOccupied(false);
                        break;
                    }
                }
                return;
            }
        }

        cout<<"Invalid Ticket ID!"<<endl;
    }
    
    

    // DISPLAY
    void showSlots(){
        for(int i=0;i<slotCount;i++){
            slots[i].display();
            cout<<endl;
        }
    }
    void showTickets(){
        for(int i=0;i<ticketCount;i++){
            tickets[i].display();
            cout<<endl;
        }
    }
};



int main(){

    ParkingSystem system;
    
    ParkingSlot s1(1, "Car", false);
    ParkingSlot s2(2, "Bike", false);
    ParkingSlot s3(3, "Truck", false);

    system.addSlot(s1);
    system.addSlot(s2);
    system.addSlot(s3);

    cout << "=== Parking Slots Initialized ===\n";

    Car c1("CAR-101", "Toyota");
    Bike b1("BIKE-202", 150);
    Truck t1("TRUCK-303", 5000, 4);

    cout << "\n=== Vehicles Created ===\n";

    c1.display();
    cout<<"\n==============\n";
    b1.display();
    cout<<"\n==============\n";
    t1.display();


    cout << "\n=== Parking Vehicles ===\n";

    system.parkVehicle(&c1, "Car", 10);
    system.parkVehicle(&b1, "Bike", 11);
    system.parkVehicle(&t1, "Truck", 12);


    cout << "\n=== Slot Status ===\n";
    system.showSlots();


    cout << "\n=== Vehicle Exit ===\n";

    system.exitVehicle(1, "Car", 15);
    system.exitVehicle(2, "Bike", 14);
    system.exitVehicle(3, "Truck", 18);

 
    cout << "\n=== All Tickets ===\n";
    system.showTickets();

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char character[100];
    int i = 0;

    int vowels = 0;
    int alphabets = 0;
    int digits = 0;
    int spaces = 0;

    cout << "Enter a character: ";
    cin.getline(character,100);

    while (character[i]!='\0') {

     if (character[i]=='a'||character[i]=='e' ||character[i]=='i'||character[i]=='o' || character[i]=='u' ||   character[i]=='A' || character[i]=='E' || character[i]=='I' || character[i]=='O' || character[i]=='U')
        {
            vowels++;
            alphabets++;
        }
        else if ((character[i] >= 'a' && character[i] <= 'z') ||
                 (character[i] >= 'A' && character[i] <= 'Z')) {
            alphabets++;
        }
        else if (character[i] >='0' && character[i] <='9') {
            digits++;
        }
        else if (character[i] == ' ') {
            spaces++;
        }
        i++;
    }
    cout << "\nNo of vowels = " << vowels;
    cout << "\nNo of alphabets = " << alphabets;
    cout << "\nNo of integers = " << digits;
    cout << "\nNo of spaces = " << spaces;

    return 0;
}







//int n;
//do{
//	cout<<"enter value of array size: ";
//	cin>>n;
//}while(n%2==0);
//	
//int array[n];
//for(int i=0;i<n;i++){
//	cin>>array[i];
//}	
//int even=n-1;
//int table=array[even];
//cout<<"\n we make table of "<<table<<"number."<<endl;
//int i=1;
//while(i<=10){
//	cout<<table<<" * "<<i<< "=" <<table*i<<endl;
//	i++;
//}
	



//char array[100];
//cin.getline(array,100);
//
//int alpha=0;
//int num=0;
//int space=0;
//int vowels=0;
//
//int i=0;
//while(array[i]!='\0'){
//	if(array[i]=='a' || array[i]=='e' || array[i]=='i' || 
//	array[i]=='o' || array[i]=='u' || array[i]=='A' || array[i]=='E' ||
//	array[i]=='I' ||array[i]=='O' ||array[i]=='U'){
//	vowels++;
//	alpha++;
//		
//	}else if((array[i]>='A' && array[i]<='Z') || (array[i]>='a' &&
//	array[i]<='z' )){
//		alpha++;
//	}else if(array[i]>='0' && array[i]<='9'){
//		num++;
//	}else if(array[i]==' '){
//		space++;
//	}
//	
//	i++;
//	
//}
//
//cout<<"number of alphabat: "<<alpha<<endl;
//cout<<"number of number: "<<num<<endl;
//cout<<"number of vowels: "<<vowels<<endl;
//cout<<"number of spaces: "<<space<<endl;







void input_element(int array[20][20],int m,int n){
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++){
		cin>>array[i][j];
	}
	}
}

void display_element(int array[20][20],int m,int n){
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++){
		cout<< array[i][j]<<" ";
	}
	cout<<endl;
	}
}

//void sum_element(int array[20][20],int m,int n){
//	int sum=0;
//		for(int i=0;i<m;i++){
//	 for(int j=0;j<n;j++){
//		sum+=array[i][j];
//	}
//	}
//	cout<<"sum of all element in array: "<<sum<<"\n";
//}
//
//
//void rowwise_element(int array[20][20],int m,int n){
//		for(int i=0;i<m;i++){
//			int sum=0;
//	 for(int j=0;j<n;j++){
//		sum+=array[i][j];
//	}
//	cout<<"sum of row "<<i+1<<":"<<sum<<endl;
//	sum=0;
//	}
//}
//
//void columnwise_element(int array[20][20],int m,int n){
//		for(int i=0;i<n;i++){
//			int sum=0;
//	 for(int j=0;j<m;j++){
//		sum+=array[j][i];
//	}
//	cout<<"sum of col "<<i+1<<":"<<sum<<endl;
//	}
//}
//
//int main(){
//	int m;int n;
//	cout<<"number of rows: ";cin>>m;
//	cout<<"size of n: ";cin>>n;
//	int choice;
//int array[20][20];
//do{	
//cout<<"1.input element in array: "<<endl;
//cout<<"2. display element: "<<endl;
//cout<<"3.sum of all element: "<<endl;
//cout<<"4.row wise sum : "<<endl;
//cout<<"5. column wise sum: "<<endl;
//cin>>choice;
//switch(choice){
//	case 1:
//		input_element(array,m,n);
//		break;
//	case 2:
//		display_element(array,m,n);
//		break;
//	case 3:
//		sum_element(array,m,n);
//		break;
//	case 4:
//		rowwise_element(array,m,n);
//		break;
//	case 5:
//		columnwise_element(array,m,n);
//		break;
//	case 6:
//		cout<<"\nexiting program\n";
//		break;
//	default: 
//	   cout<<"invalid option!\n";
//	   break;
//
//}
//
//}while(choice!=6);

 int arr[5]={5,12,8,3,1};
int n=5;
int ill=fir(arr,n);
cout<<ill;	
	return 0;

int fir(int arr[],int n){
	int ill=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>ill){
			ill=arr[i];
		}
	}
	return ill;
}





////nisab value
//float zakat=0.025;
//float nsil=585.0;
//float goldn=85.0;
//
//
////inputs 
//
//float gold; float silver;
//float cash; float curgold; float cursilver;
//
//cout<<"gold in gram: ";
//cin>>gold;
//
//cout<<"silver in gram: ";
//cin>>silver;
//
//cout<<"cash : ";
//cin>>cash;
//
//cout<<"cur rate of gold: ";
//cin>>curgold;
//
//cout<<"cur rate of silver: ";
//cin>>cursilver;
//
////calculate
//
//float goldvalue=gold*curgold;
//float silvervalue=silver*cursilver;
//float totalassets=goldvalue+silvervalue+cash;
//
//
////nisab find
//
//float goldnisab=curgold*goldn;
//float silvern=cursilver*nsil;
//
//if(totalassets>goldnisab || totalassets>silvern){
//	float tzakat=zakat*totalassets;
//	cout<<"you have to pay zakat: "<<tzakat<<endl;
//}else{
//	cout<<"dont have to pay";
//}


float volume;
float area;
float pi=3.1416;
float r=0.0;

int choice;
cout<<"2.volume radius"<<endl;
cout<<"1.area radius"<<endl;
cout<<"put choice: ";
cin>>choice;

switch(choice){
	case 1:
	cout<<"area: ";
     cin>>area; 
	r=sqrt(area/(4*pi));
	cout<<"radius of area is : "<<r<<endl;
	break;
	
	case 2: 
	cout<<"volume: ";
    cin>>volume;
    r=cbrt((volume*3)/(4*pi));
    cout<<"radius of volume: "<<r<<endl;
}

//
//
//int age;
//cout<<"enter person age: ";
//cin>>age;
//
//char disability;
//cout<<"person have any disaablity:(n/y):  ";
//cin>>disability;
//
//int choice;
//
//cout<<"1.matriculation\n";
//cout<<"2.intermediate\n";
//cout<<"3.graudtion\n";
//cout<<"4.master\n";
//cout<<"5.ms/mphil\n";
//cout<<"6.higher\n";
//cout<<"inter choice: ";
//cin>>choice;
// 
// int salary;
//switch(choice){
//	case 1: 
//	salary=10000;
//	if(age>55 && age<=60){
//		salary+=(0.15*salary);
//	}
//	if(age>60){
//		salary+=(0.20*salary);
//	}
//   if(disability=='y' || disability=='Y' ){
//		salary+=(0.07*salary);
//	}
//	cout<<"total salary of matriculation: "<<salary;
//	break;
//	case 2: 
//	salary=18000;
//	if(age>55 && age<=60){
//		salary+=(0.15*salary);
//	}
//	if(age>60){
//		salary+=(0.20*salary);
//	}
//   if(disability=='y' || disability=='Y' ){
//		salary+=(0.07*salary);
//	}
//	cout<<"total salary of intermediate: "<<salary;
//	break;
//	
//	case 3: 
//	salary=27000;
//	if(age>55 && age<=60){
//		salary+=(0.15*salary);
//	}
//	if(age>60){
//		salary+=(0.20*salary);
//	}
//   if(disability=='y' || disability=='Y' ){
//		salary+=(0.07*salary);
//	}
//	cout<<"total salary of graduate: "<<salary;
//	break;
//	
//	case 4: 
//	salary=39000;
//	if(age>55 && age<=60){
//		salary+=(0.15*salary);
//	}
//	if(age>60){
//		salary+=(0.20*salary);
//	}
//   if(disability=='y' || disability=='Y' ){
//		salary+=(0.07*salary);
//	}
//	cout<<"total salary of master: "<<salary;
//	break;
//	
//	case 5: 
//	salary=50000;
//	if(age>55 && age<=60){
//		salary+=(0.15*salary);
//	}
//	if(age>60){
//		salary+=(0.20*salary);
//	}
//   if(disability=='y' || disability=='Y' ){
//		salary+=(0.07*salary);
//	}
//	cout<<"total salary of ms/mphil: "<<salary;
//	break;
//	
//	case 6: 
//	salary=70000;
//	if(age>55 && age<=60){
//		salary+=(0.15*salary);
//	}
//	if(age>60){
//		salary+=(0.20*salary);
//	}
//   if(disability=='y' || disability=='Y' ){
//		salary+=(0.07*salary);
//	}
//	cout<<"total salary of higher: "<<salary;
//	break;
//}

	char array[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>array[i][j];
		}
	}

char array1[4][4];
	for(int i=3,h=0;i>=0;i--,h++){
		for(int j=3,u=0;j>=0;j--,u++){
			array1[h][u]=array[i][j];
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<array1[i][j]<<" ";
		} cout<<endl;
	}
	
	
	
//	int num;
//cout<<"enter a number: ";
//cin>>num;
//char character='/0';
//if(num>=1){
//	if(num<=100){
//		if(num>50){
//			cout<<"number is greater than 50: "<<endl;
//			character=num+20;
//			cout<<"char against number : "<<character<<endl;
//		} else if(num<50){
//			cout<<"number is less than 50: "<<endl;
//			character=num+20;
//			cout<<"char against number : "<<character<<endl;
//		}else if(num==50){
//			cout<<"number is equal to 50: "<<endl;
//			character=num+20;
//			cout<<"char against number : "<<character<<endl;
//		}
//	}
//}




//int day;
//cout<<"enter last day of month: ";
//cin>>day;
//
//switch(day){
//	case 28:
//	case 29:
//		cout<<"its month of feburary.days : "<<day<<endl;
//		break;
//	case 30:
//		cout<<"april, june ,sept, november : "<<day<<endl;
//		break;
//		case 31:
//		cout<<"janu,march,may,july,octuber,decomber : "<<day<<endl;
//		break;
//		default:
//			cout<<"you can put 31,28,30,29";
//			break;
//}





void displayseries(int num, int count){
//   if(count==11) return ; 
//   cout<<num<<" ";
//   int next;
//   if(count%2==0){
//   	next=num+10;
//   }else{
//   	next=num-5;
//   }
//   
//   displayseries(next,count+1);
//   
//   
//}
//
//
//int main(){
//	
//	
//
//  int num=100;
//  displayseries(num,0);



float array[5][3];
float mavg=0;

for(int i=0;i<5;i++){
	for(int j=0;j<3;j++){
	cin>>array[i][j];
}
}

for(int j=0;j<3;j++){
	int sum=0;
	for(int i=0;i<5;i++){
	sum+=array[i][j];
}
   mavg=sum/5;
   cout<<"week three time air humantiy first row for morinng sec for mid day and third for night:"<<j+1<<" "<<mavg<<endl;
}


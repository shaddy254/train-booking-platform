#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void login();
void mainEntryProject();
int askForDestination();
int askForDepart_point();
void bookTrain();
void payForTrain();
void assignTrainpay();
void getCustomerDetails();
void updateSeatsBooked(int number_of_seat_adult, int number_of_seats_child);


int travel_time; 
int number_of_seats_train = 500; //tracks the number remaining in train
int total_seats_booked; //number of adults + number of chldren
int number_of_seat; //number of travellers above 18 years
int number_of_children; //number of travellers below 18 years
char destination;
char username[10];
char password[10];
int price = 1000;
char departure_t[10] = "10.00 HR";
char arrival_time[10] = "10.00 HR";



int PICK_POINT, DEST_POINT;
const int PICK_POINT_MSA = 1;
const int PICK_POINT_NAI = 2;
const int PICK_POINT_NAIVA = 3;
const int DEST_POINT_MSA = 4;
const int DEST_POINT_NAI = 5;
const int DEST_POINT_NAIVA = 6;


int main(){
    // login();
    getCustomerDetails();
    mainEntryProject();
    return 0;
}

void login(){

    printf("Enter username : \n");
    scanf("%s", &username);
    printf("Enter password : \n");
    scanf("%s", &password);

    if(username == "Mweu" && password == "45678"){
        printf("Login successlul");
        // bookTrain();
    }
    else{
        printf("Incorrect password or username. Pls try agaiin.\n");
        login();
        return;
    }
}

void mainEntryProject(){
    switch (askForDepart_point()) {  //return int
    case 1: //FROM MSA
        assignTrainpay();
        break;
    case 2: //FROM MARIAKANI
       assignTrainpay();
        break;
    case 3://FROM MIASENYI
        assignTrainpay();
        break;
     case 4://FROM VOI
        assignTrainpay();
        break;
    case 5://FROM MTITO ANDEI
        assignTrainpay();
        break;// FROM KIBWEZI
    case 6:
        assignTrainpay();
        break;
    case 7:// FROM EMALI
        assignTrainpay();
        break;
    case 8://FROM ATHI RIVER
        assignTrainpay();
        break;
           assignTrainpay();
    case 9:// BOARDING AT NAIROBI
        assignTrainpay();
        break;
    default:
        printf("Kindly Enter 1-3");
        break;
    }
}

void assignTrainpay(){

    switch (askForDestination())   { //return int
        case 1 /* constant-expression */: //DESITINO MISIANTYI
            bookTrain();
            
            break;
        case 2:
            bookTrain();
           
        break;
        case 3:
            bookTrain();
            
        break;

        case 4:
            bookTrain();
           
        break;

        case 5: 
            bookTrain();
           
        break;

        case 6:
            bookTrain();
            
        break;

        case 7:
            bookTrain();
           
        break;
        
        default:
            break;
        }
}

void bookTrain(){
    updateSeatsBooked;
    if(number_of_seats_train < total_seats_booked){
        printf("Sorry The train is fully booked. Try Another day");
    }else{
        payForTrain();
        printf("Booking successful. Seat No. 53. Kindly Arrive 1 Hr BEFORE departre time");
    }
   
}

void payForTrain(){
    printf("Kindly pay though MPesa, Paybill number 685947, Account Number is Your ID Number\n");

}

int askForDestination(){
    printf("Kindly Enter your destination\n 1 : MOMBASA\n 2 : MARIAKANI\n 3 : MIASENYI\n 4 : VOI\n 5 : MUTITO\n 6 : KIBWEZI\n 7 : EMALI\n 8 : ATHI RIVER\n 9 : NAIROBI \n");
    scanf("%d", &destination); //1-9
    return destination;
}

int askForDepart_point(){
    printf("Kindly Enter your BOARDING POINT.  \n 1 : MOMBASA\n 2 : MARIAKANI\n 3 : MIASENYI\n 4 : VOI\n 5 : MUTITO\n 6 : KIBWEZI\n 7 : EMALI\n 8 : ATHI RIVER\n 9 : NAIROBI \n");
    scanf("%d", &PICK_POINT);
    return PICK_POINT;
}


void getCustomerDetails(){
    char first_name, second_name; //first and surname
    char gender; //male or female == F OR M
    char destination; //
    char pick_point; //
    int id_no; //NATIONAL ID OR PASSPORT NUMBER
    int  _hour, _minute; // (hh mm ss )
    int _day, _month, _year; //(dd mm yyyyy)

    printf("Enter your name : ");
    scanf("%s %s", &first_name, &second_name);
    printf("Enter your ID or PASSPORT NUMBER: ");
    scanf("%d", &id_no);
    printf("Enter your Gender : ");
    scanf("%s", &gender);
    printf("Enter Number Of Seats : ");
    scanf("%d", &number_of_seat);
    printf("Enter number Childdren below 18 Years Old : ");
    scanf("%d", &number_of_children);
    printf("Enter day of Travelling : ");
    scanf("%d %d %d", &_day, &_month, &_year);
    printf("Enter Time of Travelling : ");
    scanf("%d %d", &_hour, &_minute);
    
}

void updateSeatsBooked(int number_of_seat_adult, int number_of_seats_child){
    number_of_seats_train - number_of_seat_adult - number_of_seats_child;
    printf("%c", (char)number_of_seats_train);
}































//  printf("Enter your destination :");
    // scanf("%s", &destination);
    // printf("Enter Day and time of traveling :");
    // scanf("%s", &_time_day);
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void login();
void mainEntryProject();
int askForDestination();
int askForDepart_point();
int askForDayOfTravel();
void bookTrain();
void payForTrain();
void assignTrainpay();


int travel_time; 
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
        break;// FROMKIBWEZI
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
    case 9:// EXPRESS MOMBASA NAIROBI
        assignTrainpay();
        break;
    default:
        printf("Kindly Enter 1-3");
        break;
    }
}

int askForDestination(){
      printf("Enter your destination\n");
        scanf("%d", &destination); //1-9
        return destination;
}

int askForDepart_point(){
    char name, destination;
    int id_no, _time_day, pick_point;
    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Enter your ID : ");
    scanf("%d", &id_no);
    printf("Enter pick point: Enter 1 : MOMBASA\n Enter 2 : NAIROBI \n Enter 3 : NAIVASHA\n");
    scanf("%d", &PICK_POINT);
    return PICK_POINT;
}

void assignTrainpay(){
    switch (askForDestination())   { //return int
        case 1 /* constant-expression */: //DESITINO MISIANTYI
            askForDayOfTravel();
            bookTrain();
            payForTrain();
            break;
        case 2:
            askForDayOfTravel();
            bookTrain();
            payForTrain();
        break;
        case 3:
            askForDayOfTravel();
            bookTrain();
            payForTrain();
        break;

        case 4:
            askForDayOfTravel();
            bookTrain();
            payForTrain();
        break;

        case 5: 
            askForDayOfTravel();
            bookTrain();
            payForTrain();
        break;

        case 6:
            askForDayOfTravel();
            bookTrain();
            payForTrain();
        break;

        case 7:
            askForDayOfTravel();
            bookTrain();
            payForTrain();
        break;
        
        default:
            break;
        }
}

void bookTrain(){
    printf("Train Booked \n");
}

void payForTrain(){
    printf("Kindly pay though MPesa.\n");
}

int askForDayOfTravel(){
    printf("Kindly Enter Day and time of Travel\n");
}

































//  printf("Enter your destination :");
    // scanf("%s", &destination);
    // printf("Enter Day and time of traveling :");
    // scanf("%s", &_time_day);
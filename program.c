#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void login();
void bookTrain ();
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
    bookTrain();
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

void bookTrain(){
    char name, destination;
    int id_no, _time_day, pick_point;
    printf("Enter your name : ");
    scanf("%s", &name);
    printf("Enter your ID : ");
    scanf("%d", &id_no);
    printf("Enter pick point: Enter 1 : MOMBASA\n Enter 2 : NAIROBI \n Enter 3 : NAIVASHA\n");
    scanf("%d", &PICK_POINT);
 
    switch (PICK_POINT) {
    case 1:
        printf("Departing from MSA \n");
        printf("Enter DESTINATION:\n Enter 5 : NAIROBI: \n Enter 6 : NAIVASHA\n");
        scanf("%d", &DEST_POINT);
        
        if(DEST_POINT == DEST_POINT_NAI ){
            price = 1000;
            departure_t[10]  = "13.00 HR";
            arrival_time[10] = "19.00 HR";
            printf("Destination Nairobi \n");
            printf("Kindly pay " + price);
            printf("Your Departure time is : " + departure_t[10]);
            printf("Your Expected Arrival time is : " + arrival_time[10]);
        }else{
            
            price = 500.00;
            departure_t[10] = "14.00 HR";
            arrival_time[10] = "17.00 HR";
            printf("Destination Naivasha \n");
            printf("Kindly pay 500.00 via MPesa. \n");
            printf("Your Departure time is \n" );
            printf("Your Expected Arrival time is : \n");
        }

        break;
    case 2:
        printf("Departing from Nairobi");
        printf("Kindly Enter Destination");
        scanf("%d", &DEST_POINT);
        if(DEST_POINT == DEST_POINT_MSA ){
            price = 1000;
            departure_t[10] = 13.00;
            arrival_time[10] = 19.00;
        }else{
            price = 500.00;
            departure_t[10] = 11.00;
            arrival_time[10] = 03.00;
        }
        break;
    case 3:
        printf("Departing from Naivasha");
        printf("Departing from Nairobi");
        printf("Kindly Enter Destination");
        scanf("%d", &DEST_POINT);
        if(DEST_POINT == DEST_POINT_MSA ){
            price = 1000;
            departure_t[10] = 13.00;
            arrival_time[10] = 19.00;
        }else{
            price = 500.00;
            departure_t[10] = 14.00;
            arrival_time[10] = 17.00;
        }
        break;
    
    default:
        printf("Kindly Enter 1-3");
        break;
    }
}

//  printf("Enter your destination :");
    // scanf("%s", &destination);
    // printf("Enter Day and time of traveling :");
    // scanf("%s", &_time_day);
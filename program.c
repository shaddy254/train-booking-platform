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
clock_t departure_t = 14.00;
clock_t arrival_t = 17.00;

int PICK_POINT, DEST_POINT;
const int PICK_POINT_MSA = 1;
const int PICK_POINT_NAI = 2;
const int PICK_POINT_NAIVA = 3;
const int DEST_POINT_MSA = 4;
const int DEST_POINT_NAI = 5;
const int DEST_POINT_NAIVA = 6;


int main(){
    login();
}

void login(){

    printf("Enter username : \n");
    scanf("%s", &username);
    printf("Enter password : \n");
    scanf("%s", &password);

    if(username == "Mweu" && password == "45678"){
        printf("Login successlul");
        bookTrain();
    }
    else{
        printf("Incorrect password or username. Pls try agaiin.\n");
        login();
        return;
    }
}

void bookTrain(){
    char name, pick_point, destination;
    int id_no, _time_day;
    printf("Enter your name");
    scanf("%s", &name);
    printf("Enter your ID");
    scanf("%d", &id_no);
    printf("Enter pick point:");
    scanf("%s", &pick_point);
    printf("Enter your destination :");
    scanf("%s", &destination);
    printf("Enter Day and time of traveling :");
    scanf("%s", &_time_day);

    // if (pick_point == "Mombasa" && destination == "Nairobi" ){ strcmp(strg1, strg2)==0
    //     int price = 1000;
    //     clock_t booking_time = clock(); //time as per clock
    //     printf(booking_time);
    //     departure_t = 10.00;
    //     arrival_t = 07.00;

    //     printf(" Your train deaprts Mombasa Treminu at : 10.00Hrs, and Arrives Nairobi at : 7.00Hrs \n");
    //     printf("Price : 1000.00");
    // }

    switch (PICK_POINT) {
    case 1:
        printf("Departing from MSA");
        printf("Kindly Enter Destination");
        scanf("%d", &DEST_POINT);
        if(DEST_POINT == DEST_POINT_NAI ){
            price = 1000;
            departure_t  = 13.00 ;
            arrival_t = 19.00;
        }else{
            price = 500.00;
            departure_t = 14.00;
            arrival_t = 17.00;
        }

        break;
    case 2:
        printf("Departing from Nairobi");
        printf("Kindly Enter Destination");
        scanf("%d", &DEST_POINT);
        if(DEST_POINT == DEST_POINT_MSA ){
            price = 1000;
            departure_t = 13.00;
            arrival_t = 19.00;
        }else{
            price = 500.00;
            departure_t = 11.00;
            arrival_t = 03.00;
        }
        break;
    case 3:
        printf("Departing from Naivasha");
               printf("Departing from Nairobi");
        printf("Kindly Enter Destination");
        scanf("%d", &DEST_POINT);
        if(DEST_POINT == DEST_POINT_MSA ){
            price = 1000;
            departure_t = 13.00;
            arrival_t = 19.00;
        }else{
            price = 500.00;
            departure_t = 14.00;
            arrival_t = 17.00;
        }
        break;
    
    default:
        printf("Kindly Enter 1-3");
        break;
    }


}

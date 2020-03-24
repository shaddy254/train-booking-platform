#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void login();
void bookTrain (int depart_point, int dest_point);
void pay_train()
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


int main (){
    login();
    bookTrain();
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

void bookTrain(int depart_point, int destination_point){
    if(depart_point == 1 && destination_point == 2){
        printf("departing from MOMBASA for MARIAKANI");

    }else if(depart_point == 1 && destination_point == 3)
    {
        printf("departing from MOMBASA for MIASENYI");
    }else if(depart_point == 1 && destination_point == 4){
        printf("departing from MOMBASA for VOI");
    }else if(depart_point == 1 && destination_point == 5){
        printf("departing from MOMBASA for MUTITO");
    }else if(depart_point == 1 && destination_point == 6){
        printf("departing from MOMBASA for KIBWEZI");
    }else if(depart_point == 1 && destination_point == 7){
        printf("departing from MOMBASA for EMALI");
    }else if(depart_point == 1 && destination_point == 8){
        printf("departing from MOMBASA for ATHI RIVER");
    }else {
        printf("departing from MOMBASA for NAIROBI");
    }
    
}

bookTrain(1,2);
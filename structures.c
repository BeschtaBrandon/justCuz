#include <stdio.h>
#include <string.h>

struct Flights {
  char airline[50];
  char destination[50];
  int flightNum;
};
void printFlights(struct Flights *flight);
int main(){

struct Flights flight1;
struct Flights flight2;


strcpy(flight1.airline, "Southwestern");
strcpy(flight1.destination, "Miami, FL");
flight1.flightNum = 234;

strcpy(flight2.airline, "Delta");
strcpy(flight2.destination, "Mexico City, Mexico");
flight2.flightNum = 435;

printFlights(&flight1);
printFlights(&flight2);

}

void printFlights (struct Flights *flight){
  printf("\n");
  printf("Flying through %s\n", flight->airline);
  printf("Arriving in %s\n", flight->destination);
  printf("Flight number: %d\n",flight->flightNum );
  printf("\n");
}

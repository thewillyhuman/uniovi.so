#include <stdio.h>
#include <stdlib.h>

main () {

  int age=23;
  float bankBalance= 300.17;
  char letterOfYourNIF='T';
   
  printf("Hello %s. Being a %d year old man/woman, what do you plan to do with your %f euros?\n", "Fernando",age,bankBalance);
  printf("You better renew your DNI, the one that ends with a %c\n",letterOfYourNIF);
  printf("Your bank balance is: %f\n", bankBalance);
  printf("Half of it will be then %f\n", (bankBalance/2));
  exit(1);
  
}


// 1. Compile using "gcc EN02HelloWorld.c"
// 2. Execute using "./a.out"
// 3. Modify the program so that it shows half of "bankBalance"

#include <stdio.h>

#include <cs50.h>

#include <math.h>


int main(void);

{

float change;

int changecents;

int coins = 0;

//asking money

do

{

change = get_float("Change: ");

}

while (change < 0)



//round and change to cents

changecents = round ( change * 100);



//coins counter

while (changecents >= 25)

{

changecents = changecents - 25;

coins++;

}

while (changecents >= 10)

{

changecents = changecents -10;

coins++;

}

while (changecents >= 5)

{

changecents = changecents - 5 ;

coins++;

}

while (changecents >= 1)

{

changecents = changecents -1 ;

coins++;

}

//printing number of coins



{

printf("Coins needed %d\n", coins);

}

}

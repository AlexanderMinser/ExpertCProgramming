//Expert C Programming Chapter 1: Problem 1
//Alexander Minser
//10/10/2017



#include<stdio.h>
#include<time.h>
#include<limits.h>





int main() {
    time_t currTime = time(NULL);
    time_t maxTime = INT_MAX;
    double diffTime = difftime(maxTime, currTime);
    int years = (int) diffTime / (60*60*24*365);
    printf("%d\n", years);


    return 0;
}

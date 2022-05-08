#include <stdio.h>
#include <string.h>
#include "twitter_create.h"

void followUser(user* first, user* next){
    strcpy(first->following[first->num_following], next->username);
    first -> num_following++;
    strcpy(next->followers[next ->num_followers], first->username);
    next->num_followers++;

    printf("You are following: %s\n", next->username);
}

#include <stdio.h>
#include "twitter_create.h"

void turnEnd(user* first){
    printf("User: %s\n---Followers: %d---\n---Following: %d---\n\n", first->username, first->num_followers, first->num_following);
}

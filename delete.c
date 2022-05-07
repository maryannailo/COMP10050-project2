#include <stdio.h>
#include <string.h>
#include "twitter_create.h"

void delete(user* first, twitter* twitter_system){
    do {
        first->num_following--;
    }while(first->num_following>0);

    for (int i = 0; i < twitter_system->num_users; i++) {
        if(strcmp(first->username, twitter_system->users[i].username)== 0){
            for (int j = 0; j < twitter_system->num_users; j++) {
                strcpy(twitter_system->users[j].username, twitter_system->users[j+1].username);
            }
        }
    }
    twitter_system->num_users--;
}

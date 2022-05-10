//
// Created by MaryAnna Iloduba
//
#include <stdio.h>
#include "twitter_create.h"

void printTweet(twitter* twitter_system){
    for (int i = 0; i < twitter_system->num_tweets; i++) {
        printf("%s", &twitter_system->news_feed[i].msg);
    }
}

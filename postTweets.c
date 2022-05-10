//
// Created by Maryanna Iloduba on 03/05/2022.
//

#ifndef COMP10050_ASSIGNMENT_2_POSTTWEETS_H
#define COMP10050_ASSIGNMENT_2_POSTTWEETS_H

#endif //COMP10050_ASSIGNMENT_2_POSTTWEETS_H

#include <stdio.h>
#include <string.h>
#include "twitter_create.h"

void postTweets(user* first, tweet* tweet1, twitter* twitter_system)
{
//just like in the notes this function will allow the user to post tweets that they have created
    strcpy(&twitter_system->news_feed[twitter_system->num_tweets].user, first->username);
    twitter_system->news_feed[twitter_system->num_tweets].id = twitter_system->num_tweets;

//tweet from user
    printf("Post Tweet Below:\n");
    for(int i=0; i<=1; i++)
    {
        //fgets will get the users
        fgets(&tweet1->msg, TWEET_LENGTH,stdin);

    }
    //increase num_tweets by 1
    twitter_system->num_tweets++;

}

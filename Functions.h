//
// Created by Zeina Khattab on 08/05/2022.
//

#ifndef SEPROJECT2_FUNCTIONS_H
#define SEPROJECT2_FUNCTIONS_H

#endif //SEPROJECT2_FUNCTIONS_H
#include <stdio.h>

void delete(user* first, twitter* twitter_system);
int endTwitter();
void followUser(user* first, user* next);
void unfollowUser(user* first, user* next);
void postTweets(user* first, tweet* tweet1, twitter* twitter_system);
void getNewsFeed(twitter *twitter_system, int tweetNumber,int user);
void turnEnd(user* first);

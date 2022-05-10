//
// Created by Zeina Khattab on 04/05/2022.
//
#include <stdio.h>
#include <string.h>
#include "twitter_create.h"

void getNewsFeed(twitter *twitter_system, int tweetNum, int user)
{
    for (int k = 0; k < tweetNum; k++)
    {
        if (k >= 10)
        {
            break;
        }
        else
        {
            for (int i = 0; i < twitter_system->num_users; i++)
            {
                if (strcmp(twitter_system->users[user].username, twitter_system->news_feed[i].user) == 0)
                {
                    printf("User - %s:\nID : %d\nTweet : %s\n\n\n", twitter_system->news_feed[tweetNum - k - 1].user,
                           twitter_system->news_feed[tweetNum - k - 1].id,
                           twitter_system->news_feed[tweetNum - k - 1].msg);
                }
                else
                {
                    for (int j = 0; j < twitter_system->users[user].num_following; j++)
                    {
                        if (strcmp(twitter_system->users[user].following[j], twitter_system->news_feed[i].user) == 0)
                        {
                            printf("User:%s:\nID: %d\nTweet:%s\n\n\n",
                                   twitter_system->news_feed[tweetNum - k - 1].user,
                                   twitter_system->news_feed[tweetNum - k - 1].id,
                                   twitter_system->news_feed[tweetNum - k - 1].msg);
                        }
                    }
                }
            }
        }
    }
}

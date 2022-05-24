#include <stdio.h>
#include "twitter_create.h"
#include "Functions.h"

int main()
{
    int input;
    int n1, n2=0; //n1: following count, n2: tweet count
    
    twitter twitter_system; //declaring twitter system struct
    create_twitter_system(&twitter_system); //function call to create twitter system

    for (int i = 0; i < twitter_system.num_users; i++) //for loop that helps print out all users, how many users they follow and how many users follow them
    {
        printf("User: %s\nFollowers: %d\nFollowing: %d\n\n", twitter_system.users[i].username, twitter_system.users[i].num_followers, twitter_system.users[i].num_following);
    }

    //for loop to run program. loops through each user and asks what function they would like to do
    for(int j=0; j<twitter_system.num_users; j++)
    {
        n1 = 0; // the following count to zero for each user at first
        printf("User %d - %s : Please choose an option from 1 - 6:\n1: Post a tweet\n2: Return the News Feed\n"
               "3: Follow another user\n4: Unfollow a user\n5: Delete your user\n6: Move to the next user\n", j, twitter_system.users[j].username);

        scanf("%d%*c", &input); //asks what function the users want to use and assign it to the input variable
        while (input < 1 || input > 7)
        {
            printf("Invalid choice. Please input a valid number.\n"); //printed if an invalid choice is made
            scanf("%d%*c", &input);
        }.

        while(input != 7) //while loop as long as the input is not equal to 7
        {
            //swithch statements to call the correct function according to the user's input
            switch(input)
            {
                case 1:
                postTweets(j, n2, &twitter_system); //The user posts a tweet
                n2++; //increment number of tweets
                break;
                    
                case 2:
                getNewsFeed(&twitter_system, n2, j); //users News Feed is printed
                break;
                
                case 3:
                followUser(&twitter_system, j); //The user follows another user
                n1++; //increment number of followers
                break;
                    
                case 4:
                unfollowUser(n1, j); //The user unfollows a user they follow
                break;

                case 5:
                delete(j, &twitter_system); //The user deletes their account from the twitter system
                break;
                    
                case 6:
                break; //program moves to the next user
            }

            printf("User %d - %s : Please choose another option from 1 - 7:\n1: Post a tweet\n2: Return the News Feed\n"
               "3: Follow another user\n4: Unfollow a user\n5: Delete your user\n6: Move to the next user\n"
               "7: Terminate the program/End Twitter\n", j, twitter_system.users[j].username);

            scanf("%d%*c", &input); //asks what function the users wants to use next
            while (input < 1 || input > 7)
            {
                printf("Invalid choice. Please input a valid number.\n"); //if an invalid choice is made this is printed
                scanf("%input%*c", &input);
            }
        }
        if(input == 7) //if statement to terminate the program if their choice was 7
        {
            endTwitter();
        }
    }
}

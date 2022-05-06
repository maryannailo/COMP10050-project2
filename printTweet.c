//
// Created by MaryAnna Iloduba
//

void printTweet(twitter* twitter_system){
    for (int i = 0; i < twitter_system->num_sweets; i++) {
        printf("%s", &twitter_system->news_feed[i].msg);
    }
}
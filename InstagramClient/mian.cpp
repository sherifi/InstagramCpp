#include<InstagramClient.h>
#include<iostream>

int main() {
    /***
    retrieving OAuth response code
    ***/

    Instagram::InstagramClient instClient{};
    Instagram::AuthorizationToken authToken = instClient.authenticate(code, clientId, clientSecret, redirectUri);

    if (!authToken) {
        std::cerr << "Failed to retrieve authorization token, reason : " << authToken.errorMessage() << "\n";
        return 1;
    }

    std::cout << "User with name : " << authToken.userInfo().username() << " authenticated" << "\n";

    Instagram::MediaEntries mediaEntries = instClient.getRecentMedia();
    if (!mediaEntries) {
        std::cerr << "Failed to retrieve recent media, reason : " << mediaEntries.errorMessage() << "\n";
        return 1;
    }

    for (const auto& media : mediaEntries) {
        std::cout << media.caption() << "\n";
        std::cout << "likes count : " << media.likesCount() << "\n";
        std::cout << "comments count " << media.commentsCount() << "\n\n";
    }

    return 0;
}
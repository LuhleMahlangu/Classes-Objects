#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    int SubcribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;
public:
    YouTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubcribersCount = 0;
        ContentQuality = 0;
    }

    void GetInfo(){
    cout << "Name: " << Name << endl;
    cout << "OwnerName: " << OwnerName << endl;
    cout << "SubscribersCount: " << SubcribersCount << endl;
    cout << "Videos: " << endl;
    for(string videoTitle: PublishedVideoTitles ) {
        cout << videoTitle << endl; 
    }
    }

    void Subscribe(){
        SubcribersCount++;
    }

    void Unsubscribe(){
        if(SubcribersCount>0)
        SubcribersCount--;
    }

    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }

    void CheckAnalytics(){
        if(ContentQuality < 5)
            cout << Name << "Has bad quality content." << endl;
        else
            cout << Name << "Has good quality content." << endl;
    }

};

class CookingYouTubeChannel:public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownername):YouTubeChannel(name, ownername){
    }

    void Practice(){
        cout << OwnerName << " Practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality ++;
    }
};

class SingersYouTubeChannel:public YouTubeChannel {
public:
    SingersYouTubeChannel(string name, string ownername):YouTubeChannel(name, ownername){
    }

    void Practice(){
        cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }
};


int main()
{

   CookingYouTubeChannel cookingytChannel(" Spider-Mans Kitchen ", "Peter Parker");
   SingersYouTubeChannel singersytChannel(" Goblinsings ", "Norman"); 
    


    cookingytChannel.Practice();
    cookingytChannel.Practice();
    cookingytChannel.Practice();
    cookingytChannel.Practice();
    cookingytChannel.Practice();
    singersytChannel.Practice();

    YouTubeChannel * yt1 = &cookingytChannel;
    YouTubeChannel * yt2 = &singersytChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();


    return 0;
}
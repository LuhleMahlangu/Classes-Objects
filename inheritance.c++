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
public:
    YouTubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubcribersCount = 0;
        
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

};

class CookingYouTubeChannel:public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownername):YouTubeChannel(name, ownername){
    }

    void Practice(){
        cout << OwnerName << " Practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};

int main()
{

   CookingYouTubeChannel cookingytChannel("Spider-Mans Kitchen", "Peter Parker");
   CookingYouTubeChannel cookingytChannel2("Mary Jane's Kitchen", "Mary Jane"); 
    /*cookingytChannel.PublishVideo("Apple pie");
    cookingytChannel.PublishVideo("Chocolate cake");
    cookingytChannel.Subscribe();
    cookingytChannel.Subscribe();
    cookingytChannel.GetInfo();*/
    cookingytChannel.Practice();
    cookingytChannel2.Practice();
    return 0;
}
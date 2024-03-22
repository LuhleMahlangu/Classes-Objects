#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    string OwnerName;
    int SubcribersCount;
    list<string> PublishedVideoTitles;
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

int main()
{

    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP for beginners");
    //ytChannel.Subscribe();
    //ytChannel.Subscribe();
    //ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    
    

    ytChannel.GetInfo();
   
    return 0;
}
#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
    public:
    string Name;
    string OwnerName;
    int SubcribersCount;
    list<string> PublishedVideoTitles;
};

int main()
{

    YouTubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubcribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners video1", "HTML & CSS video1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubcribersCount << endl;
    cout << "Videos: " << endl;
    for(string videoTitle: ytChannel.PublishedVideoTitles ) {
        cout << videoTitle << endl; 
    }



    return 0;
}
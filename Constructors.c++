#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
    public:
    string Name;
    string OwnerName;
    int SubcribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string OwnerName){
        Name = name;
        OwnerName = OwnerName;
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
};

int main()
{

    YouTubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP for beginners");

    YouTubeChannel ytChannel2("Hall & Oates", "Sara Smiles");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();

    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; // do nothing function --> pure virtual function
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r,float vl): CWH(s,r){
            videoLength = vl;
        }
        void display(){
            cout << "This is an amazing video with title : " << title <<endl;
            cout << "This Video has rating of : " << rating << " stars " << endl;
            cout << "The length of the video is : " << videoLength << " minutes" << endl << endl;
        } 
};

class CWHText : public CWH{
    int wordCount;
    public:
        CWHText(string s, float r,int wc): CWH(s,r){
            wordCount = wc;
        }
        void display(){
            cout << "This is an amazing text turorial with title : " << title <<endl;
            cout << "This text tutorial has rating of : " << rating << " stars " << endl;
            cout << "The number of words in the text turorial are : " << wordCount << endl << endl;
        }
};

int main(){
        string title;
    float rating, vlen;
    int words;

    //for CODE WITH HARRY VIDEOS
    title = "Django Tutorial";
    vlen = 45.02;
    rating = 8.9;

    CWHVideo Video(title,rating,vlen);
    Video.display();

    title = "Django Tutorial Text";
    words = 454;
    rating = 7.4;

    CWHText Text(title,rating,words);
    Text.display();

    cout << endl << "************** \t NOW Taking as POINTERS \t ******************" << endl << endl;

    CWH *tuts[2];
    tuts[0] = &Video;
    tuts[0]->display();

    tuts[1] = &Text;
    tuts[1]->display();


}
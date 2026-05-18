#include <iostream>
#include<fstream>
using namespace std;

class media{
    public:
    virtual void play() =0 ;
};

class audio : public media {
public :
void play(){
//cout<<"this is part of audio form media part"<<endl;


        ofstream fout("media.txt", ios::app);
        fout << "Audio Played" << endl;
        fout.close();
}
};

class  video: public media {
public :
void  play(){
//cout<<"this part is for vidio from media part "<<endl;

        ofstream fout("media.txt", ios::app);
        fout << "VIDEO Played" << endl;
        fout.close();
}
};


class image : public media {
public:
void play(){
//cout<<"this part is for image from media part "<<endl;

ofstream fout("media.txt", ios::app);
        fout << "image Played" << endl;
        fout.close();
}

};


int main() {
    
media *m;

    audio a1;
    video v1;
    image i1;

    m = &a1;
    m->play();

    m = &v1;
    m->play();

    m = &i1;
    m->play();
    return 0;
}

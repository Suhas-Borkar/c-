#include <iostream>
// #include<string.h>
#include <bits/stdc++.h>
using namespace std;

class CWS
{
protected:
    string title;
    float rating;

public:
    CWS(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display(){};
};

class CWSvideo : public CWS
{
    int videoLength;

public:
    CWSvideo(string s, float r, int wl) : CWS(s, r)
    {
        videoLength = wl;
    }

    void display()
    {
        cout << "This Video title is " << title << endl;
        cout << "Rating " << rating << " out of 5 star" << endl;
        cout << "Length of this Video " << videoLength << endl;
    }
};

class CWSText : public CWS
{
    int words;

public:
    CWSText(string s, float r, int tl) : CWS(s, r)
    {
        words = tl;
    }

    void display()
    {
        cout << "This Video title is " << title << endl;
        cout << "Rating " << rating << " out of 5 star" << endl;
        cout << "no of words in this text tutorial " << words << "Words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "PHP Tutorial";
    rating = 5;
    vlen = 10.21;
    words = 20;
    
    CWSvideo suhas(title,rating,vlen);
    // suhas.display();
    
    CWSText nilesh(title,rating,words);
    // nilesh.display();

    CWS * su[2];
    su[0] = & suhas;
    su[1] = & nilesh;
    
    su[0]->display();
    su[1]->display();

    return 0;
};
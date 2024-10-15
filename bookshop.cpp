#include <iostream>
#include <string>
using namespace std;

// Base Class: Media
class Media {
protected:
    string title, publication;

public:
    Media(string t, string p) : title(t), publication(p) {}
    virtual void read() = 0; // Pure virtual function
    virtual void show() = 0; // Pure virtual function
};

// Derived Class: Book
class Book : public Media {
private:
    int pages;

public:
    Book(string t, string p, int pg) : Media(t, p), pages(pg) {}
    void read() override {
        cout << "Reading book: " << title << ", Pages: " << pages << endl;
    }
    void show() override {
        cout << "Book Title: " << title << ", Pages: " << pages << endl;
    }
};

// Derived Class: Tape
class Tape : public Media {
private:
    float playingTime;

public:
    Tape(string t, string p, float pt) : Media(t, p), playingTime(pt) {}
    void read() override {
        cout << "Playing tape: " << title << ", Time: " << playingTime << " min" << endl;
    }
    void show() override {
        cout << "Tape Title: " << title << ", Time: " << playingTime << " min" << endl;
    }
};

int main() {
    Media* media1 = new Book("C++ Programming", "XYZ Publications", 350);
    Media* media2 = new Tape("Classic Music", "ABC Records", 90.5);

    media1->read();
    media1->show();
    media2->read();
    media2->show();

    delete media1;
    delete media2;
    cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";

    return 0;
}

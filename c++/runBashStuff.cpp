#include<iostream>
#include<cstring>
#include<filesystem>
#include<vector>

namespace fs = std::filesystem;

class ImageNode{
    public:
        std::string path;
        ImageNode *next, *previous;
        ImageNode(){
            next = previous = NULL;
        }
        ImageNode(std::string string){
            this->path = string;
            next = previous = NULL;
        }
};

class ImageLinkedList:public ImageNode{
    ImageNode *head;
    std::vector<std::string> paths = {"/home/jarus/1.png", "/home/jarus/Wallpapers/ml-wallpaper-17.jpg", "/home/jarus/Documents/javaLab/20200127/dupl.png"};
    public:
        ImageLinkedList(){
            head = NULL;
        }
        void create();
        void displayImage(std::string str);
        
};

void ImageLinkedList::displayImage(std::string str){
    const std::string program = "feh ";
    std::string fullCommand = program+str;
    const char * toUse = fullCommand.c_str();
    if(system(NULL)){
        fputs("OK", stdout);
        system(toUse);
    }
    else{
        std::cout<<"Could not open image: "<<str<<"\n";
        exit(EXIT_FAILURE);
    }
    //Debugging Code.
    // system("feh /home/jarus/Wallpapers/ml-wallpaper-13.jpg");
}

void ImageLinkedList::create(){
    for(std::string i : paths){
        displayImage(i);
    }
}

int main(){
    ImageLinkedList *l = new ImageLinkedList();
    l->create();

    //Debugging code
    // l->displayImage("/home/jarus/1.png");
    // displayImage("/home/jarus/Wallpapers/ml-wallpaper-17.jpg");
    return 0;
}
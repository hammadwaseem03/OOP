#include<string.h>
class Car{
    private:
    char colour[10];
    public:
        Car(char* colour_in);
        char* getColour();
};
Car::Car(char* colour_in){
    strncpy(colour,colour_in,9);
    colour[9]='\0';
}
char* Car::getColour(){
    return colour;
}
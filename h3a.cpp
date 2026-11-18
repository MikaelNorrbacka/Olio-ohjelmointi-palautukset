#include <iostream>
#include <string>

//Luokat
class Chef { // tehdään luokat
protected:
    std::string name;

public: //nimetään konstruktori
    Chef(std::string name): name(name) {
        std::cout << "Chef " << name << " konstruktori" <<std::endl;
    }

    //Seuraavaksi nimetään destruktori
    virtual ~Chef() {
        std::cout << "Chef " << name << " destruktori" <<std::endl;
    }

    std::string getName() const {   //tuodaan kokin (chef) nimi
        return name;
    }
    //nimetään seuraavaksi sen mukaan, mitä terminaalissa kuuluu näkyä
    void makesalad() {
        std::cout <<"Chef " << name << " makes salad" <<std::endl;
    }

    void makesoup() {
        std::cout <<"Chef " << name << " makes soup" <<std::endl;
    }
};

// Tehdään aliluokka: ItalianChef

class ItalianChef : public Chef {
public:
    ItalianChef(std::string name): Chef (name) {
        std::cout << "ItalianChef" << name << " konstruktori" <<std::endl;
    }

    ~ItalianChef() override {
        std::cout << "ItalianChef " << name << " destruktori" <<std::endl;
    }

    void makesalad() {
        std::cout <<"ItalianChef " << name << " makes salad" <<std::endl;
    }

    void makesoup() {
        std::cout <<"ItalianChef " << name << " makes soup" <<std::endl;
    }
    void makePasta () {
        std::cout << "Italian Chef" << name << " makes pasta" <<std::endl;
    }
};

// Ajetaan pääohjelma
int main () {

    Chef myChef ("Gordon Ramsay"); // luodaan chefille nimi

    myChef.makesalad();
    myChef.makesoup();

    ItalianChef ItalianChef ("Anthony Bourdain"); //luodaan aliohjelman kokille (Italianchef) nimi

    ItalianChef.makesalad(); // tiedot, mitä terminaalissa näkyy
    ItalianChef.makesoup();
    ItalianChef.makePasta();

    return 0;
}

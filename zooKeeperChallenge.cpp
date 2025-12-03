#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Animal {
private:
    string species;
    string gender;
    int age;
    string birthSeason;
    string furColor;
    int weight;
    string origin;

public:
    void setSpecies(string species) {
        this->species = species;
    }
    void setGender(string gender) {
        this->gender = gender;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setBirthSeason(string birthSeason) {
        this->birthSeason = birthSeason;
    }
    void setfurColor(string furColor) {
        this->furColor = furColor;
    }
    void setOrigin(int origin) {
        this->origin = origin;
    }

    void arrivingAnimals() {
        std::cout << "species: " << this->species << std::endl;
        std::cout << "gender: " << this->gender << std::endl;
        std::cout << "age: " << this->age << std::endl;
        std::cout << "birth season: " << this->birthSeason << std::endl;
        std::cout << "furColor: " << this->furColor << std::endl;
        std::cout << "origin: " << this->origin << std::endl;
    }


int main() {
        
    vector<Animal> animals;

    fstream file;

    ifstream infile("C:/CIT projects/Challenge/arrivingAnimals");
    if (!infile) {
        cerr << "Error opening arrivingAnimals.txt" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {
        if (line.size() > 1)
            animals.push_back(parseArrivingAnimal(line));
    }
    infile.close();


    ifstream animalNames("C:/CIT projects/Challenge/animalNames", ios::in);//read
    if (arrivingAnimals.is_open()) {
        string line;
        while (getline(animalNames, line)) {
            cout << line << endl;
    }
        ifstream animalNames("C:/CIT projectsChallenge/arrivingAnimals", ios::in);//read
        if (animalNames.is_open()) {
            string line;
            while (getline(animalNames, line)) {
                cout << line << endl;
            }

    }
        ", ios::in);//read
        if (arrivingAnimals.is_open()) {
            string line;
            while (getline(arrivingAnimals, line)) {
                cout << line << endl;

                ", ios::in);//read
        if (animalNames.is_open()) {
            string line;
            while (getline(arrivingAnimals, line)) {
                cout << line << endl;

            }

    cout << "\n===== Animal Names Loaded From File =====\n";
    string nameLine;
    while (getline(animalNames, nameLine)) {
        cout << nameLine << endl;
    }
            arrivingAnimals.seekg(0, ios::beg);
            arrivingAnimals.close();

    cout << "\n===== Arriving Animal Records =====\n\n";
    for (const Animal &a : animals) {
        arrivingAnimals();
    }

    return 0;
}
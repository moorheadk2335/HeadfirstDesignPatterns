#ifndef CHOCOLATE_BOILER_H
#define CHOCOLATE_BOILER_H

class ChocolateBoiler {
    bool empty;
    bool boiled;

    // Default constructor
    ChocolateBoiler() : empty(true), boiled(false) { };

public:
    static ChocolateBoiler& getInstance() {
        static ChocolateBoiler boiler;
        return boiler;
    };

    ChocolateBoiler(const ChocolateBoiler& boiler) = delete; // Copy constructor
    ChocolateBoiler(const ChocolateBoiler&& boiler) = delete; // Move constructor
    ChocolateBoiler& operator=(const ChocolateBoiler &boiler) = delete; // Assignment operator    
    ChocolateBoiler& operator=(const ChocolateBoiler &&boiler) = delete; // Move operator

    void fill();
    void drain();
    void boil();

    bool isEmpty() {
        return empty;
    };

    bool isBoiled() {
        return boiled;
    };
};

#endif //CHOCOLATE_BOILER_H
#include <iostream>
#include <string>
#include <map>
#include <tuple>


std::tuple<std::map<std::string, int>, std::map<std::string, int> > create_map_buttons_leds()
{
    std::map<std::string, int> map_buttons;
    std::map<std::string, int> map_leds;

    map_buttons["button1"] = 1;
    map_buttons["button2"] = 2;

    map_leds["redLed"] = 11;
    map_leds["greenLed"] = 12;
    map_leds["yellowLed"] = 13;
    map_leds["white"] = 14;

    return {map_buttons, map_leds};
}

int main(int argc, char *argv[])
{
    std::cout << "Experimenting tuple" << std::endl;
    
    auto[buttons, leds] = create_map_buttons_leds();
    std::cout << buttons["button1"] << std::endl;
    std::cout << buttons["button2"] << std::endl;
    std::cout << leds["redLed"] << std::endl;
    return 0;
}

#include <iostream>
#include "json/json.hpp"
#include <fstream>

using json = nlohmann::json;

int main()
{
    json j;

    j["name"] = "Patrycja";

    j["list"] = { 2, 4, 8, 5 };

    j["city"]["name"] = "Warsaw";
    j["city"]["district"] = "Wilanow";

    std::ofstream o("me.json");
    o << std::setw(4) << j << std::endl;
}
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <assert.h>

std::vector<std::string> getColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    std::vector<std::string> colorMap;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            int pairNumber = i * 5 + j;
            std::ostringstream oss;
            oss << std::setw(2) << pairNumber << " | "
                << std::setw(6) << majorColor[i] << " | "
                << std::setw(6) << minorColor[j];
            colorMap.push_back(oss.str());
        }
    }
    return colorMap;
}

void printColorMap() {
    std::vector<std::string> colorMap = getColorMap();
    for(const auto& line : colorMap) {
        std::cout << line << "\n";
    }
}

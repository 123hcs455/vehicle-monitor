
#include <iostream>
#include <vector>
int main() {
    std::vector<double> speeds = {20.0, 45.5, 65.0, 35.0};
    const double speed_limit = 60.0;

    for (double speed : speeds) {
        std::cout << "Vehicle speed: "
                  << speed << " km/h";

        if (speed > speed_limit) {
            std::cout << " [Warning: Overspeed]";
        }

        std::cout << '\n';
    }
    return 0;
}

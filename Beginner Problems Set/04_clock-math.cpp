#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int H, M;
    cin >> H >> M;
    double minute_angle = M * 6.0;
    double hour_angle = H * 30.0 + M * 0.5;
    double angle_difference = fabs(hour_angle - minute_angle);
    double smaller_angle = min(angle_difference, 360.0 - angle_difference);
    cout << fixed << setprecision(4) << smaller_angle << endl;
    return 0;
}

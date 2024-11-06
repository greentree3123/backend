#include <iostream>
#include <cmath>   // 수학 함수 사용을 위한 헤더
#include <iomanip> // 소수점 출력 설정을 위한 헤더
using namespace std;

int main() {
    double radius;
    const int numPoints = 5; // 오각형의 꼭짓점 수
    const double PI = 3.1415;

    // 반지름 입력
    cout << "Enter the radius of the bounding circle: ";
    cin >> radius;

    // 각 꼭짓점 좌표를 계산하여 출력
    cout << "The coordinates of five points on the pentagon are:" << endl;

    for (int i = 0; i < numPoints; i++) {
        // 각 꼭짓점의 각도 계산 (0도에서 시작하여 72도씩 증가)
        double angle = (2 * PI * i / numPoints); // 각도 계산
        angle -= PI / 2; // 0시 방향을 고려하여 -90도 보정

        // x, y 좌표 계산
        double x = radius * cos(angle);
        double y = radius * sin(angle);

        // 소수점 4자리까지 출력
        cout << fixed << setprecision(4) << "(" << x << ", " << y << ")" << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int simulateRobot(const string& track, const string& commands) {
    int position = -1;
    int n = track.length();
    for (char cmd : commands) {
        if (cmd == 'A') {
            int next_pos = position + 1;
            if (next_pos < n) {
                if (track[next_pos] == '.') {
                    position = next_pos;
                }
            } else {
                break;
            }
        } else if (cmd == 'P') {
            int next_pos = position + 1;
            if (next_pos < n) {
                if (track[next_pos] == '#') {
                    position = next_pos;
                }
            } else {
                break;
            }
        }
    }
    return position;
}

int main() {
    int n;
    cin >> n;
    string track;
    cin >> track;
    string commands_robot1, commands_robot2;
    cin >> commands_robot1 >> commands_robot2;

    int pos1 = simulateRobot(track, commands_robot1);
    int pos2 = simulateRobot(track, commands_robot2);

    if (pos1 > pos2) {
        cout << 1 << endl;
    } else if (pos2 > pos1) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
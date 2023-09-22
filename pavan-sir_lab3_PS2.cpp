#include <iostream>
using namespace std;

const int t_subs = 3;

void in_score(int numStudents, int scores[][t_subs]) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter scores for Student " << i + 1 << ":" << endl;
        for (int j = 0; j < t_subs; ++j) {
            do {
                cout << "Enter score for Subject " << j + 1 << ": ";
                cin >> scores[i][j];
                if (scores[i][j] < 0 || scores[i][j] > 100) {
                    cout << "Invalid score. Please enter a score between 0 and 100." << endl;
                }
            } while (scores[i][j] < 0 || scores[i][j] > 100);
        }
    }
}

void cal_avg(int numStudents, const int scores[][t_subs], double averages[]) {
    for (int j = 0; j < t_subs; ++j) {
        double total = 0.0;
        for (int i = 0; i < numStudents; ++i) {
            total += scores[i][j];
        }
        averages[j] = total / numStudents;
    }
}

void min_max(int numStudents, const int scores[][t_subs], int min_scores[], int max_scores[]) {
    for (int j = 0; j < t_subs; ++j) {
        int min = scores[0][j];
        int max = scores[0][j];
        for (int i = 1; i < numStudents; ++i) {
            if (scores[i][j] < min) {
                min = scores[i][j];
            }
            if (scores[i][j] > max) {
                max = scores[i][j];
            }
        }
        min_scores[j] = min;
        max_scores[j] = max;
    }
}

int main() {

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    int scores[numStudents][t_subs];
    double averages[t_subs];
    int min_scores[t_subs];
    int max_scores[t_subs];

    in_score(numStudents, scores);
    cal_avg(numStudents, scores, averages);
    min_max(numStudents, scores, min_scores, max_scores);

    for (int j = 0; j < t_subs; ++j) {
        cout << "Subject " << j + 1 << " - Average: " << averages[j]
                  << ", Min: " << min_scores[j] << ", Max: " << max_scores[j] << endl;
    }

    return 0;
}

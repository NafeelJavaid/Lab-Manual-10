#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include<numeric>
using namespace std;
int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    vector<string> names;
    vector<int> grades;
    for (int i = 0; i < numStudents; ++i) {
        string name;
        int grade;
        cout << "Enter name #" << i + 1 << ": ";
        cin >> name;
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> grade;
        names.push_back(name);
        grades.push_back(grade);
    }
    double mean = accumulate(grades.begin(), grades.end(), 0.0) / numStudents;
    cout << "Mean of the grades: " << mean << endl;
    sort(grades.begin(), grades.end());
    double median;
    if (numStudents % 2 == 0) {
        median = (grades[numStudents / 2 - 1] + grades[numStudents / 2]) / 2.0;
    } else {
        median = grades[numStudents / 2];
    }
    cout << "Median of the grades: " << median << endl;
    unordered_map<int, int> frequencyMap;
    int maxFrequency = 0;
    for (int grade : grades) {
        maxFrequency = max(maxFrequency, ++frequencyMap[grade]);
    }
    cout << "Mode of the grades: ";
    for (const auto& entry : frequencyMap) {
        if (entry.second == maxFrequency) {
            cout << entry.first << " ";
        }
    }
    cout << endl;
    cout << "Names of students with the mode as their grade: ";
    for (size_t i = 0; i < grades.size(); ++i) {
        if (grades[i] == frequencyMap.begin()->first) {
            cout << names[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
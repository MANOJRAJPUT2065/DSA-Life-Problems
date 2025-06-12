#include <iostream>
#include <vector>
#include <string>
using namespace std;

string IsTrueLovePossible(vector<int>& advice, int readinessScore, bool isLoloPlaced, bool hasFeelingsFromLolo) {
    int emotionalBalance = 0;
    int inconsistencyPenalty = 0;

    // Calculate emotional balance with weighted advice
    for (int i = 0; i < advice.size(); i++) {
        emotionalBalance += advice[i] * (i + 1);
    }

    // Calculate inconsistency penalty
    for (int i = 1; i < advice.size(); i++) {
        if (advice[i] != advice[i - 1]) {
            inconsistencyPenalty++;
        }
    }

    // Adjust emotional balance
    emotionalBalance -= (inconsistencyPenalty * 2);

    // Check scenarios
    if (emotionalBalance >= 5 && readinessScore >= 80 && hasFeelingsFromLolo) {
        return "TrueLove";
    }

    if (isLoloPlaced && readinessScore < 50 && !hasFeelingsFromLolo) {
        return "CutGya";
    }

    if (emotionalBalance >= 0 && readinessScore >= 60 && !hasFeelingsFromLolo) {
        return "TryAgainLater";
    }

    return "UndefinedLoveState";
}

// Driver Code
int main() {
    vector<int> advice = {1, -1, 0, 1};  // Input advice
    int readinessScore = 75;            // Input readiness score
    bool isLoloPlaced = true;           // Input placement status
    bool hasFeelingsFromLolo = false;   // Input feelings status

    string result = IsTrueLovePossible(advice, readinessScore, isLoloPlaced, hasFeelingsFromLolo);
    cout << "Output: " << result << endl;

    return 0;
}

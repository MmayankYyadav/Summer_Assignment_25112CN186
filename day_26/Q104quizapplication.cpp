#include<bits/stdc++.h>
using namespace std;
// Blueprint for individual quiz questions
class Question {
public:
    string prompt;
   vector<std::string> options;
    char answer; // Stores 'A', 'B', 'C', or 'D'

    Question(string p, vector<string> opts, char ans) {
        prompt = p;
        options = opts;
        answer = ans;
    }
};

class QuizApp {
private:
    vector<Question> questions;
    int score;

public:
    QuizApp(vector<Question> qList) {
        questions = qList;
        score = 0;
    }

    void run() {
        cout << "=== Welcome to the Ultimate C++ Quiz Application ===\n";
        cout << "Please answer by entering the letter of your choice (A, B, C, or D).\n\n";

        for (size_t i = 0; i < questions.size(); ++i) {
            cout << "Question " << (i + 1) << ": " << questions[i].prompt << "\n";
            
            // Print out all multi-choice options
            for (const auto& option : questions[i].options) {
                cout << option << "\n";
            }

            char userAnswer;
            // Input validation loop
            while (true) {
                cout << "Your answer: ";
                cin >> userAnswer;
                userAnswer = toupper(userAnswer); // Normalize to uppercase

                if (userAnswer == 'A' || userAnswer == 'B' || userAnswer == 'C' || userAnswer == 'D') {break;}
                cout << "Invalid choice! Please enter A, B, C, or D.\n";
            }

            // Check if the answer is correct
            if (userAnswer == questions[i].answer) {
                cout << "Correct!\n\n";
                score++;} 
            else {cout << "Incorrect. The right answer was " << questions[i].answer << ".\n\n";}
        }

        displayResults();
    }

private:
    void displayResults() {
        int totalQs = questions.size();
        double percentage = (static_cast<double>(score) / totalQs) * 100.0;

        cout << "=== Quiz Complete ===\n";
        cout << "Final Score: " << score << " out of " << totalQs << " (" << percentage << "%)\n";

        if (percentage == 100.0) {
            cout << "Perfect score! Exceptional job!\n";
        } else if (percentage >= 70.0) {
            cout << "Well done! Great effort!\n";
        } else {
            cout << "Good attempt! Review and try again.\n";
        }
    }
};

int main() {
    // Populate the quiz with sample questions
    vector<Question> quizData = {
        Question(
            "Which of the following is used to print output in C++?",
            {"A) cin", "B) cout", "C) print", "D) system.out"},
            'B'
        ),
        Question(
            "What does the 'break' statement do in a loop?",
            {"A) Pauses the loop", "B) Skips the current iteration", "C) Exits the loop immediately", "D) Restarts the loop"},
            'C'
        ),
        Question(
            "Which data type is used to store a single character in C++?",
            {"A) string", "B) float", "C) int", "D) char"},
            'D'
        )
    };

    QuizApp app(quizData);
    app.run();

    return 0;
}

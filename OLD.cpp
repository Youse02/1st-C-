#include <iostream>
using namespace std;

void Cheerup(int score, int totalQuestions);
void QuestionA(int& score);
void QuestionB(int& score);
void QuestionC(int& score);
void QuestionD(int& score);
void Name(int id);
void Subject(int id);

int main()
{
    cout << "Welcome to the Quiz Program!\n";
    cout << "This program includes questions from Maths, Computer, Biology, and Physics.\n";
    cout << "Answer the multiple-choice questions and see how well you do!\n";

    int id;
    cout << "Enter your ID: ";
    cin >> id;

    Name(id);
    Subject(id);

    return 0;
}

void Name(int id)
{
    string name, password;

    
    while (true)
    {
        cout << "Enter your Name: ";
        cin >> name;
        cout << "Enter your Password: ";
        cin >> password;

        // Check if ID and password are correct
        if (id == 1234 && password == "123")
        {
            break; // Exit the loop if correct
        }
        else
        {
            cout << "Invalid ID or Password. Please try again.\n";
        }
    }
}

void Subject(int id)
{
    int totalScore = 0;

    cout << "Choose your subject:" << endl;
    cout << "1. MATHS" << endl;
    cout << "2. COMPUTER" << endl;
    cout << "3. BIOLOGY" << endl;
    cout << "4. PHYSICS" << endl; 

    int choice;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        QuestionA(totalScore); // Start with a score of 0 for Maths
        break;
    case 2:
        QuestionB(totalScore); // Start with a score of 0 for Computer
        break;
    case 3:
        QuestionC(totalScore); // Start with a score of 0 for Biology
        break;
    case 4:
        QuestionD(totalScore); // Start with a score of 0 for Physics
        break;
    default:
        cout << "Invalid choice. Please choose a number between 1 and 4.\n";
    }

    cout << "Total Score: " << totalScore << " out of 3.\n";
}

void Cheerup(int score, int totalQuestions)
{
    cout << "Your score: " << score << " out of " << totalQuestions << ". ";
    if (score > 0)
    {
        cout << "Great job! You got it right!\n";
    }
    else
    {
        cout << "Don't worry, try again next time!\n";
    }
}

void QuestionA(int& score)
{
    cout << "Maths Question:\n";

    // Question 1
    cout << "1. What is 2 + 2?\n";
    cout << "a) 3\nb) 4\nc) 5\nd) 6\n";
    char answer1;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer1;

    if (answer1 == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 2
    cout << "2. What is the square root of 16?\n";
    cout << "a) 2\nb) 4\nc) 8\nd) 16\n";
    char answer2;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer2;

    if (answer2 == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 3
    cout << "3. If x = 3, what is 2x + 5?\n";
    cout << "a) 8\nb) 11\nc) 13\nd) 16\n";
    char answer3;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer3;

    if (answer3 == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    Cheerup(score, 3); // 3 questions for Maths
}

void QuestionB(int& score)
{
    cout << "Computer Question:\n";

    // Question 1
    cout << "1. What does CPU stand for?\n";
    cout << "a) Central Processing Unit\nb) Computer Personal Unit\nc) Central Processor Unit\nd) Central Personal Unit\n";
    char answer1;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer1;

    if (answer1 == 'a')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 2
    cout << "2. Which programming language is known for its simplicity and readability?\n";
    cout << "a) C++\nb) Java\nc) Python\nd) JavaScript\n";
    char answer2;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer2;

    if (answer2 == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 3
    cout << "3. What is the default file extension for C++ source code files?\n";
    cout << "a) .cpp\nb) .exe\nc) .txt\nd) .h\n";
    char answer3;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer3;

    if (answer3 == 'a')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    Cheerup(score, 3); // 3 questions for Computer
}

void QuestionC(int& score)
{
    cout << "Biology Question:\n";

    // Question 1
    cout << "1. What is the powerhouse of the cell?\n";
    cout << "a) Nucleus\nb) Mitochondria\nc) Chloroplast\nd) Ribosome\n";
    char answer1;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer1;

    if (answer1 == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 2
    cout << "2. Which organ is responsible for filtering blood in the human body?\n";
    cout << "a) Liver\nb) Kidney\nc) Heart\nd) Lungs\n";
    char answer2;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer2;

    if (answer2 == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 3
    cout << "3. What is the function of red blood cells?\n";
    cout << "a) Carry oxygen\nb) Digest food\nc) Fight infection\nd) Produce hormones\n";
    char answer3;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer3;

    if (answer3 == 'a')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    Cheerup(score, 3); // 3 questions for Biology
}

void QuestionD(int& score)
{
    cout << "Physics Question:\n";

    // Question 1
    cout << "1. What is the formula for force (in classical mechanics)?\n";
    cout << "a) E=mc^2\nb) F=ma\nc) P=mv\nd) W=Fd\n";
    char answer1;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer1;

    if (answer1 == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 2
    cout << "2. What is the SI unit of electric charge?\n";
    cout << "a) Ampere\nb) Joule\nc) Coulomb\nd) Volt\n";
    char answer2;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer2;

    if (answer2 == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    // Question 3
    cout << "3. What is the law of conservation of energy?\n";
    cout << "a) Energy cannot be created or destroyed\nb) F=ma\nc) Every action has an equal and opposite reaction\nd) E=mc^2\n";
    char answer3;
    cout << "Enter your answer (a, b, c, or d): ";
    cin >> answer3;

    if (answer3 == 'a')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Incorrect.\n";
    }

    Cheerup(score, 3); // 3 questions for Physics
}


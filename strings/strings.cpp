#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

//tets

using namespace std;

int yourbalance = 0;
int guaranteed1 = 1000;
int guaranteed2 = 32000;
char answer;

void gameGreetings()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
    cout << "Welcome " << name << " to Who Wants to Be a Millionaire!" << endl;
    cout << "Introducing your host Borislav." << endl;
    cout << endl;
    cout << "Now let's start playing the game!" << endl;
    cout << endl;
}

char displayMenu()
{
    char choice;
    cout << "|----------MENU----------|" << endl;
    cout << "|----------1.Play--------|" << endl;
    cout << "|----------2.Rules-------|" << endl;
    cout << "|----------3.Quit--------|" << endl;
    cin >> choice;
    return choice;
}

void q1(string q1, string q1A, string q1B, string q1C, string q1D)
{
    q1 = "1. In which languages is the UEFA Champions League theme song in?";
    q1A = "A. English, French and German";
    q1B = "B. Bulgarian, French and German";
    q1C = "C. Italian, German and Spanish";
    q1D = "D. Irish, English and French";
    cout << q1 << endl;
    cout << q1A << endl;
    cout << q1B << endl;
    cout << q1C << endl;
    cout << q1D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << "The lyrics are a mix of UEFA's three official languages: English, French and German." << endl << endl;
        yourbalance = yourbalance + 100;
        cout << "Congratulations you won " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sad to say but you answered incorrectly and you didnt win anything" << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q2(string q2, string q2A, string q2B, string q2C, string q2D)
{
    q2 = "2. How many municipalities are in Bulgaria ?";
    q2A = "A. 27";
    q2B = "B. 265";
    q2C = "C. 266";
    q2D = "D. 29";
    cout << "Now you have to answer a question for 200£" << endl << endl;
    cout << q2 << endl;
    cout << q2A << endl;
    cout << q2B << endl;
    cout << q2C << endl;
    cout << q2D << endl;
    cin >> answer;
    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!" << endl << endl;
        cout << "The 28 provinces of Bulgaria are divided into 265 municipalities (obshtina). Municipalities typically comprise multiple towns, villages and settlements and are governed by a mayor who is elected by popular majority vote for a four-year term, and a municipal council which is elected using proportional representation for a four-year term." << endl << endl;
        yourbalance = yourbalance + 100;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sad to say but you answered incorrectly and you didnt win anything" << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q3(string q3, string q3A, string q3B, string q3C, string q3D)
{
    q3 = "3. What is the capital city of Barbados ?";
    q3A = "A. Bridgetown";
    q3B = "B. Saint John's";
    q3C = "C. Rome";
    q3D = "D. Nassau";
    cout << "Now you have to answer a question for 300£" << endl << endl;
    cout << q3 << endl;
    cout << q3A << endl;
    cout << q3B << endl;
    cout << q3C << endl;
    cout << q3D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << "Bridgetown is the capital and largest city of Barbados. Formerly The Town of Saint Michael, the Greater Bridgetown area is located within the parish of Saint Michael. Bridgetown is sometimes locally referred to as The City, but the most common reference is simply Town. As of 2014, its metropolitan population stands at roughly 110,000." << endl << endl;
        yourbalance = yourbalance + 100;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sad to say but you answered incorrectly and you didnt win anything" << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q4(string q4, string q4A, string q4B, string q4C, string q4D)
{
    q4 = "4. What is the Pythagorean Theorem solving for leg(a) ?";
    q4A = "A. a=c2+b2";
    q4B = "B. a=b3-c3";
    q4C = "C. a=√c2+b2";
    q4D = "D. a=√c2-b2";
    cout << "Now you have to answer a question for 500£" << endl << endl;
    cout << q4 << endl;
    cout << q4A << endl;
    cout << q4B << endl;
    cout << q4C << endl;
    cout << q4D << endl;
    cin >> answer;
    if (answer == 'D' || answer == 'd')
    {
        cout << "Correct!" << endl << endl;
        cout << "The square root of c to the power of 2 minus b to the power of 2 is the formula for the Pythagorean theorem to solve for leg (a)" << endl << endl;
        yourbalance = yourbalance + 200;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sad to say but you answered incorrectly and you didnt win anything" << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}



void q6(string q6, string q6A, string q6B, string q6C, string q6D)
{
    q6 = "6. Which is the most expensive car?";
    q6A = "A. Bugatti La Voiture Noire";
    q6B = "B. Ferrari 288 GTO";
    q6C = "C. Pagani Huayra";
    q6D = "D. Aston Martin One-77";
    cout << "Now you have to answer a question for 2000£" << endl << endl;
    cout << q6 << endl;
    cout << q6A << endl;
    cout << q6B << endl;
    cout << q6C << endl;
    cout << q6D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << "Bugatti pulled the cover off its bespoke La Voiture Noire at the 2019 Geneva Motor Show and has since built several more specialty vehicles. With a selling price of $18.7 million (and an asking price of $12.5 million), it snubs its nose at other less-expensive one-offs." << endl << endl;
        yourbalance = guaranteed1 * 2;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Unfortunately your answer was wrong and your prize is " << guaranteed1 << "£ " << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q7(string q7, string q7A, string q7B, string q7C, string q7D)
{
    q7 = "7. How old was the oldest man?";
    q7A = "A. 122 years";
    q7B = "B. 101 years";
    q7C = "C. 150 years";
    q7D = "D. 95 years";
    cout << "Now you have to answer a question for 4000£" << endl << endl;
    cout << q7 << endl;
    cout << q7A << endl;
    cout << q7B << endl;
    cout << q7C << endl;
    cout << q7D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << "According to this criterion, the longest human lifespan is that of Jeanne Calment of France (1875–1997), who lived to age 122 years, 164 days. She supposedly met Vincent van Gogh when she was 12 or 13." << endl << endl;
        yourbalance = guaranteed1 * 4;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Unfortunately your answer was wrong and your prize is " << guaranteed1 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }

}

void q8(string q8, string q8A, string q8B, string q8C, string q8D)
{
    q8 = "8. What is the area of ​​Bulgaria";
    q8A = "A. 110 000 km";
    q8B = "B. 100 000 km";
    q8C = "C. 90 000 km";
    q8D = "D. 50 000 km";
    cout << "Now you have to answer a question for 8000£" << endl << endl;
    cout << q8 << endl;
    cout << q8A << endl;
    cout << q8B << endl;
    cout << q8C << endl;
    cout << q8D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << "With a territory of 110,994 square kilometres (42,855 sq mi), Bulgaria is Europe's sixteenth-largest country." << endl << endl;
        yourbalance = guaranteed1 * 8;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Unfortunately your answer was wrong and your prize is " << guaranteed1 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }

}


void q9(string q9, string q9A, string q9B, string q9C, string q9D)
{
    q9 = "9. Which is the largest country?";
    q9A = "A. USA";
    q9B = "B. Russia";
    q9C = "C. UK";
    q9D = "D. China";
    cout << "Now you have to answer a question for 16000£" << endl << endl;
    cout << q9 << endl;
    cout << q9A << endl;
    cout << q9B << endl;
    cout << q9C << endl;
    cout << q9D << endl;
    cin >> answer;
    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!" << endl << endl;
        cout << "The largest country in the world is Russia with a total area of 17,098,242 Km² (6,601,665 mi²) and a land area of 16,376,870 Km² (6,323,142 mi²), equivalent to 11% of the total world's landmass of 148,940,000 Km²" << endl << endl;
        yourbalance = guaranteed1 * 16;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Unfortunately your answer was wrong and your prize is " << guaranteed1 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }

}

void q11(string q11, string q11A, string q11B, string q11C, string q11D)
{
    q11 = "11. Which insect shorted out an early supercomputer and inspired the term computer bug?";
    q11A = "A. Moth";
    q11B = "B. Roach";
    q11C = "C. Fly";
    q11D = "D. Japanese beetle";
    cout << "Now you have to answer a question for 64000£" << endl << endl;
    cout << q11 << endl;
    cout << q11A << endl;
    cout << q11B << endl;
    cout << q11C << endl;
    cout << q11D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << endl;
        cout << "Moth was found inside the computer of scientist Grace Hopper." << endl << endl;
        yourbalance = guaranteed2 * 2;
        cout << endl;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sadly, your answer was wrong but hey you still won " << guaranteed2 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q12(string q12, string q12A, string q12B, string q12C, string q12D)
{
    q12 = "12. In the children’s book series, where is Paddington Bear originally from?";
    q12A = "A. India";
    q12B = "B. Peru";
    q12C = "C. Iceland";
    q12D = "D. Canada";
    cout << "Now you have to answer a question for 125000£" << endl << endl;
    cout << q12 << endl;
    cout << q12A << endl;
    cout << q12B << endl;
    cout << q12C << endl;
    cout << q12D << endl;
    cin >> answer;
    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!" << endl << endl;
        cout << "Paddington was raised by his Aunt Lucy in Peru, after being orphaned due to an earthquake, according to Paddington's website." << endl << endl;
        yourbalance = guaranteed2 * 2 * 2 - 3000;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sadly, your answer was wrong but hey you still won " << guaranteed2 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }

}

void q13(string q13, string q13A, string q13B, string q13C, string q13D)
{
    q13 = "13. According to the Population Reference Bureau, what is the approximate number of people who have ever lived on earth?";
    q13A = "A. 50 billion";
    q13B = "B. 100 billion";
    q13C = "C. 1 trillion";
    q13D = "D. 5 trillion";
    cout << "Now you have to answer a question for 250000£" << endl << endl;
    cout << q13 << endl;
    cout << q13A << endl;
    cout << q13B << endl;
    cout << q13C << endl;
    cout << q13D << endl;
    cin >> answer;
    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!" << endl << endl;
        cout << endl;
        cout << "The total world's population in history was, at the time, estimated to be ... 100 billion." << endl;
        yourbalance = 250000;
        cout << endl;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sadly, your answer was wrong but hey you still won " << guaranteed2 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q14(string q14, string q14A, string q14B, string q14C, string q14D)
{
    q14 = "14. Who is credited with inventing the first mass-produced helicopter?";
    q14A = "A. Ferdinand von Zeppelin";
    q14B = "B. Elmer Sperry";
    q14C = "C. Igor Sikorsky";
    q14D = "D. Gottlieb Daimler";
    cout << "Now you have to answer a question for 500000£" << endl << endl;
    cout << q14 << endl;
    cout << q14A << endl;
    cout << q14B << endl;
    cout << q14C << endl;
    cout << q14D << endl;
    cin >> answer;
    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!" << endl << endl;
        cout << "The first mass-produced helicopter was invented by ... Igor Sikorsky." << endl << endl;
        yourbalance = 500000;
        cout << "You have " << yourbalance << "£ " << endl << endl;
    }
    else
    {
        cout << "Sadly, your answer was wrong but hey you still won " << guaranteed2 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q15(string q15, string q15A, string q15B, string q15C, string q15D)
{
    q15 = "15. What letter must appear on the beginning of the registration number of all non-military aircraft in the US?";
    q15A = "A. N";
    q15B = "B. A";
    q15C = "C. U";
    q15D = "D. L";
    cout << "You're playing for 1000000£ ! Good luck !" << endl << endl;
    cout << q15 << endl;
    cout << q15A << endl;
    cout << q15B << endl;
    cout << q15C << endl;
    cout << q15D << endl;
    cin >> answer;
    if (answer == 'A' || answer == 'a')
    {
        cout << "Correct!" << endl << endl;
        cout << "Congratulations you just became a millionaire !" << endl << endl;
        cout << "The letter ... N must be on all non-military aircrafts in the US." << endl << endl;
        cout << "Thanks for playing!" << endl << endl;

    }
    else
    {
        cout << "You were so close to become a millionaire but sadly, your answer was wrong and you won 32000 " << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl << endl;
        exit(0);
    }
}


void q10(string q10, string q10A, string q10B, string q10C, string q10D)
{
    q10 = "10. What is the size of the moon?";
    q10A = "A. 1 500 km";
    q10B = "B. 1 200 km";
    q10C = "C. 1 700 km";
    q10D = "D. 1 000 km";
    cout << "Now you have to answer a question for 32000£ - second guaranteed prize" << endl << endl;
    cout << q10 << endl;
    cout << q10A << endl;
    cout << q10B << endl;
    cout << q10C << endl;
    cout << q10D << endl;
    cin >> answer;
    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!" << endl << endl;
        cout << "Congratulations you won the second guaranteed prize " << guaranteed2 << "£ " << endl;
        cout << endl;
        cout << "Do you want to continue?";
        string b;
        cin >> b;
        if (b == "yes" or b == "Yes" or b == "YES")
        {
            q11(q10, q10A, q10B, q10C, q10D);
            q12(q10, q10A, q10B, q10C, q10D);
            q13(q10, q10A, q10B, q10C, q10D);
            q14(q10, q10A, q10B, q10C, q10D);
            q15(q10, q10A, q10B, q10C, q10D);
        }
        else
        {
            cout << "Thanks for playing!" << endl;
            exit(0);
        }
    }
    else
    {
        cout << "Unfortunately your answer was wrong and your prize is " << guaranteed1 << "£ " << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void q5(string q5, string q5A, string q5B, string q5C, string q5D)
{
    q5 = "5. What is the most sold book ?";
    q5A = "A. Gulliver's Travels";
    q5B = "B. Frankenstein ";
    q5C = "C. The Bible";
    q5D = "D. Anna Karenina";
    cout << "Now you have to answer a question for 1000£ - first guaranteed prize" << endl << endl;
    cout << q5 << endl;
    cout << q5A << endl;
    cout << q5B << endl;
    cout << q5C << endl;
    cout << q5D << endl;
    cin >> answer;
    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!" << endl << endl;
        cout << "According to Guinness World Records as of 1995, the Bible is the best-selling book of all time, with an estimated 5 billion copies sold and distributed." << endl << endl;
        cout << "Congratulations you won the first guaranteed prize " << guaranteed1 << "£ " << endl << endl;
        cout << "Do you want to continue?";
        string a;
        cin >> a;
        if (a == "yes" or a == "Yes" or a == "YES")
        {
            q6(q5, q5A, q5B, q5C, q5D);
            q7(q5, q5A, q5B, q5C, q5D);
            q8(q5, q5A, q5B, q5C, q5D);
            q9(q5, q5A, q5B, q5C, q5D);
            q10(q5, q5A, q5B, q5C, q5D);
        }
        else
        {
            cout << "Thanks for playing!" << endl;
            exit(0);
        }
    }
    else
    {
        cout << "Sad to say but you answered incorrectly and you didnt win anything" << endl << endl;
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

void choice1(int& choice, string& q15, string& q15A, string& q15B, string& q15C, string& q15D)
{
    string rulesAndInfo = "|------Rules and Info------|";
    string r1 = "1.Answer with Uppercase letters or lowercase letters";
    string r2 = "2.You have 3 Lifelines: Call a friend, 50/50 and skip question";//this is something that we will do in the future.
    string r3{ "3.For question 1 you will win 100£\nFor question 2 you will win 200£\nFor question 3 you will win 300£\nFor question 4 you will win 500£\nFor question 5 you will win 1000£(first guaranteed prize)\nFor question 6 you will win 2000£\nFor question 7 you will win 4000£\nFor question 8 you will win 8000£\nFor question 9 you will win 16000£\nFor question 10 you will win 32000£(second guaranteed prize)\nFor question 11 you will win 64000£\nFor question 12 you will win 125000£\nFor question 13 you will win 250000£\nFor question 14 you will win 500000£\nFor question 15 you will win 1000000£" };
    string r4 = "4.After you answer a question correctly you get the prize that the question gives but if you answer the next question incorrectly you only get the guaranteed prize if you passed one";
    string r5 = "5.No cheating!";

    switch (choice)
    {
    case '1':
        gameGreetings();
        q1(q15, q15A, q15B, q15C, q15D);
        q2(q15, q15A, q15B, q15C, q15D);
        q3(q15, q15A, q15B, q15C, q15D);
        q4(q15, q15A, q15B, q15C, q15D);
        q5(q15, q15A, q15B, q15C, q15D);
        break;
    case '2':
        cout << rulesAndInfo << endl;
        cout << r1 << endl;
        cout << r2 << endl;
        cout << r3 << endl;
        cout << r4 << endl;
        cout << r5 << endl;
        cout << rulesAndInfo << endl << endl;
        break;
    case '3':
        exit(0);
        break;
    }
}

int main()
{
    int ch;
    string q15, q15A, q15B, q15C, q15D;
    do
    {
        ch = displayMenu();
        choice1(ch, q15, q15A, q15B, q15C, q15D);

    } while (1 > 0);
}
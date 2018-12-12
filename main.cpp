#include <iostream>

using namespace std;

int main()
{
    cout << "Hey guys, so this is a game called 'Fuck, Marry or Avoid', now i used to play this in school\n and i recently thought it would be a cool idea to put this into a game\n So i did." << endl;
    cout << "So This is a 2 player game, You are player 1, your friend is player 2." << endl;
    cout << "So you and your friend pick 3 people, you both get 1 turn each to say out of those 3 people who you would fuck, marry and avoid\n keeping in mind you can only fuck, marry and avoid 1 person!" << endl;

    string player1;
    cout << "PLEASE ENTER THE NAME OF PLAYER 1: " << endl;
    cin >> player1;
    cout << "Hi " << player1 << endl;
    string player2;
    cout << "PLEASE ENTER THE NAME OF PLAYER 2: " << endl;
    cin >> player2;
    cout << "Hi " << player2 << endl;

    cout << "I think its time to start the game!!" << endl;
    cout << "Now i will ask you 3 names, these can be people you know, or celebrity's you watch on T.V." << endl;
    string person1;
    cout << "Enter the first name: " << endl;
    cin >> person1;
    string person2;
    cout << "Enter the second name: " << endl;
    cin >> person2;
    string person3;
    cout << "Enter the third name: " << endl;
    cin >> person3;
    cout << "So, " << player1 << ", who will you FUCK, MARRY or AVOID out of " << person1 << ", " << person2 << " or " << person3 << endl;
    cout << player1 << ", WHO WILL YOU FUCK?: " << endl;
    string fuck1;
    cin >> fuck1;
    cout << player1 << ", WHO WILL YOU MARRY?; " << endl;
    string marry1;
    cin >> marry1;
    cout << player1 << ", WHO WILL YOU AVOID?: " << endl;
    string avoid1;
    cin >> avoid1;
    cout << "__________________________" << endl;

    cout << "So, " << player2 << ", who will you FUCK, MARRY or AVOID out of " << person1 << ", " << person2 << " or " << person3 << endl;
    cout << player2 << ", WHO WILL YOU FUCK?: " << endl;
    string fuck2;
    cin >> fuck2;
    cout << player2 << ", WHO WILL YOU MARRY?; " << endl;
    string marry2;
    cin >> marry2;
    cout << player2 << ", WHO WILL YOU AVOID?: " << endl;
    string avoid2;
    cin >> avoid2;
    cout << "__________________________" << endl;
    cout << "The Statistics Where:" << endl;
    cout << player1 << endl;
    cout << player1 << " would fuck " << fuck1 << endl;
    cout << player1 << " would marry " << marry1 << endl;
    cout << player1 << " would avoid " << avoid1 << endl;
    cout << "__________________________" << endl;
    cout << player2 << endl;
    cout << player2 << " would fuck " << fuck2 << endl;
    cout << player2 << " would marry " << marry2 << endl;
    cout << player2 << " would avoid " << avoid2 << endl;
    cout << "__________________________" << endl;
    cout << "This game was made by Shprqness" << endl;
    cout << "Discord - Shprqness#8976" << endl;
    cout << "__________________________" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int totalCookies, cookiesInBox, boxesInContainer;


    cout << "Enter the total number of cookies: ";
    cin >> totalCookies;

    cout << "Enter the number of cookies in a box: ";
    cin >> cookiesInBox;

    cout << "Enter the number of cookie boxes in a container: ";
    cin >> boxesInContainer;

//I used chat GPT to help we with the formulas to be used in this program. Only the formulas and the strategy was asked by the AI tool.
    int totalBoxes = totalCookies / cookiesInBox;
    int totalContainers = totalBoxes / boxesInContainer;


    int leftoverCookies = totalCookies % cookiesInBox;
    int leftoverBoxes = totalBoxes % boxesInContainer;


    cout << "\nNumber of boxes needed: " << totalBoxes << endl;
    cout << "Number of containers needed: " << totalContainers << endl;

    if (leftoverCookies > 0) {
        cout << "Leftover cookies: " << leftoverCookies << endl;
    }

    if (leftoverBoxes > 0) {
        cout << "Leftover boxes: " << leftoverBoxes << endl;
    }

    return 0;
}


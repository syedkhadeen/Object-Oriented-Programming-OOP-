/*
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;

class tortoise {
  public:
    int square;

    tortoise();
    bool victor();
    void win();
    void fastPlod();
    void slip();
    void slowPlod();
} turtle;

tortoise::tortoise() {
  square = 1;
}

bool tortoise::victor() {
  bool victory;

  if ( square < 70 )
    victory = false;
  else
    victory = true;

  return victory;
}

void tortoise::win() {
  cout << "TORTOISE WINS!!!" << endl;
}

void tortoise::fastPlod() {
  square += 3;
  if ( square > 70 )
    square = 70;
}

void tortoise::slip() {
  square -= 6;
  if ( square < 1 )
    square = 1;
}

void tortoise::slowPlod() {
  square += 1;
}

class hare {
  public:
    int square;

    hare();
    // The sleep function is absent here because it does nothing, and is
    // therfore handled in tick() instead.
    bool victor();
    void win();
    void bigHop();
    void bigSlip();
    void smallHop();
    void smallSlip();
} rabbit;

hare::hare() {
  square = 1;
}

bool hare::victor() {
  bool victory;

  // Constructs like this will be found in any functions related to movement.
  // They are necessary for proper output.
  if ( square < 70 )
    victory = false;
  else
    victory = true;

  return victory;
}

void hare::win() {
  cout << "HARE WINS?" << endl;
}

void hare::bigHop() {
  square += 9;
  if ( square > 70 )
    square = 70;
}

void hare::bigSlip() {
  square -= 12;
  if ( square < 1 )
    square = 1;
}

void hare::smallHop() {
  square += 1;
}

void hare::smallSlip() {
  square -= 2;
  if ( square < 1 )
    square = 1;
}

void tick();
void displayOutput();

int main()
{
  cout << "BANG !!!" << endl
       << "AND THEY'RE OFF !!!!!" << endl;

  while ( !( turtle.victor() || rabbit.victor() ) ) {
    // This line tells the thread to pause for 1 second.
    this_thread::sleep_for ( chrono::seconds(1) );
    tick();
  }

  if ( turtle.victor() && rabbit.victor() )
    cout << "TIE";
  else if ( turtle.victor() )
    turtle.win();
  else
    rabbit.win();

  return 0;
}

void tick() {
  srand ( time(0) );

  int random = rand() % 11;

  if ( random < 5 )
    turtle.fastPlod();
  else if ( random < 7 )
    turtle.slip();
  else
    turtle.slowPlod();

  // A sleep action is also absent here, since it would just be empty
  if ( ( random >= 2 ) && ( random < 4 ) )
    rabbit.bigHop();
  else if ( random < 5 )
    rabbit.bigSlip();
  else if ( random < 8 )
    rabbit.smallHop();
  else if ( random < 10 )
    rabbit.smallSlip();

  displayOutput();
}

void displayOutput() {
  cout << endl;

  if ( turtle.square < rabbit.square ) {
    for ( int i = 1; i < turtle.square; i++ )
      cout << '=';
    cout << 'T';

    for ( int i = 1; i < ( rabbit.square - turtle.square ); i++ )
      cout << '=';

    cout << 'H';

    for ( int i = 1; i < ( 70 - rabbit.square ); i++ )
      cout << '=';

    cout << endl;
  }
  else if ( rabbit.square < turtle.square ) {
    for ( int i = 1; i < rabbit.square; i++ )
      cout << '=';
    cout << 'H';

    for ( int i = 1; i < ( turtle.square - rabbit.square ); i++ )
      cout << '=';

    cout << 'T';

    for ( int i = 1; i < ( 70 - turtle.square ); i++ )
      cout << '=';

    cout << endl;
  }
  else {
    for ( int i = 1; i < rabbit.square; i++ )
      cout << '=';
    cout << 'B';

    for ( int i = 1; i < ( 70 - rabbit.square ); i++ )
      cout << '=';

    cout << endl << "OUCH !!!" << endl;
  }

  cout << "T = Tortoise" << endl
       << "H = Hare"     << endl
       << "B = Both"     << endl;
}
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
int moveTortoise();
int moveHare();

int main() {
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    // Initialize positions
    int tortoisePosition = 1;
    int harePosition = 1;

    cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!\n\n";

    // Simulation loop
    while (tortoisePosition < 70 && harePosition < 70) {
        // Move the tortoise
        tortoisePosition += moveTortoise();

        // Move the hare
        harePosition += moveHare();

        // Ensure positions are within bounds
        if (tortoisePosition < 1) {
            tortoisePosition = 1;
        }
        if (harePosition < 1) {
            harePosition = 1;
        }

        // Display current positions
        for (int i = 1; i <= 70; ++i) {
            if (i == tortoisePosition && i == harePosition) {
                cout << "OUCH!!!";
            } else if (i == tortoisePosition) {
                cout << "T";
            } else if (i == harePosition) {
                cout << "H";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Determine the winner
    if (tortoisePosition >= 70 && harePosition >= 70) {
        cout << "It's a tie!\n";
    } else if (tortoisePosition >= 70) {
        cout << "TORTOISE WINS!!! YAY!!!\n";
    } else {
        cout << "Hare wins. Yuch.\n";
    }

    return 0;
}

// Function to move the tortoise
int moveTortoise() {
    int move = rand() % 10 + 1; // Generate a random number between 1 and 10

    if (move <= 5) {
        return 3;  // Fast plod (50%)
    } else if (move <= 7) {
        return -6; // Slip (20%)
    } else {
        return 1;  // Slow plod (30%)
    }
}

// Function to move the hare
int moveHare() {
    int move = rand() % 10 + 1; // Generate a random number between 1 and 10

    if (move <= 2) {
        return 0;  // Sleep (20%)
    } else if (move <= 4) {
        return 9;  // Big hop (20%)
    } else if (move == 5) {
        return -12; // Big slip (10%)
    } else if (move <= 8) {
        return 1;  // Small hop (30%)
    } else {
        return -2; // Small slip (20%)
    }
}
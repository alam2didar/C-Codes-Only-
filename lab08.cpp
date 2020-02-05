// Program:  Wheel of Fortune
//
// This program simulates a very simple, single-word version
// of the Wheel of Fortune program seen on television.  The
// player guesses successive letters in an attempt to, as soon
// as possible, guess the hidden puzzle word.
 
#include <iostream>
#include <string>
using namespace std;
 
// A description of each of the functions you are to write is
// contained in that function's definition found following the end
// of the main program.
 
void setUpTheBoard(string &displayBoard, string puzzleAnswer);
void setUpUsedLetterBoard(string &usedLetterBoard);
string getThePuzzleWord();
char getLetterGuessFromPlayer();
string getWordGuessFromPlayer();
void turnMatchingLetters(string puzzleAnswer, string &displayBoard, char letter);
void updateUsedLetterBoard(string &ULB, char letter);
void printBoard(string displayBoard);
char upperCaseLetter(char letter);
string upperCaseWord(string wordIn);
 
int main()
{ 
  string puzzleWord, board, letterBoard;
 
  // Get the puzzle solution from Pat Sajak 
  puzzleWord = getThePuzzleWord();
 
  // Initialize the letter blocks which Vanna turns with all _'s
  setUpTheBoard(board, puzzleWord);
 
  // Initialize the used letter board with the letters A...Z
  // As a letter is guessed it will be *'ed out
  setUpUsedLetterBoard(letterBoard);
 
  bool gameWon=false;
 
  // Play the game until it is won (i.e until gameWon==true)
  while (!gameWon) {
   
    char letterGuess;
   
    // Get the first letter guess from the player 
    letterGuess = getLetterGuessFromPlayer();
   
    // Update the board by inserting matching letters where they belong
    // puzzleWord holds the solution/answer.  Board holds/shows the
    // correct letters the player has guessed.  letterGuess is the
    // letter which the player has just guessed and you are comparing
    // against the solution in puzzleWord to determine which (if any)
    // letters to turn over in board.
    turnMatchingLetters(puzzleWord, board, letterGuess);
   
    // Mark off with an * the letter which is guessed (on the used letter board)
    updateUsedLetterBoard(letterBoard, letterGuess);
   
    // Print out the used letter board so the player can see which letters have
    // already been chosen before.
    printBoard(letterBoard);
    cout << endl;
   
    // Print out the board of correctly guessed letters
    // which Vanna has turned over so far
    printBoard(board);
    cout << endl << endl;
   
    string puzzleGuess;
    char yOrN;
   
    // Ask if the player wants to guess the puzzle
    cout << "Do you want to guess the puzzle? (Y/N)";
    cin >> yOrN;
    yOrN = upperCaseLetter(yOrN);
   
    // Get the guess from the player if they want to guess the puzzle
    if (yOrN == 'Y') {
      puzzleGuess = getWordGuessFromPlayer();
      // Tell the player when their guess was incorrect.
      if (puzzleGuess != puzzleWord)
	cout << "Incorrect.  Keep trying. " << endl;
    }
   
    // Set the 'flag' (gameWon) to true to stop the game if the player
    // guessed the puzzle correctly or just guessed the last letter correctly.
    if ((board == puzzleWord) || (puzzleGuess == puzzleWord))
      gameWon = true;
  }
 
  // Congratulate the player on win.
  cout << "Congratulations.  You guessed the word." << endl;
 
  return 0;
} // end main
 
 
// You are provided the following function setUpTheBoard
 
// *****************************************************************
void setUpTheBoard(string &displayBoard, string puzzleAnswer)
{ // This function puts an '_' (underscore
  // character) in all positions of the display board. 
  // (Like the blank letters shown before Vanna
  // turns them around.)  
  for (int i = 0; i<puzzleAnswer.length(); i++)
    displayBoard = displayBoard + "_";
}
// *****************************************************************
 
 
 
 
// *****************************************************************
void setUpUsedLetterBoard(string &usedLetterBoard)
{ // Complete this function so that the string usedLetterBoard
  // contains "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
       
  
  usedLetterBoard = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
 
  // This is a simple function, all it does is alter usedLetterBoard
  // such that usedLetterBoard contains the above strin g
 
 
}
// *****************************************************************
 
// *****************************************************************
string getThePuzzleWord()
{  // Complete the code for this function so that it asks
   // Pat Sajak to enter the hidden puzzle word at the keyboard.
   // It then takes that word that he types in and stores
   // it in the string called puzzleAnswer.  Finally it passes
   // the string puzzleAnswer to the function upperCaseWord by invoking
   // upperCaseWord() with puzzleAnswer as an argument so that puzzleAnswer
   // is capitalized and the uppercase version of puzzleAnswer is returned.
 
  string puzzleAnswer;
  cout << "Enter the hidden puzzle word: ";
  cin >> puzzleAnswer;
  
  return upperCaseWord(puzzleAnswer);
}
// *****************************************************************
 
// *****************************************************************
char getLetterGuessFromPlayer()
{
  char guess;
  // Keep looping until you get A-Z or a-z
  do {
    cout << "Guess a letter please ";
    cin >> guess;
    cout << endl;
   
  } while ((guess<65) || (guess>122) || ((guess>90) && (guess<97)));
  return upperCaseLetter(guess);
}
// ****************************************************************
 
// ****************************************************************
string getWordGuessFromPlayer()
{  // This function is incomplete.  It asks the player to guess
   // the hidden puzzle word.  
   // Add the statements which actually pass
   // the string value contained in puzzleGuess to the function
   // upperCaseWord and then return that value to the main
   // program. 
 
  string puzzleGuess;
 
  cout << "Enter your guess ";
  cin >> puzzleGuess;
  cout << endl;

  return upperCaseWord(puzzleGuess);
   
 
}
// ****************************************************************
 
// ****************************************************************
void turnMatchingLetters(string puzzleAnswer, string &displayBoard, char letter)
{ 
  // Complete this function so that it replaces the '_' in the
  // displayBoard with the correct letter if Letter is found in
  // the solution which is held in puzzleAnswer.
 
  // Ex:  letter:  'W'
  //      puzzleAnswer: W H I R L W I N D
  //      displayBoard: W _ _ _ _ W _ _ _
 
  // The two W's are matched and inserted where they go in the
  // displayBoard.
 
  for (int j=0;j<puzzleAnswer.length();j++)
  {    
    if (letter == puzzleAnswer[j])
      displayBoard[j]=letter;
  }  
}
// ****************************************************************
 
// ****************************************************************
void updateUsedLetterBoard(string &usedLetterBoard, char Letter)
{  
  // Complete this function so that it finds the letter that the
  // player guessed and replaces it with an '*'  usedLetterBoard
  // which shows the letters of the alphabet which have already
  // been guessed before.
 
  for (int l=0;l<usedLetterBoard.length();l++)
  {    
    if (Letter == usedLetterBoard[l])
      usedLetterBoard[l]='*';
  }
 
}
// ****************************************************************
 
// ****************************************************************
void printBoard(string displayBoard)
{  
  // Complete this function so that it prints out each letter of
  // displayBoard followed by a space so that it is easier for
  // the player to tell the distinct letter positions
  // on the board.
 
  for (int k=0; k<displayBoard.length();k++)
    cout << displayBoard[k]  << " ";
 
}
// ****************************************************************
 
// ****************************************************************
char upperCaseLetter(char letter )
{ // This function uses the values of ASCII characters to capitalize
  // lowercase letters and return their uppercase equivalent.
 
  if ((letter >= 'a') && (letter<='z'))
    letter = letter - 32;  // converts a lowercase letter to uppercase
 
  return letter;
}
// ****************************************************************
 
// ****************************************************************
string upperCaseWord(string wordIn)
{ // Complete this function so that it repeatedly calls the
  // upperCaseLetter function just above and capitalizes each letter
  // in Word and returns wordIn in all caps.
 
  for (int i= 0; i<wordIn.length();i++)
    wordIn[i]=upperCaseLetter(wordIn[i]);


  return wordIn;
}
// ****************************************************************
 

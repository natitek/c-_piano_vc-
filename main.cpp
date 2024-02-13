// MIDI /Piano Using Keyboard by Natnael Teklu

// header files used
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
#include <filesystem>

// link wmmlibrary to our program
#pragma comment(lib, "winmm.lib")

using namespace std;
namespace fs = std::filesystem;

// Variables used throughout our the program

bool playing = true;
bool recording = false;
bool playback = false;
bool playbackfile = false;
char ch;
int i = 0;
const int tempo = 0;
int *k = tempo;

vector<char> keys;
vector<char> keysfromfile;
vector<char> pathprefix = {'s', 'a', 'v', 'e', 's', '/'};
vector<char> pathsuffix = {'.', 't', 'x', 't', '\0'};

void keyboardui()
{
  cout
      << "_____________________________________________________________________________________________________________________" << '\n'
      << "| |  ||  |  | |  ||  ||  |  | |  ||  |  | |  ||  ||  |  | |  | |  | | |  ||  ||  |  | |  ||  |  | |  ||  ||  |  |   |" << '\n'
      << "| |  ||  |  | |  ||  ||  |  | |  ||  |  | |  ||  ||  |  | |  | |  | | |  ||  ||  |  | |  ||  |  | |  ||  ||  |  |   |" << '\n'
      << "| |  ||  |  | |  ||  ||  |  | |  ||  |  | |  ||  ||  |  | |  | |  | | |  ||  ||  |  | |  ||  |  | |  ||  ||  |  |   |" << '\n'
      << "| | @|| B|  | | E|| G|| I|  | | L|| N|  | | Q|| S|| U|  | | X| | Z| | | ]|| _|| a|  | | d|| f|  | | i|| m|| l|  |   |" << '\n'
      << "| |__||__|  | |__||__||__|  | |__||__|  | |__||__||__|  | |__| |__| | |__||__||__|  | |__||__|  | |__||__||__|  |   |" << '\n'
      << "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |" << '\n'
      << "| ? | A | C | D | F | H | J | K | M | O | P | R | T | V | W | Y | [ | \\ | ^ | ` | b | c | e | g | h | j | k | m |  n|" << '\n'
      << "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |" << '\n'
      << "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|" << '\n';
}

int main()
{

  // main menu
  cout
      << " __  __ _____ _____ _____ " << '\n'
      << "|  \\/  |_   _|  __ \\_   _|" << '\n'
      << "| \\  / | | | | |  | || | " << '\n'
      << "| |\\/| | | | | |  | || | " << '\n'
      << "| |  | |_| |_| |__| || |_ " << '\n'
      << "|_|  |_|_____|_____/_____|" << '\n'
      << '\n'
      << "      By Natnael Teklu  " << '\n'
      << '\n'
      << '\n';

  // Menu / Guide

  cout << "---- Press assigned keys to start playing ----" << '\n'
       << "* to start recording" << '\n'
       << "- (minus) to stop recording" << '\n'
       << "= to playback recorded" << '\n'
       << "& to load recording from file" << '\n'
       << "$ to play loaded recording from file" << '\n'
       << "! to exit the program" << '\n';
  // show the UI of the keyboard
  Sleep(2000);
  keyboardui();

  bool playing = true;
  while (playing == true)
  {

    // Get what keys are pressed in char data type
    char ch = getch();

    // Assign keyboard keys to their dedicated sound files(.wav)
  jump:
    switch (ch)
    {
    case '?':
      PlaySound(TEXT("src/31.wav"), NULL, SND_ASYNC);
      break;
    case '@':
      PlaySound(TEXT("src/32.wav"), NULL, SND_ASYNC);
      break;
    case 'A':
      PlaySound(TEXT("src/33.wav"), NULL, SND_ASYNC);
      break;
    case 'B':
      PlaySound(TEXT("src/34.wav"), NULL, SND_ASYNC);
      break;
    case 'C':
      PlaySound(TEXT("src/35.wav"), NULL, SND_ASYNC);
      break;
    case 'D':
      PlaySound(TEXT("src/36.wav"), NULL, SND_ASYNC);
      break;
    case 'E':
      PlaySound(TEXT("src/37.wav"), NULL, SND_ASYNC);
      break;
    case 'F':
      PlaySound(TEXT("src/38.wav"), NULL, SND_ASYNC);
      break;
    case 'G':
      PlaySound(TEXT("src/39.wav"), NULL, SND_ASYNC);
      break;
    case 'H':
      PlaySound(TEXT("src/40.wav"), NULL, SND_ASYNC);
      break;
    case 'I':
      PlaySound(TEXT("src/41.wav"), NULL, SND_ASYNC);
      break;
    case 'J':
      PlaySound(TEXT("src/42.wav"), NULL, SND_ASYNC);
      break;
    case 'K':
      PlaySound(TEXT("src/43.wav"), NULL, SND_ASYNC);
      break;
    case 'L':
      PlaySound(TEXT("src/44.wav"), NULL, SND_ASYNC);
      break;
    case 'M':
      PlaySound(TEXT("src/45.wav"), NULL, SND_ASYNC);
      break;
    case 'N':
      PlaySound(TEXT("src/46.wav"), NULL, SND_ASYNC);
      break;
    case 'O':
      PlaySound(TEXT("src/47.wav"), NULL, SND_ASYNC);
      break;
    case 'P':
      PlaySound(TEXT("src/48.wav"), NULL, SND_ASYNC);
      break;
    case 'Q':
      PlaySound(TEXT("src/49.wav"), NULL, SND_ASYNC);
      break;
    case 'R':
      PlaySound(TEXT("src/50.wav"), NULL, SND_ASYNC);
      break;
    case 'S':
      PlaySound(TEXT("src/51.wav"), NULL, SND_ASYNC);
      break;
    case 'T':
      PlaySound(TEXT("src/52.wav"), NULL, SND_ASYNC);
      break;
    case 'U':
      PlaySound(TEXT("src/53.wav"), NULL, SND_ASYNC);
      break;
    case 'V':
      PlaySound(TEXT("src/54.wav"), NULL, SND_ASYNC);
      break;
    case 'W':
      PlaySound(TEXT("src/55.wav"), NULL, SND_ASYNC);
      break;
    case 'X':
      PlaySound(TEXT("src/56.wav"), NULL, SND_ASYNC);
      break;
    case 'Y':
      PlaySound(TEXT("src/57.wav"), NULL, SND_ASYNC);
      break;
    case 'Z':
      PlaySound(TEXT("src/58.wav"), NULL, SND_ASYNC);
      break;
    case '[':
      PlaySound(TEXT("src/59.wav"), NULL, SND_ASYNC);
      break;
    case '\\':
      PlaySound(TEXT("src/60.wav"), NULL, SND_ASYNC);
      break;
    case ']':
      PlaySound(TEXT("src/61.wav"), NULL, SND_ASYNC);
      break;
    case '^':
      PlaySound(TEXT("src/62.wav"), NULL, SND_ASYNC);
      break;
    case '_':
      PlaySound(TEXT("src/63.wav"), NULL, SND_ASYNC);
      break;
    case '`':
      PlaySound(TEXT("src/64.wav"), NULL, SND_ASYNC);
      break;
    case 'a':
      PlaySound(TEXT("src/65.wav"), NULL, SND_ASYNC);
      break;
    case 'b':
      PlaySound(TEXT("src/66.wav"), NULL, SND_ASYNC);
      break;
    case 'c':
      PlaySound(TEXT("src/67.wav"), NULL, SND_ASYNC);
      break;
    case 'd':
      PlaySound(TEXT("src/68.wav"), NULL, SND_ASYNC);
      break;
    case 'e':
      PlaySound(TEXT("src/69.wav"), NULL, SND_ASYNC);
      break;
    case 'f':
      PlaySound(TEXT("src/70.wav"), NULL, SND_ASYNC);
      break;
    case 'g':
      PlaySound(TEXT("src/71.wav"), NULL, SND_ASYNC);
      break;
    case 'h':
      PlaySound(TEXT("src/72.wav"), NULL, SND_ASYNC);
      break;
    case 'i':
      PlaySound(TEXT("src/73.wav"), NULL, SND_ASYNC);
      break;
    case 'j':
      PlaySound(TEXT("src/74.wav"), NULL, SND_ASYNC);
      break;
    case 'k':
      PlaySound(TEXT("src/75.wav"), NULL, SND_ASYNC);
      break;
    case 'l':
      PlaySound(TEXT("src/76.wav"), NULL, SND_ASYNC);
      break;
    case 'm':
      PlaySound(TEXT("src/77.wav"), NULL, SND_ASYNC);
      break;
    case 'n':
      PlaySound(TEXT("src/78.wav"), NULL, SND_ASYNC);
      break;
    case 'o':
      PlaySound(TEXT("src/79.wav"), NULL, SND_ASYNC);
      break;
    case '*':
      cout << "";
      break;
    case '-':
      cout << "";
      break;
    case '=':
      cout << "";
      break;
    case '$':
      cout << "";
      break;
    case '&':
      cout << "";
      break;
    default:
      cout << "Press assigned key";
      Sleep(500);
      cout << "\33[2K"
           << "\r";

      break;
    }

    // when playing recorded go inside the loop after each play

    if (playback == true)
    {
      playback = false;
      goto repeat;
    }
    // when playing back from file go inside the loop after each play

    if (playbackfile == true)
    {
      playbackfile = false;
      goto repeatfile;
    }

    // Hightlight what key the user is pressing on the console

    int positionofchar = int(ch) - 63;
    if (positionofchar >= 0 && positionofchar <= 25)
    {
      cout << setw(positionofchar * 2 + 3) << '*' << " ";
      Sleep(100);
      cout << "\33[2K"; // vt100 ESCAPE codes (cursor clear line)
      cout << "\r";     // move cursor to start of line
    }
    else if (positionofchar >= 26 && positionofchar <= 49)
    {
      cout << setw(positionofchar * 2 + 15) << '*' << " ";
      Sleep(100);
      cout << "\33[2K"; // vt100 ESCAPE codes (cursor clear line)
      cout << "\r";     // move cursor to start of line
    }

    // Toggle recording using a reserved char(*) and (-)

    if (ch == '*')
    {
      recording = true;
      cout << "recording started";
      Sleep(1000);
      cout << "\33[2K"; // vt100 ESCAPE codes (cursor clear line)
      cout << "\r";     // move cursor to start of line
    }
    else if (recording == true && ch == '-')
    {
      recording = false;
      cout << "Recording stopped ";
      cout << "Enter File name: ";
      string userfilename;
      getline(cin, userfilename);
      cout << "saved";

      char filen[40];

      // convert userfilename string to vector
      vector<char> userpath(userfilename.begin(), userfilename.end());

      vector<char> fullpath;
      // fullpath.reserve(pathprefix.size() + userpath.size() + pathsuffix.size());
      fullpath.insert(fullpath.end(), pathprefix.begin(), pathprefix.end());
      fullpath.insert(fullpath.end(), userpath.begin(), userpath.end());
      fullpath.insert(fullpath.end(), pathsuffix.begin(), pathsuffix.end());

      // Convert the fullpath to c-style string
      for (int i = 0; i < fullpath.size(); i++)
      {
        filen[i] = fullpath[i];
      }

      const char *path = filen;
      string contentoffile(keys.begin(), keys.end());
      ofstream file(path);
      file << contentoffile;
      file.close();

      Sleep(1000);
      cout << "\33[2K"; // vt100 ESCAPE codes (cursor clear line)
      cout << "\r";     // move cursor to start of line
    }

    // store pressed keys when bool recording is on

    if (positionofchar >= 0 && positionofchar <= 49 && recording == true)
    {
      keys.push_back(ch);
    }

    // playback recorded
    if (ch == '=')
    {
      if(keys.size() == 0){
        cout << "No recording found, press * to record";
      }
    else{
      // cout << "choose playing speed(1-10)";
      cout << "playing";
      playback = true;
    repeat:
      while (playing == true)
      {
        ch = keys[i];
        Sleep(600);
        playback = true;
        // when done playing tell the user
        // cout << keys.size() << '\n';
        if (i >= keys.size())
        {
          cout << "Finished playing, press * to record again";
          Sleep(1000);
          playback = false;
          cout << "\33[2K"; // vt100 ESCAPE codes (cursor clear line)
          cout << "\r";     // move cursor to start of line
        }
        i++;

        goto jump;
      }
      }
    }

    // Load from txt file from saves folder
    if (ch == '&')
    {

      char fileload[40];
      cout << "enter file name to load: ";
      string loadfilename;
      getline(cin, loadfilename);
      vector<char> loadfilenamevec(loadfilename.begin(), loadfilename.end());
      vector<char> fullpathload;

      fullpathload.insert(fullpathload.end(), pathprefix.begin(), pathprefix.end());
      fullpathload.insert(fullpathload.end(), loadfilenamevec.begin(), loadfilenamevec.end());
      fullpathload.insert(fullpathload.end(), pathsuffix.begin(), pathsuffix.end());

      // convert the vector with saves/filename.txt format to a c - style string
      for (int i = 0; i < fullpathload.size(); i++)
      {
        fileload[i] = fullpathload[i];
      }
      const char *loadpath = fileload;
      string tempload;
      ifstream file(loadpath);
      file >> tempload;
      keysfromfile.clear();
      for(char n : tempload){
        keysfromfile.push_back(n);
        // cout << n;
      }
      // vector <char> keysfromfile(tempload.begin(), tempload.end());
      cout << "loaded successfully! press $ to play";

      // for(char n : keysfromfile){
      //   cout << n << '\t';
      // }
    }

    // playback from file
    if (ch == '$')
    {
      if(keysfromfile.size() == 0){
        cout << "No files were loaded, press & to load file from saved folder";
      }
      else{
      int j = 0;
      playbackfile = true;
      repeatfile:
      while (playing == true)
      {
        ch = keysfromfile[j];
        Sleep(600);
        playbackfile = true;
        // when done playing tell the user
        //cout << keysfromfile.size() << '\n';
        if (j >= keysfromfile.size())
        {
          cout << "Finished playing, press & to load another file";
          Sleep(2000);
          playbackfile = false;
          cout << "\33[2K"; // vt100 ESCAPE codes (cursor clear line)
          cout << "\r";     // move cursor to start of line
        }
        j++;

        goto jump;
      }
      }
    }

    //  // Exit Program when ! is pressed
    if (ch == '!')
    {
      cout << "closing";
      return 0;
    }
  }
}

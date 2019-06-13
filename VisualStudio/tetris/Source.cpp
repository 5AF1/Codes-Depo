#include<iostream>
#include<Windows.h>

using namespace std;

int nScreenWidth = 80;
int nScreenHeight = 30;

wstring tetromino[7];
int nFieldWight = 12;
int nFieldHeight = 18;
unsigned char* pField = nullptr;

int rotate(int px, int py, int r) {
	switch (r % 4)
	{
	case 0: return py * 4 + px;			//0
	case 1: return 12 + py - (px * 4);	//90
	case 2: return 15 - (py * 4) - px;	//180
	case 3: return 3 - py + (px * 4);	//270
	//returns linear position
	}
}

int main() {
	//assets
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");
	tetromino[0].append(L"..X.");

	tetromino[1].append(L"....");
	tetromino[1].append(L"..X.");
	tetromino[1].append(L".XX.");
	tetromino[1].append(L"..X.");

	tetromino[2].append(L"....");
	tetromino[2].append(L".XX.");
	tetromino[2].append(L".XX.");
	tetromino[2].append(L"....");

	tetromino[3].append(L"....");
	tetromino[3].append(L".XX.");
	tetromino[3].append(L".X..");
	tetromino[3].append(L".X..");

	tetromino[4].append(L"....");
	tetromino[4].append(L".XX.");
	tetromino[4].append(L"..X.");
	tetromino[4].append(L"..X.");

	tetromino[5].append(L"..X.");
	tetromino[5].append(L".XX.");
	tetromino[5].append(L".X..");
	tetromino[5].append(L"....");

	tetromino[6].append(L".X..");
	tetromino[6].append(L".XX.");
	tetromino[6].append(L"..X.");
	tetromino[6].append(L"....");

	pField = new unsigned char[nFieldHeight * nFieldWight];
	for (int x = 0; x < nFieldWight; x++)
		for (int y = 0; y < nFieldHeight; y++)
			pField[y * nFieldWight + x] = (x == 0 || x == nFieldWight - 1 || y == nFieldHeight - 1) ? 9 : 0;	//9 is border


	// Create Screen Buffer
	wchar_t *screen = new wchar_t[nScreenWidth * nScreenHeight];
	for (int i = 0; i < nScreenWidth * nScreenHeight; i++) screen[i] = L' ';
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;
	bool bGameOver = false;
	while (!bGameOver)
	{
		// Draw Field
		for (int x = 0; x < nFieldWight; x++)
			for (int y = 0; y < nFieldHeight; y++)
				screen[(y ) * nScreenWidth + (x )] = L"*ABCDEFG=#"[pField[y * nFieldWight + x]];


		// Display Frame
		WriteConsoleOutputCharacter(hConsole, (LPCTSTR)screen, nScreenWidth * nScreenHeight, { 0,0 }, &dwBytesWritten);
	}
	
	return 0;
}
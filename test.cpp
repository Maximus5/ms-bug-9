#include <stdio.h>
#include <Windows.h>

void main()
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hOut, 0x18);
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	SetConsoleMode(hOut, 0x03);

	DWORD n;

	// Just write 10 characters
	WriteConsoleW(hOut, L"0123456789", 10, &n, nullptr);
	// the '9' is expected to be erased, the cursor set *after* '8'
	WriteConsoleW(hOut, L"\b \b", 3, &n, nullptr);
	// Wait for Enter
	wchar_t line[80]; ReadConsole(hIn, line, 80, &n, nullptr);
}

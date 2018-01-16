# CheatToWin WIP ( Work In Progress )
A game only for hackers !!


![cheat](https://github.com/hackertron/CheatToWin/blob/dev/cheat.gif?raw=true)


Find your way arount the game logic , hack your way to complete the levels and learn Memory hacking in process.

## Level 1 ( Reading / Writing to Memory) 

![level1](https://raw.githubusercontent.com/hackertron/CheatToWin/dev/level1.PNG)

### Attack 1 
``` C++

#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int newValue = 20;
	HWND hwnd = FindWindowA(NULL, "CheatToWin "); // notice the space
	if (hwnd == nullptr)
	{
		cout << "error cannot find window \n";
	}
	else
	{
		cout << "found window \n";
		DWORD procID;
		GetWindowThreadProcessId(hwnd, &procID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
		if (procID == NULL)
		{
			cout << "cannot obtain proc id \n";

		}
		else
		{
			int readtest;
			// Find and add your address here 
			if(ReadProcessMemory(handle, (PBYTE*)0x1CD3CE99884, &readtest, sizeof(int), 0))
			{
				cout << readtest<<endl;
				if (WriteProcessMemory(handle, (LPVOID)0x1CD3CE99884, &newValue, sizeof(newValue), 0))				
					{
						cout << "write successfulle \n";
					}
				else
					{
						cout << "Unable to write \n";
					}
			}
		}
	}
	system("pause");
	return 0;
}

```
## Level 2 ( Unknown values )

![level2](https://raw.githubusercontent.com/hackertron/CheatToWin/dev/level2.PNG)

## Level 3 	( MultiLevel Pointer )



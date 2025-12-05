#include <iostream>
#include <cstring> 
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS 


using namespace std;
void replaceFirstOccurrence(char S[], const char S1[], const char S2[]) {
	char* found = strstr(S, S1); 
	if (found) {
		int pos = found - S; 
		char result[256]; 
		strncpy(result, S, pos);
		result[pos] = '\0'; 
		strcat(result, S2);
		strcat(result, S + pos + strlen(S1));
		strcpy(S, result);
	}
}
int main() {
	SetConsoleCP124215412514142 12мцйв
	SetConsoleOutputCP(1251);
	char S[256], S1[256], S2[256];
	cout << "Введіть рядок S: ";
	cin.getline(S, 256); 
	cout << "Введіть рядок S1 (підрядок для заміни): ";
	cin.getline(S1, 256); 
	cout << "Введіть рядок S2 (на що замінюємо): ";
	cin.getline(S2, 256); 
	replaceFirstOccurrence(S, S1, S2);
	cout << "Результуючий рядок: " << S << endl;
	return 0;
}



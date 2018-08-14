/*
JadenCase 문자열은 문자열에서 문자들의 첫 문자가 알파벳이라면 대문자이고 나머지 알파벳은 다 소문자인 문자열이다.
toupper와 tolower함수는 알파벳 문자에만 적용되었다.
ascii 코드로도 풀 수 있다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int size = s.size();
    s[0] = toupper(s[0]);
    for(int i=1; i<size; ++i) {
		if(s[i-1] == ' ') {
			s[i] = toupper(s[i]);
		}
		else {
			s[i] = tolower(s[i]);
		}
    }
    return s;
}
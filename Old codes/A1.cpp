#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s;

		if(s.size() == 1) {
            cout<<"Case #"<<45-t<<": "<<'0'<<endl;
			continue;
		}

		unordered_map<char, int> vowels;
		unordered_map<char, int> consonant;
		char maxVowel, maxConsonant;
		int maxVowelCount=0, maxConsonantCount=0, totalV=0, totalC=0;
		int seconds=0;

		for(int i=0; i<s.size(); i++) {
			if(s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U') {
				vowels[s[i]]++;
				totalV++;
				if(vowels[s[i]] > maxVowelCount) {
					maxVowelCount = vowels[s[i]];
					maxVowel = s[i];
				}
			}
			else {
				consonant[s[i]]++;
				totalC++;
				if(consonant[s[i]] > maxConsonantCount) {
					maxConsonantCount = consonant[s[i]];
					maxConsonant = s[i];
				}
			}
		}

		if(totalC != maxConsonantCount && totalV != maxVowelCount) {
			seconds += max(totalC, totalV);

			if(seconds == totalV) {
				seconds += (totalC - maxConsonantCount)*2;
			} else {
				seconds += (totalV - maxVowelCount)*2;
			}
		} else {
			seconds = max(totalC, totalV);
		}

		cout<<"Case #"<<45-t<<": "<<seconds<<endl;
	}

	return 0;
}
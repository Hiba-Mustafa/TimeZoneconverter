#include "Time.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <unordered_map>

using namespace std;

class Country
{
	    Time timezone;
	
	    bool found;
	
	    string stadt;
	
	    unordered_map< string, int> country = {
	    {"afghanistan", 4}, {"alaska", -9}, {"argentina", -3}, {"armenia", 4}, {"azores", -1},
	    {"bangladesh", 6}, {"bhutan", 6}, {"brasilia", -3}, {"brazil", -3}, {"cambodia", 7},
	    {"canada", -5}, {"cape verde island", -1}, {"caracas", -4}, {"central america", -6}, {"chihuahua", -7},
	    {"china", 8}, {"colombia", -5}, {"cuba", -5}, {"egypt", 2}, {"fiji", 12},
	    {"france", 1}, {"georgia", 4}, {"germany", 1}, {"ghana", 0}, {"greece", 2},
	    {"greenland", -3}, {"guam", 10}, {"hawaii", -10}, {"iceland", 0}, {"india", 5},
	    {"indonesia", 7}, {"iran", 3}, {"iraq", 3}, {"italy", 1}, {"jakarta", 7},
	    {"japan", 9}, {"kazakhstan", 5}, {"kenya", 3}, {"korea", 9}, {"kuwait", 3},
	    {"la paz", -4}, {"mali", 0}, {"malaysia", 8}, {"marshall island", 12}, {"mazatlan", -7},
	    {"melbourne", 10}, {"mexico", -6}, {"midway island", -11}, {"moscow", 3}, {"myanmar", 6},
	    {"nepal", 5}, {"new zealand", 12}, {"newfoundland", -3}, {"nigeria", 1}, {"oman", 4},
	    {"pakistan", 5}, {"peru", -5}, {"philippines", 8}, {"poland", 1}, {"rio", -3},
	    {"russia", 3}, {"samoa", -11}, {"santiago", -4}, {"saudi arabia", 3}, {"senegal", 0},
	    {"singapore", 8}, {"solomon island", 11}, {"south africa", 2}, {"south korea", 9}, {"spain", 1},
	    {"sri lanka", 5}, {"sweden", 1}, {"sydney", 10}, {"thailand", 7}, {"tijuana", -8},
	    {"turkey", 3}, {"ukraine", 2}, {"united arab emirates", 4}, {"united kingdom", 0}, {"united states", -5},
	    {"uzbekistan", 5}, {"vanuatu", 11}, {"vietnam", 7}, {"vladivostok", 10} };
	
	    int Levenstein_Distance(const string& word1, const string& word2)
	    {
	        int m = word1.length();
	        int n = word2.length();
	
	        vector< vector < int>> dif(m + 1, vector<int>(n + 1));
	
	        for (int i = 0; i <= m; i++)
	        {
	            dif[i][0] = i;
	        }
	
	        for (int j = 0; j <= n; j++)
	        {
	            dif[0][j] = j;
	        }
	
	        for (int i = 1; i <= m; i++)
	        {
	            for (int j = 1; j <= n; j++)
	            {
	                if (word1[i - 1] == word2[j - 1])
	                {
	                    dif[i][j] = dif[i - 1][j - 1];
	                }
	                else {
	
	                    dif[i][j] = min({ dif[i - 1][j - 1] + 1, /// substitute
	                                    dif[i - 1][j] + 1,   /// deletion
	                                    dif[i][j - 1] + 1 });  /// insertation
	                }
	            }
	        }
	        return dif[m][n];
	    }

public:

	Country();

	Country(string paese, Time UTC);

	void setTimeLine(string paese, Time UTC);

    string getCountry();

	Time gettimeZone();

	void printnewTime();

};


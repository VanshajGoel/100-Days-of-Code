//Question -->https://www.hackerrank.com/challenges/queue-using-two-stacks/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    vector<int> arr;
    for(int i=0;i<q;i++)
    {
        int j;
        cin>>j;
        if(j==1)
        {
            int k;
            cin>>k;
            arr.push_back(k);
        }
        else if(j==2)
        {
            arr.erase(arr.begin());
        }
        else
        {
          cout<<arr.front()<<endl;
        }
    } 
    return 0;
}

//Question -->https://www.hackerrank.com/challenges/truck-tour/problem (One test case failed)
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int truckTour(vector<vector<int>> petrolpumps) {
vector<int> hmm;
for(int i=0;i<petrolpumps.size();i++)
{
    int temp=0;
    for(int j=0;j<petrolpumps[i].size();j++)
    {
      if(j==0)
        temp=petrolpumps[i][j];
      else  
        temp-=petrolpumps[i][j];
    }      
    hmm.push_back(temp);   
}
for(int i=0;i<hmm.size();i++)
{
    if(hmm[i]>=0)
    {
        int temp=i,left=0;
        for(int j=i;j<hmm.size();j++)
        {
            left+=hmm[j];
            if(left<0)
                break;
        }
        for(int j=0;j<i-1;j++)
        {
            left+=hmm[j];
            if(left<0)
              break;
        }
        if(left>=0)
          return temp;
    }
}
return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> petrolpumps(n);

    for (int i = 0; i < n; i++) {
        petrolpumps[i].resize(2);

        string petrolpumps_row_temp_temp;
        getline(cin, petrolpumps_row_temp_temp);

        vector<string> petrolpumps_row_temp = split(rtrim(petrolpumps_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int petrolpumps_row_item = stoi(petrolpumps_row_temp[j]);

            petrolpumps[i][j] = petrolpumps_row_item;
        }
    }

    int result = truckTour(petrolpumps);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

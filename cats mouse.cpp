#include <bits/stdc++.h>
#include<cmath>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
int n=grades.size();

vector<int>ans;
for(int i=0;i<n;i++){
    int b=(grades[i]/5+1)*5-grades[i];

    if(grades[i]<38){
        ans.push_back(grades[i]);
        continue;
    }
    else if(b<3) {
     int a=ceil(grades[i]/5)*5;

        ans.push_back(a);
    }

    else if(grades[i]%5==0) {
    ans.push_back(grades[i]);
    }else{
       ans.push_back(grades[i]);
    }
}
return ans;
}

int main()
{
vector<int> grades;
grades.push_back(73);
grades.push_back(67);
grades.push_back(38);
grades.push_back(33);

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";



    return 0;
}





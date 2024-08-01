#include<vector>
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int a = 0;
        for(const string & detail : details) {
            int age =stoi(detail.substr(11, 2));

            if(age>=60)
            a++;
        }
        return a;
    }
};
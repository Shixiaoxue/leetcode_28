#include<iostream>
using namespace std;
class Solution {
public:
    char* strStr(char *haystack, char *needle) {
        if(needle == NULL || haystack == NULL){
            return NULL;
        }
        int offset;
        int m = strlen(haystack);
        int n = strlen(needle);
        for(int i = 0;i < m - n + 1;i++){
            for(offset = 0;offset < n;){
                if(haystack[i+offset] == needle[offset]){
                    offset++;
                }
                else{
                    break;
                }
            }
            if(offset == n){
                return haystack+i;
            }
        }
        return NULL;
    }
};

int main() {
    Solution solution;
    char *haystack = "abcedf";
    char *needle = "cedf";
    char *str = solution.strStr(haystack,needle);
    cout<<str<<endl;
	system("pause");
    return 0;
}
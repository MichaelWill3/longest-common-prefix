#include <cassert>
#include <string>
#include <vector>

class solution
{
    public:
    static std::string longestCommonPrefix(const std::vector<std::string>& inputVector)
    {
        std::string commonPrefix = inputVector[0];
        size_t commonPrefixLength = inputVector[0].length();
        for(std::string inputString : inputVector)
        {
            commonPrefixLength = std::min(commonPrefixLength,inputString.length());
            bool abruptBreak = false;
            for(size_t charIndex = 0; charIndex < commonPrefixLength; charIndex++)
            {
                if(inputString.at(charIndex) != commonPrefix.at(charIndex)) 
                { 
                    commonPrefixLength = charIndex; 
                    abruptBreak = true; 
                    break;
                }
            }
            if(commonPrefixLength == 0) { break; }
        }
        return commonPrefix.substr(0,commonPrefixLength);
    }
};

int main()
{
    assert(solution::longestCommonPrefix({"flower","flow","flight"}).compare("fl") == 0 );
    assert(solution::longestCommonPrefix({"dog","racecar","car"}).compare("") == 0 );
    assert(solution::longestCommonPrefix({"ab","a"}).compare("a") == 0 );
    return 0;
}
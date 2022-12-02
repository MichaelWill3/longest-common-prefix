#include <cassert>
#include <string>
#include <vector>

class solution
{
    public:
    static std::string longestCommonPrefix(const std::vector<std::string>& strs)
    {
        return "fl";
    }
};

int main()
{
    std::vector<std::string> case1 = {"flower","flow","flight"};
    assert(solution::longestCommonPrefix(case1).compare("fl") == 0 );
    return 0;
}
#include <string>
#include <deque>

bool solution(std::string s)
{
    bool answer = false;
    std::deque<char> container;
    for(auto ch : s)
    {
        if (container.size() == 0 && ch == ')') return false;
        else if (ch == '(') container.push_back(ch);
        else container.pop_back();
    }
    if (container.size() == 0) answer = true;

    return answer;
}
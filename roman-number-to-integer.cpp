class Solution {
  public:
    int romanToDecimal(string &str) {
        
        int n = str.length();
    map<char, int> map;
    map.insert({'I', 1});
    map.insert({'V', 5});
    map.insert({'X', 10});
    map.insert({'L', 50});
    map.insert({'C', 100});
    map.insert({'D', 500});
    map.insert({'M', 1000});

    int sum = map[str[n - 1]];
    for (int i = n - 2; i >= 0; i--)
    {
        if (map[str[i]] >= map[str[i + 1]])
        {
            sum += map[str[i]];
        }
        else
        {
            sum -= map[str[i]];
        }
    }
    return sum;
    }
};

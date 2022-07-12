class Solution {
public:
     bool dfs(vector < int > & matchsticks, int ind, long sum1, long sum2, long sum3, long sum4, long target) {
      if (sum1 > target or sum2 > target or sum3 > target or sum4 > target) return false;

      if (ind == -1) {
        if (sum1 == target and sum2 == target and sum3 == target and sum4 == target)
          return true;
        else
          return false;
      }

      return dfs(matchsticks, ind - 1, sum1 + matchsticks[ind], sum2, sum3, sum4, target) or
      dfs(matchsticks, ind - 1, sum1, sum2 + matchsticks[ind], sum3, sum4, target) or
      dfs(matchsticks, ind - 1, sum1, sum2, sum3 + matchsticks[ind], sum4, target) or
      dfs(matchsticks, ind - 1, sum1, sum2, sum3, sum4 + matchsticks[ind], target);

    }
  bool makesquare(vector < int > & matchsticks) {
    long sum = 0;
    int n = matchsticks.size();
    for (int i = 0; i < n; i++) {
      sum += matchsticks[i];
    }

    if (sum % 4 != 0 or n < 4) return false;

    long target = sum / 4;
    sort(matchsticks.begin(), matchsticks.end());
    long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    return dfs(matchsticks, n - 1, sum1, sum2, sum3, sum4, target);
  }
};

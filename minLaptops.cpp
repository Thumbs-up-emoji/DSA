/*https://www.geeksforgeeks.org/problems/find-minimum-number-of-laptops-required--170645/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab*/
#include <bits/stdc++.h>

class Solution {
 public:
  // Function to find minimum number of laptops required
  int minLaptops(int N, int start[], int end[]) {
    vector<pair<int, int>> events;  // Store events (time, +/-1)

    // Populate events vector with start and end times as (time, +1) and (time, -1)
    for (int i = 0; i < N; i++) {
      events.push_back({start[i], 1});
      events.push_back({end[i], -1});
    }

    // Sort events based on time
    sort(events.begin(), events.end());

    // Initialize variables for tracking current usage and maximum usage
    int current_usage = 0;
    int max_usage = 0;

    // Iterate through sorted events
    for (auto& event : events) {
      // Update current usage based on event type (start/end)
      current_usage += event.second;

      // Update maximum usage if necessary
      max_usage = max(max_usage, current_usage);
    }

    // Return the maximum number of laptops needed
    return max_usage;
  }
};

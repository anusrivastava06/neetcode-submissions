class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int asteroid : asteroids) {

            bool destroyed = false;

            // Collision possible only when:
            // stack top is moving right (+)
            // current asteroid is moving left (-)

            while (!st.empty() && st.top() > 0 && asteroid < 0) {

                if (abs(st.top()) < abs(asteroid)) {
                    // Stack asteroid is smaller
                    st.pop();
                }
                else if (abs(st.top()) == abs(asteroid)) {
                    // Both destroy each other
                    st.pop();
                    destroyed = true;
                    break;
                }
                else {
                    // Current asteroid is smaller
                    destroyed = true;
                    break;
                }
            }

            // If current asteroid survived all collisions
            if (!destroyed) {
                st.push(asteroid);
            }
        }

        // Store answer
        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
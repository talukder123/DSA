class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_set<char> st; // taking a set to store the unique values

        for(char c : sentence) {
            st.insert(c); // insert into set
        }

        return st.size() == 26; // if set size is 26, return true / else false!
    }
}; 

// Hash_Map
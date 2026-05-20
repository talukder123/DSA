class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int idx = 0; // array modify er jonno use hobe

        for (int i=0; i<n; i++) { // total array wise loop
            char ch = chars[i]; // first e ekta ch dhorlam
            int count = 0;

            while (i < n && chars[i] == ch) { // jotokkhon first er ch aste thakbe count ++ hobe
                count++; i++;
            }

            if (count == 1) { // joid unique [ekta single ch] ch thake, taile just oitai bosbe,no number
                chars[idx++] = ch;
            } else {

                chars[idx++] = ch;
                string str = to_string(count); // int --> str kore nilam, cause we will insert ch

                for (char dig: str) { // for each loop diye string theke ch extract kortesi ar array te dhokaitesi
                    chars[idx++] = dig;
                }
            }
            i--; // jehetu while loop e i++ hocche, so eikhane i ek ghor besi point kortese tai -- kora lagbe
        }

        chars.resize(idx); // ekhon amader ch array ta resize korte hobe, cause eita na korle tu last er ch kora bose thakbe array te
        return idx; // last e jeita chaise oita return
        
    }
};
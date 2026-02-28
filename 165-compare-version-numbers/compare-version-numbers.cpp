class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;

while (i < version1.size() || j < version2.size()) {

    int num1 = 0, num2 = 0;

    // extract from version1
    while (i < version1.size() && version1[i] != '.') {
        num1 = num1 * 10 + (version1[i] - '0');
        i++;
    }

    // extract from version2
    while (j < version2.size() && version2[j] != '.') {
        num2 = num2 * 10 + (version2[j] - '0');
        j++;
    }

    // compare HERE (not outside)
    if (num1 > num2) return 1;
    if (num1 < num2) return -1;

    // skip '.'
    if (i < version1.size()) i++;
    if (j < version2.size()) j++;
    }
  return 0;
}
};

// Loop both versions together

// Extract one revision at a time

// Convert to integer

// Compare immediately

// If equal → move next

// If one version ends → treat as 0

// If all equal → return 0



//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        int a = num / 1000;
        num %= 1000;
        int b = num / 100;
        num %= 100;
        int c = num / 10;
        num %= 10;
        int d = num;
        switch (a) {
            case 1:
                s += "M";
                break;
            case 2:
                s += "MM";
                break;
            case 3:
                s += "MMM";
                break;
            case 4:
                s += "MMMM";
                break;
            case 5:
                s += "MMMMM";
                break;
            case 6:
                s += "MMMMMM";
                break;
            case 7:
                s += "MMMMMMM";
                break;
            case 8:
                s += "MMMMMMMM";
                break;
            case 9:
                s += "MMMMMMMMM";
                break;
            default:
                break;
        }
        switch (b) {
            case 1:
                s += "C";
                break;
            case 2:
                s += "CC";
                break;
            case 3:
                s += "CCC";
                break;
            case 4:
                s += "CD";
                break;
            case 5:
                s += "D";
                break;
            case 6:
                s += "DC";
                break;
            case 7:
                s += "DCC";
                break;
            case 8:
                s += "DCCC";
                break;
            case 9:
                s += "CM";
                break;
            default:
                break;
        }
        switch (c) {
            case 1:
                s += "X";
                break;
            case 2:
                s += "XX";
                break;
            case 3:
                s += "XXX";
                break;
            case 4:
                s += "XL";
                break;
            case 5:
                s += "L";
                break;
            case 6:
                s += "LX";
                break;
            case 7:
                s += "LXX";
                break;
            case 8:
                s += "LXXX";
                break;
            case 9:
                s += "XC";
                break;
            default:
                break;
        }
        switch (d) {
            case 1:
                s += "I";
                break;
            case 2:
                s += "II";
                break;
            case 3:
                s += "III";
                break;
            case 4:
                s += "IV";
                break;
            case 5:
                s += "V";
                break;
            case 6:
                s += "VI";
                break;
            case 7:
                s += "VII";
                break;
            case 8:
                s += "VIII";
                break;
            case 9:
                s += "IX";
                break;
            default:
                break;
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
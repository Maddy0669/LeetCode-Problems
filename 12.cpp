class Solution {
public:
    string intToRoman(int num) {
        string s="";
            if(num>=1000){
                int temp =num/1000;
                num=num%1000;
                while(temp--)
                    s=s+"M";
            }
            if(num>=900){
                num=num-900;
                s=s+"CM";
            }
            if(num>=500){
                num=num-500;
                s=s+"D";
            }
            if(num>=400){
                num=num-400;
                s=s+"CD";
            }
            if(num>=100){
                int temp =num/100;
                num=num%100;
                while(temp--)
                    s=s+"C";
            }
            if(num>=90){
                num=num-90;
                s=s+"XC";
            }
            if(num>=50){
                num=num-50;
                s=s+"L";
            }
            if(num>=40){
                num=num-40;
                s=s+"XL";
            }
            if(num>=10){
                int temp =num/10;
                num=num%10;
                while(temp--)
                    s=s+"X";
            }
            if(num>=9){
                num=num-9;
                s=s+"IX";
            }
            if(num>=5){
                num=num-5;
                s=s+"V";
            }
            if(num>=4){
                num=num-4;
                s=s+"IV";
            }
            if(num>=1){
                int temp =num/1;
                num=num%1;
                while(temp--)
                    s=s+"I";
            }
         return s;   
    }
};
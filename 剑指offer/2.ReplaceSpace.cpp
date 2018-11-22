class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count = 0;
        for(int i = 0; i < length ; i++){
            if(str[i] == ' ')
                count++;
        }
        for(int i = length-1 ; i >= 0 ; i--){
            if(str[i] != ' ')
                str[2*count + i] = str[i];
            else{ 
                count --;
                str[2*count+i] = '%';
                str[2*count+i+1] = '2';
                str[2*count+i+2] = '0';
            }
                
        }
	}
};
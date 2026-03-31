#include <iostream>
using namespace std;

 string decodeedstring(string s){

     string result =" ";
    for(int i=0;i<s.length();i++){


        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            //extract str from result 
            string str="";
            while(!result.empty() && result.back() !='['){
                str.push_back(result.back());
                result.pop_back();
                //pop_back remove last charcater 
            }
            reverse(str.begin() , str.end()); //reverse string 

            result.pop_back(); // remove last char from result which is [ '

            string num=" ";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
num.push_back(result.back());
result.pop_back();


            }

            reverse(num.begin(),num.end());

            int int_num = stoi(num); //convert string to integer 

            //inserting str in result int_num times 
            while(int_num){
                result +=str;
                int_num--;
            }


        }
    }
    return result;

 }

int main() {
    
    string str;
    cin>>str;

    cout<<decodeedstring(str)<<endl;

    return 0;
}

// Created by M*S €(^-^()

// remove special characters 7/31/ 2019 €(^-^()


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

int c =0;
string s;
vector<int> abc;
vector<int> asc;

cout << "Please enter a letter.  e.g.  Ju#@ly 4%!th" <<endl;
getline(cin,s);

const char *ab = s.c_str();

for(auto i = 0; i < s.size(); ++i){
    int m =(int)ab[i];
    abc.push_back(m);
}
for(auto j = 0; j< s.size(); ++j){
    
    if(abc[j] > 47 && abc[j] < 58){   // number
        int m1 = abc[j];
        asc.push_back(m1);
        
    }else if (abc[j] > 64 && abc[j] < 91){ // uppercase
        int m1 = abc[j];
        asc.push_back(m1);
            
    }else if (abc[j] > 96 && abc[j] < 123){  // lowercase
        int m1 = abc[j];
        asc.push_back(m1); 
        
     }else if(abc[j] == 32){   // spase
       int m1 = abc[j];
        asc.push_back(m1); 
        
     }else{
         c = c+1;
     }
}

for(auto j1 = 0; j1< s.size()-c; ++j1){

    char ss = asc[j1];
    cout << ss ;
}
cout << endl;

    return 0;
}
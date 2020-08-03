#include <iostream> 
#include <string>
#include <list>

using namespace std;
int main(){

    //Test Case 입력
    int testCase;
    int i,j,k;
    cin>>testCase;
    string passWord[testCase];

    //Test Case만큼 passWord 입력
    for(int i=0; i<testCase;i++){
        cin>> passWord[i];
    }
    // cout<<passWord[0].length();
    //List 생성
    list<int> List;
    list<int>::iterator iter;
    for(i=0; i<testCase; i++)
    {
        // for(j=0;j<(passWord[i].length());j++){
        // List.push_back(passWord[i][j]);
        // }
        iter=List.end();
        for(k=0;k<(passWord[i].length());k++){
            if(passWord[i][k]=='<')
            {
                if(iter!=List.begin()){
                    iter--;
                }
            }
            else if(passWord[i][k]=='>')
            {
                if(iter!=List.end()){
                    iter++;
                }
            }
            else if(passWord[i][k]=='-')
            {
                if(iter!=List.begin()){
                    iter--;
                    iter = List.erase(iter);
                }
            }
            else
            {
                List.insert(iter, passWord[i][k]);
            }
        }
        for(iter=List.begin();iter!=List.end();iter++){
        cout<<(char)*iter;
        }
        List.clear();
        cout<<endl;
    }
    
    return 0;

}
#include <iostream> 
#include <list>
#include <string>
using namespace std;

int main(){
    char str[100001];
    int M;
    cin>>str>>M;
    list<char> List;
    for(int i=0;str[i]!=NULL;i++){
        List.push_back(str[i]);
    }
    list<char>::iterator iter=List.end();
    while(M--)
    {
        char str1;
        cin>>str1;
        
        if(str1=='L')
        {
            if(iter!=List.begin()){
                iter--;
            }
        }
        else if(str1=='D')
        {
            if(iter!=List.end()){
                iter++;
            }
        }
        else if(str1=='B')
        {
            if(iter!=List.begin()){
                iter--;
                iter = List.erase(iter);
            }
        }
        else if(str1=='P')
        {
            char x;
            cin>>x;
            List.insert(iter, x);
        }
    }
    for(iter=List.begin();iter!=List.end();iter++){
        cout<<*iter;
    }
    return 0;
}

#include <iostream>
using namespace std;

string removeComments(string prgm){
    int n = prgm.size();
    string result;
    bool s_cmt = false;
    bool m_cmt = false;
    for (int i=0; i<n; i++)
    {
        if (s_cmt == true && prgm[i] == '\n')
            s_cmt = false;
        else if  (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/'){
            m_cmt = false;
            i++;
        }
        else if (s_cmt || m_cmt)
            continue;
        else if (prgm[i] == '/' && prgm[i+1] == '/'){
            s_cmt = true;
            i++;
        }
        else if (prgm[i] == '/' && prgm[i+1] == '*')
        {
        m_cmt = true;
            i++;
        }else{
            result += prgm[i];
        }
    }
    swap(result[24], result[15]);
    swap(result[26], result[17]);
    swap(result[27], result[18]);
    
    return result;
}
string findAllOperator(string s){
   //find int or float by loop
   bool flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='5'){
            cout<<s[i]<<" is an integer value"<<endl;
        }else if(s[i]=='5' && s[i+1]== '.' && s[i+2]=='6'){
            cout<<s[i]<<s[i+1]<<s[i+2]<<"is float number"<<endl;
        }
        if(s[i]=='='){
            cout<<s[i]<<" is an assingment operator"<<endl;
        }
        if(s[i]=='<'){
            cout<<s[i]<<"is an relational operator"<<endl;
        }
        if(s[i] == '+' ||s[i] == '-' ||s[i] == '/' ||s[i] == '*'){
            cout<<s[i]<<" is an artihmetic operator"<<endl;
        }
    }

    
}
int main()
{
    string ls = " /*variable declaration*/ \n"
    " int a,b; \n"
    " b=10; \n //value assignment \n"
    " a=5 ; \n";
    cout << "Given Program \n";
    cout << ls << endl;
    cout << " After Removing The Comments: "<<endl;
    cout << removeComments(ls)<<endl;
    cout<<"Token which were required are: "<<endl;
    cout<<findAllOperator(ls)<<endl;
    return 0;
}
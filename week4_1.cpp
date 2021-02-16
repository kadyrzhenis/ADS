#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct myque{
    private:
   vector<int> v;
    int first;
    public:
    myque(){
        first=0;
    }
    void add(int x){
        v.push_back(x);
    }int cut(){
        int res=v[first];
        first++;
        return res;
    }

}; int main(){
    myque m;
    m.add(5);
    m.add(7);
     m.add(75);
    m.add(76);
     m.add(15);
    m.add(77);
    
    cout<<m.cut()<<endl;
    cout<<m.cut()<<endl;
    cout<<m.cut()<<endl;
     cout<<m.cut()<<endl;
    cout<<m.cut()<<endl;
    cout<<m.cut()<<endl;
    return 0;
}
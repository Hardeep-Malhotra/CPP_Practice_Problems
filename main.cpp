#include<iostream>
using namespace std;

class LandVechicle{
    public:

    void landvechile(){
        cout<<"This is landvehile ."<<endl;
    }
};


class Watervechicel:public LandVechicle{
    public:
    void watervechial(){
        cout<<"This is watervechiale."<<endl;
    }

};


class abbimugous : public Watervechicel{
    public:
    void ambhi(){
        cout<<"thisis abou vechil."<<endl;
    }
};

int main(){
  abbimugous obj;
   
  obj.ambhi();
  obj.landvechile();
  obj.watervechial();
}
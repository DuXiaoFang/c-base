#include <iostream>
using namespace std;

class AbstractDrinking{
public:
    virtual void Boil() =0;

    virtual void Brew() =0;

    virtual void PourInCup()=0;

    virtual void PutSomething()=0;

    void makeDrink(){
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};


class Coffe: public AbstractDrinking{
public:
    virtual void Boil(){
        cout<<" Boilcoffe"<< endl;
    }

    virtual void Brew(){
        cout<<" Brewcoffe"<< endl;       
    }

    virtual void PourInCup(){
        cout<<" PourInCupcoffe"<< endl;        
    }

    virtual void PutSomething(){
        cout<<" PutSomethingcoffe"<< endl;        
    }

};

class Tea: public AbstractDrinking{
public:
    virtual void Boil(){
        cout<<" Boiltea"<< endl;
    }

    virtual void Brew(){
        cout<<" Brewtea"<< endl;       
    }

    virtual void PourInCup(){
        cout<<" PourInCuptea"<< endl;        
    }

    virtual void PutSomething(){
        cout<<" PutSomethingtea"<< endl;        
    }

};

void dowork(AbstractDrinking* abs){
    abs->makeDrink();
    delete(abs);
}

void test(){
    //AbstractDrinking* abs = new Coffe;
    //dowork(abs);
    dowork(new Coffe);
}


int main(){
    test();
    return 0;
}
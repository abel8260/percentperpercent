#include <iostream>
#include <string>

using namespace std;

//namespace usage

const float __eweek__ = 5.26315789;
const float __maxin_t__ = 20.0;
const float __maxin_p__ = 100.0;

// contant and static values

class Estimate{
    public:
        float basic = 0.0;// basic percent of shops progress(basic = 100 item per shop)
        float rweek = 0.0; // percent week already progress
        // fazer constante float eweek = 0.0; // percent per week fixed
        float arate = 0.0; // total rate of progress on populate the database with refference to the
        //process of art
    Estimate(){
        float bshop_i = 0.0;
        float bshop_n = 0.0;
        cout << "type the number of shops already got complete: ";
        cin >> bshop_i;
        cout << "type the number of items on the total: ";
        cin >> bshop_n;


        basic = (bshop_i/(38.0))*100;
        rweek = (bshop_i/(38.0))*100;
        arate = (bshop_n/3800)*100;
        cout << "============================" << endl;
        cout << "basic_complete in 100pp: " << basic << endl;
        cout << "estimate rate for the week: " << rweek << endl;
        cout << "acumulated rate by actually: " << arate << endl;

    };// constructor method
};
class Shop{
    public:
        string name_shop = "";
        float now_pct = 0.0;
        float now_ptwty = 0.0;

    // public items to be initializated

    Shop(string ns, float npt, float nptwy){
        name_shop = ns;
        now_pct = npt;
        now_ptwty = nptwy;
        string lines = "(" + to_string(npt) + "/" + to_string(__maxin_t__) + ")";
        string passes = "(" + to_string(nptwy) + "/" + to_string(__maxin_p__) + ")";

        string retorno = name_shop + ": " + lines + passes;

        cout << retorno << endl;

    };

    //lines and passes variables are to obey the rule of 90 chars

};



int main()
{

    Estimate();
    //constructor method from Estimate class

    cout << "------------------------" << endl;

    Shop("radiant star", 20.0, 100.0);
    Shop("enemy lv1 ", 20.0, 100.0);
    Shop("enemy lv2 ", 20.0, 100.0);
    Shop("books ", 20.0, 100.0);
    Shop("pets ", 20.0, 100.0);
    Shop("gods pets ", 20.0, 100.0);
    Shop("External parts ", 20.0, 100.0);
    Shop("Clan custom ", 20.0, 100.0);
    Shop("Scenes ", 20.0, 100.0);
    Shop("Mapa local ", 7.0, 35.0);

    //constructors methods to list and trait data;

    return 0; // return no errors statement

}

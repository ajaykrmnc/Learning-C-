#include <iostream>
using namespace std;
// traditional enumerated Types
enum day {Sunday, Monday, Tuesday, Thursday, Friday, Saturday};
enum WorkDay {Mon = 1, Tues, Wed, Thurs, Fri};

// Strongly typed enumerated types can be a strict

enum struct WinterHoliday {Diwali, Hanukkah, ThreeKind, StLucia, Chhath, Vasant, Dusshera};
enum class Holiday : short int {NewYear = 1, MLK, Memorial, Indepence, Labor, Thanksgiving};

int main(){
    day birthday = Monday;
    WorkDay payday = Fri;

    WinterHoliday myTradition = WinterHoliday::Chhath;
    Holiday favorite = Holiday::NewYear;

    cout << "Birthday is" << birthday << endl;
    cout << "Payday is" << payday << endl;
    cout << "Traditional Winter Holiday is " << static_cast<int> (myTradition) << endl;
    cout << "Favorite Holid is " << static_cast<short int> (favorite) << endl;
    return 0;
}

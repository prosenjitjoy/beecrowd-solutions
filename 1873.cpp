#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    string a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a==b)
            c="empate";

        else if (a=="tesoura" && b=="papel")
            c="rajesh";
        else if (b=="tesoura" && a=="papel")
            c="sheldon";

        else if (a=="papel" && b=="pedra")
            c="rajesh";
        else if (b=="papel" && a=="pedra")
            c="sheldon";

        else if (a=="pedra" && b=="lagarto")
            c="rajesh";
        else if (b=="pedra" && a=="lagarto")
            c="sheldon";

        else if (a=="lagarto" && b=="spock")
            c="rajesh";
        else if (b=="lagarto" && a=="spock")
            c="sheldon";

        else if (a=="spock" && b=="tesoura")
            c="rajesh";
        else if (b=="spock" && a=="tesoura")
            c="sheldon";

        else if (a=="tesoura" && b=="lagarto")
            c="rajesh";
        else if (b=="tesoura" && a=="lagarto")
            c="sheldon";

        else if (a=="lagarto" && b=="papel")
            c="rajesh";
        else if (b=="lagarto" && a=="papel")
            c="sheldon";

        else if (a=="papel" && b=="spock")
            c="rajesh";
        else if (b=="papel" && a=="spock")
            c="sheldon";

        else if (a=="spock" && b=="pedra")
            c="rajesh";
        else if (b=="spock" && a=="pedra")
            c="sheldon";

        else if (a=="pedra" && b=="tesoura")
            c="rajesh";
        else if (b=="pedra" && a=="tesoura")
            c="sheldon";
        cout << c << endl;
    }
    return 0;
}

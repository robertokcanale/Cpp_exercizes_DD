#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Happy");
    string s2("Birthday");
    string s3;

    //Equality test
    cout << "s1 is:"<< s1 << "\"; s2 is \"" << s2 << "\"; s3 is \""<< s3 << "\"" << "\n Comparing s2 and s1:"
    <<"\n s2 == s1 yields "<< (s2 == s1 ? "true" : "false")
    <<"\n s2 != s1 yields "<< (s2 != s1 ? "true" : "false")
    <<"\n s2 > s1 yields "<< (s2 > s1 ? "true" : "false")
    <<"\n s2 < s1 yields "<< (s2 < s1 ? "true" : "false")
    <<"\n s2 >= s1 yields "<< (s2 >= s1 ? "true" : "false")
    <<"\n s2 <= s1 yields "<< (s2 <= s1 ? "true" : "false");

    //Test with an empty member, s3
    if(s3.empty()){

        cout << "s3 is empty; assigning s1 to s3" << endl;

        s3 = s1;

        cout << "s3 = << \"" <<s3<< "\"";

    }

    //test overloaded string concatenation operator
    cout << "\n\ns1 += s2 yields s\ = ";
    s1 += s2;
    cout << s1;

    //test overloaded concatenation with char *
    cout << "\n\ns1 += \" to you \" yields s\ = ";
    s1 += " to you";
    cout << "s1 =" <<s1<< endl;

    //test substr

    cout << "Substring of s1 starting at 0 for \n"<<"14 charachters, s1.substr(0,14) is: \n" << s1.substr(0,14) << endl;

    //test to end of string

    cout << "Substring of s1 starting at\n"<<"location 15, s1.substr(15) is: \n" << s1.substr(15) << endl;

    //test copy constructor

    string s4(s1);

    cout <<"\ns4="<< s4 << endl;

    //test overloaded assignment with self assignments

    cout <<"\nAssigning s4 to s4" << endl;

    s4 = s4;

    cout <<"\ns4=" << s4 << endl;

    //test overloaded subscript

    s1[0] = 'H';
    s1[6] = 'B';

    cout <<"\ns1 after     s1[0] = 'H' and s1[6] = 'B' is:" << s1<< endl;
    //test subscript out of range with string member fucntion
    try {

        cout << "Attempt to assign 'd' to s1.at(30): " <<  endl;
        s1.at(30)= 'd'; //it's gonna give me an error boyo

    } catch (out_of_range &ex){

    cout << "An exception occurred" << ex.what() << endl;

    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main ()
{

    string str1 = "Hello";
    string str2 = "World";
    string str3, str4;
    string::iterator it;
    int  len;

    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // total length of str3 after concatenation
    len = str3.size();
    cout << "str3.size() :  " << len << endl;

    len = str3.length();
    cout << "str3.length() :  " << len << endl;

    // points to the start of the string
    it = str3.begin();
    cout << "str3.begin() :  " << *str3.begin() << endl;
    cout << "str3.begin() :  " << *it << endl;

    // points to the end of the string
    it = str3.end();
    cout << "str3.end() :  " << *str3.end() << endl;
    cout << "str3.end() :  " << *(it-1) << endl;

    // resizes str4 to size 5
    str4 = str3;
    cout << "str4: " << str4 << endl;
    str4.resize(5);
    cout << "str4.resize(5) :  " << str4 << endl;

    // resizes str4 to size 12 and fill the extra 2 space with !
    str4 = str3;
    str4.resize(12, '!');
    cout << "str4.resize(12) :  " << str4 << endl;

    // Returns a reference to the character at position i in the string.
    cout<<"str3 printed with at(): ";
    for (unsigned i=0; i<str3.length(); ++i)
    {
        cout << str3.at(i);
    }

    // str append
    str4.clear();
    cout<<"\nstr4: "<<str4<<endl;
    str4.append(str1);
    cout<<"str4, After appending str1: "<<str4<<endl;
    str4.append(str2);
    cout<<"After appending str2: "<<str4<<endl;

    // str push_back
    cout<<"str4: "<<str4<<endl;
    str4.push_back('!');
    cout<<"str4, after push_back('!'): "<<str4<<endl;


    // used in the same order as described above:
    cout<<"str1: "<<str1<<endl;
    str1.insert(5,str2);                 // str2 is inserted at pos 5
    cout<<"str1.insert(5,str2): "<<str1<<endl;
    str1.insert(5,str2,2,3);             // str2 appended from pos 2 of size 3
    cout<<"str1.insert(5,str2,2,4): "<<str1<<endl;
    str1.insert(5,2,':');               // appends ':' '2' times at pos 5
    cout<<str1<<endl;

    string str5 ("This is an example sentence.");
    cout << "str5: "<<str5 << '\n';
    // "This is an example sentence."
    str5.erase (10,8); // "erasing from pos 10 string size 8"
    cout <<"str5.erase(10,8): "<< str5 << '\n';
    str5.erase (str5.begin()+9);
    cout << "str5.erase (str5.begin()+9): "<<str5 << '\n';
    str5.erase (str5.begin()+5, str5.end()-9);  //
    cout << "str5.erase (str5.begin()+5, str5.end()-9): "<<str5 << '\n';
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> v1;
    v1.push_back("javaTpoint ");
    v1.push_back("tutorial");
    for(vector<string>::iterator itr=v1.begin(); itr!=v1.end(); ++itr)
        cout<<*itr<<endl;

    // at() -> 	It provides a REFERENCE to an element.
    vector<int> v2{1,2,3,4};
    for(int i=0; i<v2.size(); i++)
        cout<<v2.at(i)<<" ";

    // back() -> It gives a REFERENCE to the last element.
    vector<string>  fruit{"mango","apple","banana"};
    cout<<"\n"<<fruit.back()<<endl;

    // front() -> It gives a REFERENCE to the first element.
    vector<string>  language{"java","C","C++"};
    cout<<language.front()<<endl;

    //swap() -> 	It exchanges the elements between two vectors.
    vector<int>  v3= {1,2,3,4,5};
    vector<int>  v4= {6,7,8,9,10};
    cout<<"Before swapping,elements of v3 are :";
    for (int i=0; i<v3.size(); i++)
        cout<<v3[i]<<" ";
    cout<<'\n';
    cout<<"Before swapping,elements of v4 are :";
    for(int i=0; i<v4.size(); i++)
        cout<<v4[i]<<" ";
    cout<<'\n';
    v3.swap(v4);
    cout<<"After swapping,elements of v3 are  :";
    for(int i=0; i<v3.size(); i++)
        cout<<v3[i]<<" ";
    cout<<'\n';
    cout<<"After swapping,elements of v4 are:";
    for(int i=0; i<v4.size(); i++)
        cout<<v4[i]<<" ";

    // push_back() -> adds a new element at the end of the vector.
    vector<char> v5;
    v5.push_back('j');
    v5.push_back('a');
    v5.push_back('v');
    v5.push_back('a');
    for(int i=0; i<v5.size(); i++)
        cout<<v5[i];

    // pop_back() -> deletes the last element and reduces the size of the vector by one.
    vector<string> v{"welcome","to","javaTpoint","tutorial"};
    cout<<"\nInitial string is : ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<'\n';
    cout<<"After deleting last string, string is : ";
    v.pop_back();
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    // empty() -> determines whether the vector is empty or not.
    vector<int> v6;
    if(v6.empty())
        cout<<"\nVector v is empty";
    else
        cout<<"\nVector v is not empty";

    // insert() -> used to insert new element at specified position.
    vector<string> v7{"java"};
    string str="programs";
    v7.insert(v7.begin()+1,str);
    for(int i=0; i<v7.size(); i++)
        cout<<v7[i]<<" ";

    // erase() -> deletes the specified elements pointed by the iterator.
    vector<string>  fruits{"mango","apple","strawberry","kiwi","banana"};
    cout<<"\nfruit names are : ";
    for(int i=0; i<fruits.size(); i++)
        cout<<fruits[i]<<" ";
    cout<<'\n';
    fruits.erase(fruits.begin()+1,fruits.begin()+3);
    cout<<"After removing apple and strawberry fruits: "<<'\n';
    for(int i=0; i<fruits.size(); i++)
        cout<<fruits[i]<<" ";

    // resize() -> modifies the size of the vector to the specified value.
    vector<string>  v9{"java","C","C++"};
    cout<<"\nElements of v1 are : ";
    for(int i=0; i<v9.size(); i++)
        cout<<v9[i]<<" ";
    v9.resize(5,".Net");
    for(int i=0; i<v9.size(); i++)
        cout<<v9[i]<<" ";
    return 0;
}

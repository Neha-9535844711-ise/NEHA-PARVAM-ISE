 #include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
    string text;
    ifstream MyFile("C:\\parvam\\anu.txt");
    
    getline(MyFile,text);
    cout<<text;
    MyFile.close();
    return 0;
 }
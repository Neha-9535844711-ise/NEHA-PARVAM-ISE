 #include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
  ofstream MyFile("C:\\parvam\\anu.txt");
  MyFile<<"hello world!"<<endl;
  MyFile<<" hope your are fine"<<endl;
  MyFile.close();
  return 0;
 }